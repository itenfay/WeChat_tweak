//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSString, NoticeItem, RecvAccountInfo, RecvCustomerInfoModule, WCPayAddressInfo, WCPayExposureInfo, WCPayTextInfo, WCPayTransferResendInfo;

@interface WCPayCheckTransferStatusResponse : NSObject
{
    unsigned int m_uiTransferStatus;
    NSString *m_nsTransferStatusName;
    NSString *m_nsFeeType;
    long long m_llFee;
    NSString *m_nsSenderUserName;
    NSString *m_nsRecieverUserName;
    NSString *m_nsTransferTime;
    NSString *m_nsRefundBandType;
    NSString *m_nsModifyTime;
    NSString *m_nsBannerContent;
    NSString *m_nsBannerUrl;
    _Bool _m_bIsPayer;
    NSString *m_nsRefundBankType;
    NSString *_m_nsStatusDesc;
    NSString *_m_nsStatusSupplementary;
    unsigned long long _delayStatus;
    NSString *_desc;
    WCPayAddressInfo *_addr_info;
    WCPayExposureInfo *_exposure_info;
    WCPayTextInfo *_text_info;
    WCPayTransferResendInfo *_resendInfo;
    WCPayTextInfo *_middle_info;
    NSMutableArray *_desc_items;
    long long _trade_mem_type;
    NSMutableArray *_option_items;
    NoticeItem *_noticeItem;
    RecvAccountInfo *_recv_account_info;
    NSArray *_customer_info_list;
    RecvCustomerInfoModule *_recv_customer_info_module;
}

- (void).cxx_destruct;
@property(retain, nonatomic) RecvCustomerInfoModule *recv_customer_info_module; // @synthesize recv_customer_info_module=_recv_customer_info_module;
@property(retain, nonatomic) NSArray *customer_info_list; // @synthesize customer_info_list=_customer_info_list;
@property(retain, nonatomic) RecvAccountInfo *recv_account_info; // @synthesize recv_account_info=_recv_account_info;
@property(retain, nonatomic) NoticeItem *noticeItem; // @synthesize noticeItem=_noticeItem;
@property(retain, nonatomic) NSMutableArray *option_items; // @synthesize option_items=_option_items;
@property(nonatomic) long long trade_mem_type; // @synthesize trade_mem_type=_trade_mem_type;
@property(retain, nonatomic) NSMutableArray *desc_items; // @synthesize desc_items=_desc_items;
@property(retain, nonatomic) WCPayTextInfo *middle_info; // @synthesize middle_info=_middle_info;
@property(retain, nonatomic) WCPayTransferResendInfo *resendInfo; // @synthesize resendInfo=_resendInfo;
@property(retain) WCPayTextInfo *text_info; // @synthesize text_info=_text_info;
@property(retain) WCPayExposureInfo *exposure_info; // @synthesize exposure_info=_exposure_info;
@property(retain) WCPayAddressInfo *addr_info; // @synthesize addr_info=_addr_info;
@property(retain) NSString *desc; // @synthesize desc=_desc;
@property(nonatomic) unsigned long long delayStatus; // @synthesize delayStatus=_delayStatus;
@property(retain, nonatomic) NSString *m_nsStatusSupplementary; // @synthesize m_nsStatusSupplementary=_m_nsStatusSupplementary;
@property(retain, nonatomic) NSString *m_nsStatusDesc; // @synthesize m_nsStatusDesc=_m_nsStatusDesc;
@property(nonatomic) _Bool m_bIsPayer; // @synthesize m_bIsPayer=_m_bIsPayer;
@property(retain, nonatomic) NSString *m_nsBannerUrl; // @synthesize m_nsBannerUrl;
@property(retain, nonatomic) NSString *m_nsBannerContent; // @synthesize m_nsBannerContent;
@property(retain, nonatomic) NSString *m_nsRefundBankType; // @synthesize m_nsRefundBankType;
@property(retain, nonatomic) NSString *m_nsModifyTime; // @synthesize m_nsModifyTime;
@property(retain, nonatomic) NSString *m_nsTransferTime; // @synthesize m_nsTransferTime;
@property(retain, nonatomic) NSString *m_nsTransferStatusName; // @synthesize m_nsTransferStatusName;
@property(retain, nonatomic) NSString *m_nsSenderUserName; // @synthesize m_nsSenderUserName;
@property(retain, nonatomic) NSString *m_nsRecieverUserName; // @synthesize m_nsRecieverUserName;
@property(retain, nonatomic) NSString *m_nsFeeType; // @synthesize m_nsFeeType;
@property(nonatomic) long long m_llFee; // @synthesize m_llFee;
@property(nonatomic) unsigned int m_uiTransferStatus; // @synthesize m_uiTransferStatus;

@end

