//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCMallActivityInfo : NSObject
{
    unsigned int m_uiActivityExpiredTime;
    NSString *m_nsActivityIconLink;
    NSString *m_nsActivityId;
    NSString *m_nsActivityLink;
    NSString *m_nsActivityMessageContent;
    NSString *m_nsActivityTips;
    unsigned int m_uiActivityJumpFunctionId;
    unsigned int m_uiIsMsgReserved;
    unsigned int _m_uiActivityType;
    NSString *_m_nsActivityUrl;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *m_nsActivityUrl; // @synthesize m_nsActivityUrl=_m_nsActivityUrl;
@property(nonatomic) unsigned int m_uiActivityType; // @synthesize m_uiActivityType=_m_uiActivityType;
@property(nonatomic) unsigned int m_uiIsMsgReserved; // @synthesize m_uiIsMsgReserved;
@property(retain, nonatomic) NSString *m_nsActivityTips; // @synthesize m_nsActivityTips;
@property(nonatomic) unsigned int m_uiActivityJumpFunctionId; // @synthesize m_uiActivityJumpFunctionId;
@property(retain, nonatomic) NSString *m_nsActivityMessageContent; // @synthesize m_nsActivityMessageContent;
@property(retain, nonatomic) NSString *m_nsActivityLink; // @synthesize m_nsActivityLink;
@property(retain, nonatomic) NSString *m_nsActivityId; // @synthesize m_nsActivityId;
@property(retain, nonatomic) NSString *m_nsActivityIconLink; // @synthesize m_nsActivityIconLink;
@property(nonatomic) unsigned int m_uiActivityExpiredTime; // @synthesize m_uiActivityExpiredTime;

@end

