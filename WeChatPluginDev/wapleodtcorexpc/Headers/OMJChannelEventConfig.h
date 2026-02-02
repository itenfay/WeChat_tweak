//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface OMJChannelEventConfig : NSObject
{
    NSString *_eventName;
    NSString *_finderNickName;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *finderNickName; // @synthesize finderNickName=_finderNickName;
@property(readonly, copy, nonatomic) NSString *eventName; // @synthesize eventName=_eventName;
- (id)initWithEventName:(id)arg1 finderNickName:(id)arg2;
- (id)initWithBackingInfo:(const void *)arg1;

@end

