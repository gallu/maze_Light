<?php

/***************************************************
 * トップ画面
 *
 *
 * @package
 * @access  public
 * @author  
 * @create  
 * @version 
 ***************************************************/

require_once('common/base_model_sample_front_base.inc');
require_once('conv_util.inc');

class mw_index extends base_model_sample_front_base {

//
//public function initialize() {  }
//public function finalize() {  }

//処理
public function execute() {
//print "Trap 1\n";

  //
  $req = $this->get_cgi_request();
  $conv = $this->get_conv();

  // XXX
  $sp = new simple_put;
/*
  if (false === $this->is_auth()) {
    $conv->multiDic('is_nomember', $sp);
  } else {
    $conv->multiDic('is_member', $sp);
  }
*/
  $conv->multiDic('is_noauth', $sp);

//print "Trap 2\n";

}

} // end of class

