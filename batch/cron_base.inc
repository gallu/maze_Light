<?php
//
//require_once('/opt/www/hoge/wwwroot/base.inc');
require_once( dirname(__FILE__) . '/../wwwroot/base.inc');

//
require_once('db_manager.inc');
require_once('controller.inc');

//
$co = new controller;
$co->set_base_path($bp);
$co->set_config($config);
$cobj = $co->get_config_obj();

// dbh
$dbh = db_manager::get_handle( $cobj->find('db_config_path') );
