<?php

require "./vendor/autoload.php";

use Scheduler\Models\Lecture;
use Scheduler\Models\Practice;
use Scheduler\Models\Labolatories;
use Scheduler\Models\Wf;
use Scheduler\Models\Schedule;
use Scheduler\Models\rektor;
use Scheduler\Models\immatrykulacja;

$twig = new Twig_Environment(new Twig_Loader_Filesystem("/"), []);

$schedule = new Schedule();

$schedule->save(new Lecture("Bazy danych","Maciej Glem","A","365"), 1, 1);
$schedule->save(new Lecture("Programowanie i projektowanie obiektowe","Maciej Mlem","A",375), 1, 2);
$schedule->save(new Practice("Ćwiczenia","Maciej Mlem","Z",375),5,2);
$schedule->save(new Labolatories("coś","Maciej Mlem","G",250),2,5);
$schedule->save(new Wf("Ćwiczenia","Maciej Mlem","A",375),1,5);
$schedule->save(new Lecture("Matematyka","Maciej Glem","A",375), 1, 6);
$schedule->save(new Practice("Bazy Danych","Maciej Mlem","Z",320),3,3);
$schedule->save(new Labolatories("Fizyka","Maciej Blem","G",100),4,1);
$schedule->save(new Wf("","Maciej Mlem","A",375),5,5);
$schedule->save(new Lecture("Filozofia sportu","Maciej Glem","D",123), 1, 4);
$schedule->save(new Lecture("Filozofia filozofii","Maciej Czo","B",275), 1, 2);
$schedule->saveEvent(new rektor(""),1,5);
$schedule->saveEvent(new immatrykulacja("Super ważne, obiecuję"),2,2);
//$schedule->onlyClass("365");
//$schedule->onlyLesson("WF");
//$schedule->onlyTeacher("Maciej Glem");
//$schedule->onlyBuilding("Z");
echo $twig->render("index.twig", [
    "schedule" => $schedule,
]);
