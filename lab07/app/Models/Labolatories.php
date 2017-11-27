<?php

namespace Scheduler\Models;

class Labolatories extends SemesterClass {

	public function getFormName(): string {
		return "laboratoria";
	}
	public function getColor(): string {
		return "Green";
	}

}
