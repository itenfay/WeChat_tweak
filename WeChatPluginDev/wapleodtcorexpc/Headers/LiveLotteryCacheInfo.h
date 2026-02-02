//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface LiveLotteryCacheInfo : NSObject
{
    unsigned int _liveStartTime;
    NSString *_lotteryId;
}

+ (void)initialize;
+ (void)PBArrayAdd_liveStartTime;
+ (void)PBArrayAdd_lotteryId;
- (void).cxx_destruct;
@property(nonatomic) unsigned int liveStartTime; // @synthesize liveStartTime=_liveStartTime;
@property(retain, nonatomic) NSString *lotteryId; // @synthesize lotteryId=_lotteryId;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

