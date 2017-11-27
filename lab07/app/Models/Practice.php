<?php

namespace Scheduler\Models;

class Practice extends SemesterClass {

	public function getFormName(): string {
		return "ćwiczenia";
	}
	public function getColor(): string {
		return "DarkGreen";
	}

}
