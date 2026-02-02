//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCRedEnvelopesSendedRedEnvelopesInfo : NSObject
{
    unsigned long long m_enWCRedEnvelopesType;
    unsigned long long m_enWCRedEnvelopesKind;
    NSString *m_nsSendTitle;
    unsigned int m_uiSendTime;
    NSString *m_nsSendTime;
    long long m_lTotalAmount;
    long long m_lTotalNum;
    long long m_lRecNum;
    unsigned long long m_enWCRedEnvelopesStatus;
    unsigned int m_uiThxCount;
    NSString *m_nsSendID;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *m_nsSendID; // @synthesize m_nsSendID;
@property(retain, nonatomic) NSString *m_nsSendTime; // @synthesize m_nsSendTime;
@property(nonatomic) unsigned int m_uiThxCount; // @synthesize m_uiThxCount;
@property(nonatomic) unsigned int m_uiSendTime; // @synthesize m_uiSendTime;
@property(retain, nonatomic) NSString *m_nsSendTitle; // @synthesize m_nsSendTitle;
@property(nonatomic) long long m_lTotalNum; // @synthesize m_lTotalNum;
@property(nonatomic) long long m_lTotalAmount; // @synthesize m_lTotalAmount;
@property(nonatomic) unsigned long long m_enWCRedEnvelopesStatus; // @synthesize m_enWCRedEnvelopesStatus;
@property(nonatomic) long long m_lRecNum; // @synthesize m_lRecNum;
@property(nonatomic) unsigned long long m_enWCRedEnvelopesKind; // @synthesize m_enWCRedEnvelopesKind;
@property(nonatomic) unsigned long long m_enWCRedEnvelopesType; // @synthesize m_enWCRedEnvelopesType;

@end

