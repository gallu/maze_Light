<?php
/*
 * �桼���ơ��֥�
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
  $this->set_table_name('client');

  // $inname, $cginame, $tmpname, $dbname, $keyflg
  $this->push_element('client_id', '', '', '', 'pk');
  $this->push_element('email', '', '', '', '');

}

//private:


} // end of class
