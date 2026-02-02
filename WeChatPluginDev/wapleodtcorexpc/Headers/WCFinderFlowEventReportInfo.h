//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;

@interface WCFinderFlowEventReportInfo : NSObject
{
    unsigned long long _bizId;
    NSString *_flowId;
    unsigned long long _eventId;
    unsigned long long _eventTime;
    NSString *_finderUsername;
    NSMutableDictionary *_udfKV;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *udfKV; // @synthesize udfKV=_udfKV;
@property(copy, nonatomic) NSString *finderUsername; // @synthesize finderUsername=_finderUsername;
@property(nonatomic) unsigned long long eventTime; // @synthesize eventTime=_eventTime;
@property(nonatomic) unsigned long long eventId; // @synthesize eventId=_eventId;
@property(copy, nonatomic) NSString *flowId; // @synthesize flowId=_flowId;
@property(nonatomic) unsigned long long bizId; // @synthesize bizId=_bizId;

@end

