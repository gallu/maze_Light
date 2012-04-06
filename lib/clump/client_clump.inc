<?php
/*
 * ユーザテーブル
 *
 */


require_once("data_clump.inc");

class client_clump extends data_clump {

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
  $this->set_table_name('client');

  // $inname, $cginame, $tmpname, $dbname, $keyflg
  $this->push_element('client_id', '', '', '', 'pk');
  $this->push_element('email', '', '', '', '');

}

//private:


} // end of class

