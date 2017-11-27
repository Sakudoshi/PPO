<?php

namespace Scheduler\Models;

use Scheduler\Interfaces\SpecialEventsInterface;

abstract class SpecialEvents implements SpecialEventsInterface {

	private $name;

	public function __construct(string $name) {
		$this->name = $name;
	}

	public function getName(): string {
		return $this->name;
	}
}
