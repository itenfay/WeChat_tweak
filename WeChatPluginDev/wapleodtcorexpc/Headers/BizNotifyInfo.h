//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MassSendCardMsg, NSArray, NSNumber, NSString;

@interface BizNotifyInfo : NSObject
{
    NSNumber *_eventType;
    MassSendCardMsg *_msgInfo;
    NSArray *_items;
    NSString *_talker;
}

+ (id)nullableFromList:(id)arg1;
+ (id)fromList:(id)arg1;
+ (id)makeWithEventType:(id)arg1 msgInfo:(id)arg2 items:(id)arg3 talker:(id)arg4;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *talker; // @synthesize talker=_talker;
@property(copy, nonatomic) NSArray *items; // @synthesize items=_items;
@property(retain, nonatomic) MassSendCardMsg *msgInfo; // @synthesize msgInfo=_msgInfo;
@property(retain, nonatomic) NSNumber *eventType; // @synthesize eventType=_eventType;
- (id)toList;

@end

