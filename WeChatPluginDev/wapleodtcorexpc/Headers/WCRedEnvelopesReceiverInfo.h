//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCRedEnvelopesReceiverInfo : NSObject
{
    NSString *m_nsReceiveId;
    _Bool m_bIsMySelf;
    NSString *m_nsReceiverUserName;
    NSString *m_nsReceiverName;
    NSString *m_nsReceiverHeadImg;
    long long m_lReceiveAmount;
    unsigned int m_uiReceiveTime;
    NSString *m_nsWishing;
    NSString *m_nsReceiverGameTips;
    NSString *_m_nsReceiveAmountDesc;
    NSString *_m_nsSendNameSuffix;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *m_nsSendNameSuffix; // @synthesize m_nsSendNameSuffix=_m_nsSendNameSuffix;
@property(retain, nonatomic) NSString *m_nsReceiveAmountDesc; // @synthesize m_nsReceiveAmountDesc=_m_nsReceiveAmountDesc;
@property(retain, nonatomic) NSString *m_nsReceiverUserName; // @synthesize m_nsReceiverUserName;
@property(retain, nonatomic) NSString *m_nsReceiveId; // @synthesize m_nsReceiveId;
@property(retain, nonatomic) NSString *m_nsReceiverGameTips; // @synthesize m_nsReceiverGameTips;
@property(nonatomic) unsigned int m_uiReceiveTime; // @synthesize m_uiReceiveTime;
@property(retain, nonatomic) NSString *m_nsReceiverName; // @synthesize m_nsReceiverName;
@property(retain, nonatomic) NSString *m_nsReceiverHeadImg; // @synthesize m_nsReceiverHeadImg;
@property(nonatomic) long long m_lReceiveAmount; // @synthesize m_lReceiveAmount;
@property(retain, nonatomic) NSString *m_nsWishing; // @synthesize m_nsWishing;
@property(nonatomic) _Bool m_bIsMySelf; // @synthesize m_bIsMySelf;

@end

