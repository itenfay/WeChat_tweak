//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCRedEnvelopesReceivedRedEnvelopesInfo : NSObject
{
    NSString *m_nsSenderName;
    NSString *m_nsSenderHeadImg;
    long long m_lReceiveAmount;
    unsigned int m_uiReceiveTime;
    NSString *m_nsReceiveTime;
    unsigned long long m_enWCRedEnvelopesType;
    unsigned long long m_enWCRedEnvelopesKind;
    NSString *m_nsReceiverID;
    NSString *m_nsSendID;
    NSString *_m_nsReceiverSuffix;
    NSString *_m_nsReceiverDesc;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *m_nsReceiverDesc; // @synthesize m_nsReceiverDesc=_m_nsReceiverDesc;
@property(retain, nonatomic) NSString *m_nsReceiverSuffix; // @synthesize m_nsReceiverSuffix=_m_nsReceiverSuffix;
@property(nonatomic) unsigned long long m_enWCRedEnvelopesKind; // @synthesize m_enWCRedEnvelopesKind;
@property(retain, nonatomic) NSString *m_nsSendID; // @synthesize m_nsSendID;
@property(retain, nonatomic) NSString *m_nsReceiveTime; // @synthesize m_nsReceiveTime;
@property(retain, nonatomic) NSString *m_nsReceiverID; // @synthesize m_nsReceiverID;
@property(nonatomic) unsigned int m_uiReceiveTime; // @synthesize m_uiReceiveTime;
@property(retain, nonatomic) NSString *m_nsSenderName; // @synthesize m_nsSenderName;
@property(retain, nonatomic) NSString *m_nsSenderHeadImg; // @synthesize m_nsSenderHeadImg;
@property(nonatomic) long long m_lReceiveAmount; // @synthesize m_lReceiveAmount;
@property(nonatomic) unsigned long long m_enWCRedEnvelopesType; // @synthesize m_enWCRedEnvelopesType;

@end

