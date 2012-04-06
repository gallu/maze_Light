<?php
/*
 * ユーザ認証用
 *
 */
require_once("data_clump.inc");

class auth_admin_user_clump extends data_clump {

public function __construct()
{
  //$this->init();
  parent::__construct();
}

public function init()
{
  parent::init();
  $this->set_element();	// ユーザ登録画面の要素を登録
}

/**
 * 基本的な情報の設定
 *
 * テーブル名およびカラム名を設定する
 *
 * @access protected
 * @return boolean falseは現状想定外。
 */
protected function set_element()
{
  //
  $this->set_table_name('auth_admin_user');

  // $inname, $cginame, $tmpname, $dbname, $keyflg
  $this->push_element('id', '', '', '', 'pk');
  $this->push_element('pass', '', '', '', '');
  $this->push_element('status', '', '', '', '');
  $this->push_element('lock_time', '', '', '', '');
  $this->push_element('err_count', '', '', '', '');
}

//private:


} // end of class

