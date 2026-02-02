//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCPayTransferPrepayRequestStruct : NSObject
{
    NSString *m_nsReceiverUserName;
    unsigned long long m_uiTotalFee;
    unsigned int m_uiFeeType;
    NSString *m_nsExtInfo;
    unsigned int m_uiPayScene;
    int m_transferScene;
    NSString *m_nsProducetDesc;
    NSString *m_nsFacingPaidID;
    unsigned int m_uiPayChannel;
    unsigned int _dynamic_code_source;
    unsigned int _cancelReason;
    unsigned int _unpayType;
    unsigned int _desc_has_address;
    unsigned int _groupType;
    NSString *_m_nsF2FPayerDesc;
    NSString *_maskTrueName;
    NSString *_receiver_openid;
    NSString *_dynamic_code_url;
    NSString *_mch_name;
    NSString *_nickname;
    NSString *_receiver_true_name;
    NSString *_cancelOutTradeNo;
    NSString *_truenameExtend;
    NSString *_inputName;
    NSString *_checkNameSign;
    NSString *_placeorderReserves;
    NSString *_address_name;
    NSString *_phone_num;
    NSString *_address;
    NSString *_groupUsername;
    NSString *_placeorderAttach;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int groupType; // @synthesize groupType=_groupType;
@property(retain, nonatomic) NSString *placeorderAttach; // @synthesize placeorderAttach=_placeorderAttach;
@property(nonatomic) unsigned int desc_has_address; // @synthesize desc_has_address=_desc_has_address;
@property(retain, nonatomic) NSString *groupUsername; // @synthesize groupUsername=_groupUsername;
@property(retain) NSString *address; // @synthesize address=_address;
@property(retain) NSString *phone_num; // @synthesize phone_num=_phone_num;
@property(retain) NSString *address_name; // @synthesize address_name=_address_name;
@property(retain, nonatomic) NSString *placeorderReserves; // @synthesize placeorderReserves=_placeorderReserves;
@property(retain, nonatomic) NSString *checkNameSign; // @synthesize checkNameSign=_checkNameSign;
@property(retain, nonatomic) NSString *inputName; // @synthesize inputName=_inputName;
@property(retain, nonatomic) NSString *truenameExtend; // @synthesize truenameExtend=_truenameExtend;
@property(nonatomic) unsigned int unpayType; // @synthesize unpayType=_unpayType;
@property(nonatomic) unsigned int cancelReason; // @synthesize cancelReason=_cancelReason;
@property(retain, nonatomic) NSString *cancelOutTradeNo; // @synthesize cancelOutTradeNo=_cancelOutTradeNo;
@property(nonatomic) unsigned int dynamic_code_source; // @synthesize dynamic_code_source=_dynamic_code_source;
@property(retain, nonatomic) NSString *receiver_true_name; // @synthesize receiver_true_name=_receiver_true_name;
@property(retain, nonatomic) NSString *nickname; // @synthesize nickname=_nickname;
@property(retain, nonatomic) NSString *mch_name; // @synthesize mch_name=_mch_name;
@property(retain, nonatomic) NSString *dynamic_code_url; // @synthesize dynamic_code_url=_dynamic_code_url;
@property(retain, nonatomic) NSString *receiver_openid; // @synthesize receiver_openid=_receiver_openid;
@property(copy, nonatomic) NSString *maskTrueName; // @synthesize maskTrueName=_maskTrueName;
@property(retain, nonatomic) NSString *m_nsF2FPayerDesc; // @synthesize m_nsF2FPayerDesc=_m_nsF2FPayerDesc;
@property(nonatomic) unsigned int m_uiPayChannel; // @synthesize m_uiPayChannel;
@property(nonatomic) int m_transferScene; // @synthesize m_transferScene;
@property(retain, nonatomic) NSString *m_nsFacingPaidID; // @synthesize m_nsFacingPaidID;
@property(retain, nonatomic) NSString *m_nsProducetDesc; // @synthesize m_nsProducetDesc;
@property(nonatomic) unsigned int m_uiPayScene; // @synthesize m_uiPayScene;
@property(retain, nonatomic) NSString *m_nsExtInfo; // @synthesize m_nsExtInfo;
@property(nonatomic) unsigned long long m_uiTotalFee; // @synthesize m_uiTotalFee;
@property(nonatomic) unsigned int m_uiFeeType; // @synthesize m_uiFeeType;
@property(retain, nonatomic) NSString *m_nsReceiverUserName; // @synthesize m_nsReceiverUserName;

@end

