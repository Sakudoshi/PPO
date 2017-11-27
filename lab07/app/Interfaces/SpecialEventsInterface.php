<?php

namespace Scheduler\Interfaces;

interface SpecialEventsInterface {

	public function getName(): string;
	public function getFormName(): string;
	public function getColor(): string;

}
