<?php
/*
 * サンプル用
 *
 */


require_once("data_clump.inc");

class sample_clump extends data_clump {

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
  $this->set_table_name('table_name');

  // $inname, $cginame, $tmpname, $dbname, $keyflg
  $this->push_element('id', '', '', '', 'pk');
  $this->push_element('any_data', '', '', '', '');
  $this->push_element('insert_date', '', '', '', '');

}

//private:


} // end of class

