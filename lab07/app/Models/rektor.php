<?php

namespace Scheduler\Models;

class rektor extends SpecialEvents {

	public function getFormName(): string {
		return "Godziny rektorskie";
	}
	public function getColor(): string {
		return "Red";
	}

}
