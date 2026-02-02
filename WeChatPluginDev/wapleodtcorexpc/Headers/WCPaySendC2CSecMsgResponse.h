//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCPaySendC2CSecMsgResponse : NSObject
{
    unsigned int m_errCode;
    NSString *m_errMsg;
    NSString *m_msgId;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *m_msgId; // @synthesize m_msgId;
@property(retain, nonatomic) NSString *m_errMsg; // @synthesize m_errMsg;
@property(nonatomic) unsigned int m_errCode; // @synthesize m_errCode;

@end

