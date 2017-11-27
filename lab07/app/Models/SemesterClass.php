<?php

namespace Scheduler\Models;

use Scheduler\Interfaces\SemesterClassInterface;

abstract class SemesterClass implements SemesterClassInterface {

	private $name;
	private $teachername;
	private $classes;
	private $building;

	public function __construct(string $name, string $teachername,string $building, string $classes) {
		if (!is_numeric($classes))
			exit("Sala nie jest liczbą");
		$this->name = $name;
		$this->teachername = $teachername;
		$this->building = $building;
		$this->classes = $classes;
	}

	public function getName(): string {
		return $this->name;
	}
	public function getTeacherName(): string {
		return $this->teachername;
	}
	public function getBuilding(): string {
		return $this->building;
	}
	public function getClasses(): string {
		return $this->classes;
	}

}
