<?php

namespace Scheduler\Models;

class immatrykulacja extends SpecialEvents {

	public function getFormName(): string {
		return "Immatrykulacja";
	}
	public function getColor(): string {
		return "Red";
	}

}
