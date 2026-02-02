//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class BusiF2FFavorCommResp, ExtraBuyInfo, NSArray, NSString, WCPayWarningNotice;

@interface WCPayTranferGetUserNameResponse : NSObject
{
    NSString *m_nsFacingPaidID;
    NSString *m_nsUserNmae;
    NSString *m_nsTruthName;
    unsigned int m_uiTimeStamp;
    unsigned int m_uiPayScene;
    long long m_llTotalMoney;
    NSString *m_nsProductDetail;
    NSString *m_nsTransferXmlContent;
    _Bool _payerDescRequired;
    _Bool _enable_union_pay;
    unsigned int _busi_type;
    unsigned int _get_pay_wifi;
    unsigned int _mch_time;
    unsigned int _amount_remind_bit;
    unsigned int _show_photo;
    unsigned int _scan_scene;
    unsigned int _photo_style;
    unsigned int _get_favor_interval;
    unsigned int _action_type;
    NSString *_m_uifaceTofaceName;
    NSString *_m_uifaceTofaceDescTitle;
    NSString *_m_uifaceTofacePayerDescTitle;
    NSString *_mch_name;
    NSString *_mch_photo;
    NSString *_rcvr_ticket;
    NSString *_mch_type;
    NSString *_receiver_openid;
    NSString *_payerDescPlaceholder;
    NSString *_scan_tile;
    NSString *_photo_url;
    NSString *_favor_desc;
    NSString *_favor_req_sign;
    NSString *_favor_req_extend;
    NSArray *_favor_list;
    BusiF2FFavorCommResp *_favor_comm_resp;
    NSString *_mch_info_string;
    NSString *_paying_rcvr_info;
    NSString *_succpage_rcvr_info;
    NSString *_jump_url;
    WCPayWarningNotice *_notice;
    ExtraBuyInfo *_extra_buy;
    NSString *_favor_title;
    NSString *_extra_buy_title;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool enable_union_pay; // @synthesize enable_union_pay=_enable_union_pay;
@property(retain, nonatomic) NSString *extra_buy_title; // @synthesize extra_buy_title=_extra_buy_title;
@property(retain, nonatomic) NSString *favor_title; // @synthesize favor_title=_favor_title;
@property(retain, nonatomic) ExtraBuyInfo *extra_buy; // @synthesize extra_buy=_extra_buy;
@property(retain, nonatomic) WCPayWarningNotice *notice; // @synthesize notice=_notice;
@property(retain, nonatomic) NSString *jump_url; // @synthesize jump_url=_jump_url;
@property(nonatomic) unsigned int action_type; // @synthesize action_type=_action_type;
@property(retain) NSString *succpage_rcvr_info; // @synthesize succpage_rcvr_info=_succpage_rcvr_info;
@property(retain) NSString *paying_rcvr_info; // @synthesize paying_rcvr_info=_paying_rcvr_info;
@property(retain, nonatomic) NSString *mch_info_string; // @synthesize mch_info_string=_mch_info_string;
@property(nonatomic) unsigned int get_favor_interval; // @synthesize get_favor_interval=_get_favor_interval;
@property(nonatomic) unsigned int photo_style; // @synthesize photo_style=_photo_style;
@property(retain, nonatomic) BusiF2FFavorCommResp *favor_comm_resp; // @synthesize favor_comm_resp=_favor_comm_resp;
@property(retain, nonatomic) NSArray *favor_list; // @synthesize favor_list=_favor_list;
@property(retain, nonatomic) NSString *favor_req_extend; // @synthesize favor_req_extend=_favor_req_extend;
@property(retain, nonatomic) NSString *favor_req_sign; // @synthesize favor_req_sign=_favor_req_sign;
@property(nonatomic) unsigned int scan_scene; // @synthesize scan_scene=_scan_scene;
@property(retain, nonatomic) NSString *favor_desc; // @synthesize favor_desc=_favor_desc;
@property(retain, nonatomic) NSString *photo_url; // @synthesize photo_url=_photo_url;
@property(nonatomic) unsigned int show_photo; // @synthesize show_photo=_show_photo;
@property(retain, nonatomic) NSString *scan_tile; // @synthesize scan_tile=_scan_tile;
@property(retain, nonatomic) NSString *payerDescPlaceholder; // @synthesize payerDescPlaceholder=_payerDescPlaceholder;
@property(nonatomic) _Bool payerDescRequired; // @synthesize payerDescRequired=_payerDescRequired;
@property(nonatomic) unsigned int amount_remind_bit; // @synthesize amount_remind_bit=_amount_remind_bit;
@property(retain, nonatomic) NSString *receiver_openid; // @synthesize receiver_openid=_receiver_openid;
@property(nonatomic) unsigned int mch_time; // @synthesize mch_time=_mch_time;
@property(retain, nonatomic) NSString *mch_type; // @synthesize mch_type=_mch_type;
@property(nonatomic) unsigned int get_pay_wifi; // @synthesize get_pay_wifi=_get_pay_wifi;
@property(retain, nonatomic) NSString *rcvr_ticket; // @synthesize rcvr_ticket=_rcvr_ticket;
@property(retain, nonatomic) NSString *mch_photo; // @synthesize mch_photo=_mch_photo;
@property(retain, nonatomic) NSString *mch_name; // @synthesize mch_name=_mch_name;
@property(nonatomic) unsigned int busi_type; // @synthesize busi_type=_busi_type;
@property(retain, nonatomic) NSString *m_uifaceTofacePayerDescTitle; // @synthesize m_uifaceTofacePayerDescTitle=_m_uifaceTofacePayerDescTitle;
@property(retain, nonatomic) NSString *m_uifaceTofaceDescTitle; // @synthesize m_uifaceTofaceDescTitle=_m_uifaceTofaceDescTitle;
@property(retain, nonatomic) NSString *m_uifaceTofaceName; // @synthesize m_uifaceTofaceName=_m_uifaceTofaceName;
@property(retain, nonatomic) NSString *m_nsTransferXmlContent; // @synthesize m_nsTransferXmlContent;
@property(retain, nonatomic) NSString *m_nsFacingPaidID; // @synthesize m_nsFacingPaidID;
@property(retain, nonatomic) NSString *m_nsProductDetail; // @synthesize m_nsProductDetail;
@property(nonatomic) long long m_llTotalMoney; // @synthesize m_llTotalMoney;
@property(nonatomic) unsigned int m_uiPayScene; // @synthesize m_uiPayScene;
@property(nonatomic) unsigned int m_uiTimeStamp; // @synthesize m_uiTimeStamp;
@property(retain, nonatomic) NSString *m_nsTruthName; // @synthesize m_nsTruthName;
@property(retain, nonatomic) NSString *m_nsUserNmae; // @synthesize m_nsUserNmae;

@end

