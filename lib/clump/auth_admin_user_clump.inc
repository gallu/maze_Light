<?php
/*
 * �桼��ǧ����
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
