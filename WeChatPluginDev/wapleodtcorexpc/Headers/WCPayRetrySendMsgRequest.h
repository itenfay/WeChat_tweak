//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCPayRetrySendMsgRequest : NSObject
{
    NSString *m_nsTranscationID;
    NSString *m_nsReceiverUserName;
    unsigned long long m_uiInvalidTime;
    NSString *m_nsTransferID;
    unsigned int _fromScene;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int fromScene; // @synthesize fromScene=_fromScene;
@property(retain, nonatomic) NSString *m_nsTransferID; // @synthesize m_nsTransferID;
@property(nonatomic) unsigned long long m_uiInvalidTime; // @synthesize m_uiInvalidTime;
@property(retain, nonatomic) NSString *m_nsReceiverUserName; // @synthesize m_nsReceiverUserName;
@property(retain, nonatomic) NSString *m_nsTranscationID; // @synthesize m_nsTranscationID;

@end

