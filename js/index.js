// เรียกกล่อง pit ทุก pit มาให้ js ใช้งาน
	var x = "Welcome to Hit the cat game!!!!!\n\t\tLet\'s go!";
	alert(x,"Let\'s go!");
	var y = alert(prompt("Enter your name"));
	pits = document.querySelectorAll('pit');

	// เวลาในการเตรียมตัว (s)
	preparing = 5;
	// ระยะเวลาที่ตุ่นจะเกิด (ms)
	birth = 500;
	// ระยะเวลาที่ตุ่นจะอยู่รอโดนตี (ms)
	delay = 1000;

	//ฟังก์ชันหลังโหลดเว็บเสร็จ จะนับถอยหลัง 5 วินาที แล้วเริ่มเกม
	function ready(){
		// คะแนนเริ่มต้น
		score = 0;
		// เวลาในการเล่นเกม (s)
		time = 30;

		// รีเซ็ทเวลา
		updateTime();
		// รีเซ็ทคะแนนให้คนดู
		updatScore();
		// reset ทุกหลุมให้ว่าง
		for (var i = 0; i < pits.length; i++) {
			pits[i].setAttribute("status","blank");
		}

		for (let i = 0; i < preparing; i++) {
			setTimeout(
				function(){
					console.log(i);
					subTitle.innerText = "Ready! Game start in "+(preparing-i);
				},i*1000);
		}
		// หมดเวลาเตรียมตัว เรื่มเกมได้!
		setTimeout(
			function(){
				subTitle.innerText = "Play!";
				countdown();
				reloadMole();
			}
			,preparing*1000);
	}

	// สำหรับสั่งให้เวลาลด
	function countdown(){
		// ทุกๆ 1 วินาที เวลาต้องลด
		cd = setInterval(
			function(){
				// ถ้ายังไม่หมดเวลา
				if (time > 0) {
					// ลดเวลา
					time--;
					// อัพเดทเวลา
					updateTime();
				}
				// ถ้าหมดเวลา
				else{
					clearInterval(cd);
					console.log("END");
				}
			}
			,1000)
	}

	// ฟังก์ชันเกม โดยจะคอยเรียกตัวเองจนกว่าจะตาย หลักการคือ ทุกๆ เวลา birth จะมีตุ่นโผล่หน้ามา โดยสุ่มว่าจะเกิดที่ไหน จากนั้นจะรอใหโดนตีตามเวลา delay ถ้าหมดเวลา delay ยังไม่โดนตี จะหายไป 
	function reloadMole(){
		// ถ้าเวลาไม่หมด ให้ทำตามนี
		if (time>0) {
			// สุ่มเลขหลุมที่จะเกิด ตั้งแต่เลข 0 ถึง 15
			var randomPit = Math.floor(Math.random() * 16);

			// ตั้ง status ให้หลุมที่สุ่มได้ เป็นตุ่นโผล่มา
			pits[randomPit].setAttribute("status","mole");

			// ตั้งเวลาว่า เมื่อหมดเวลา ตุ่นจะหายไป
			setTimeout(
				function(){
					// ถ้าเวลายังไม่หมด ตุ่่นจะหาย
					if (time>0) {
						pits[randomPit].setAttribute("status","blank");
					}
				}
				,delay);
			// กำหนดหน่วงเวลาไว้ พอหมดเวลา ให้แรนดอมตุ่นออกมาต่ออีกรอบ
			setTimeout(
				function(){
				// เรียกตัวเอง
				reloadMole()
			}
			,birth);
		}
	}

    // สำหรับการตี
    function hit(pit){
    	// ตีได้ต่อเมื่อไม่หมดเวลา
    	if (time>0) {
    		// ดูว่า  status ตอนนี้คืออะไร
    		var status = pit.getAttribute("status");
    		// ถ้าตีโดนตุ่น ปรับเป็น die
    		if (status == "mole") {
    			pit.setAttribute("status","die");
    			// กดถูกได้คะแนน
    			score++;

    		}
    		// ถ้าตีโดน blank จะกลายเป็น miss
    		else if(status == "blank"){
    			pit.setAttribute("status","miss");
    	// คะแนนไม่ติดลบเมื่อเท่ากับ 0
    			if (score==0)
            score = 0;
   // ถ้าคะนนไม่เท่ากับ 0 จะติดลบตามปกติ
          else
            score--;
    		}
    		// แสดงคะแนนให้คนดู
    		updatScore();
    	}
    }

    // สำรหรับโชว์คะแนน
    function updatScore(){
    	// แสดงคะแนนให้คนดู
    	theScore.innerText = score;
    }

    //สำหรับโชว์เวลา
    function updateTime(){
    	// แสดงเวลา
    	theTime.innerText = time;

    	// ถ้าหมดเวลา ให้บอก
    	if (time == 0) {
    		subTitle.innerHTML = "Time's up! <a href='#!' onclick='ready()'>try again</a>";
    	}
    }



    ready();