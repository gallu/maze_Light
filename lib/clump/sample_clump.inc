<?php
/*
 * ����ץ���
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
  $this->set_element();	// �桼����Ͽ���̤����Ǥ���Ͽ
}

/**
 * ����Ū�ʾ��������
 *
 * �ơ��֥�̾����ӥ����̾�����ꤹ��
 *
 * @access protected
 * @return boolean false�ϸ������곰��
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
