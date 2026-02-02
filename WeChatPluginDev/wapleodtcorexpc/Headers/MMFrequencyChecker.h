//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MemoryMappedKV, NSString;

@interface MMFrequencyChecker : NSObject
{
    MemoryMappedKV *mmkv;
    NSString *module;
}

- (void).cxx_destruct;
- (void)resetLimit;
- (void)invalid;
- (_Bool)canTriggerWithInterval:(unsigned long long)arg1 maxTriggerTimes:(unsigned long long)arg2 resetPeriod:(unsigned long long)arg3;
- (_Bool)canTriggerWithInterval:(unsigned long long)arg1 forSubModule:(id)arg2;
- (id)initWithID:(id)arg1;
@property(nonatomic) unsigned int TriggeredTimes; // @dynamic TriggeredTimes;
@property(nonatomic) unsigned int FirstTriggerTimeStamp; // @dynamic FirstTriggerTimeStamp;
@property(nonatomic) unsigned int LastTriggerTimeStamp; // @dynamic LastTriggerTimeStamp;

@end

