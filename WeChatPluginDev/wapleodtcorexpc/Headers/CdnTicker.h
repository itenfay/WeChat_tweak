//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface CdnTicker : NSObject
{
    long long _tickCount;
    long long _tickInteval;
    CDUnknownBlockType _block;
}

+ (id)tickerWithInterval:(long long)arg1 block:(CDUnknownBlockType)arg2;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
@property(nonatomic) long long tickInteval; // @synthesize tickInteval=_tickInteval;
@property(nonatomic) long long tickCount; // @synthesize tickCount=_tickCount;
- (void)clearTick;
- (void)tick;

@end

