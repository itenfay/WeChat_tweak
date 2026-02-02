//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class EmotionReward, NSArray, NSString;

@interface EmotionRewardResponseInfo : NSObject
{
    _Bool _hasAllInfo;
    unsigned int _donorNum;
    NSArray *_prices;
    NSArray *_donors;
    EmotionReward *_reward;
}

+ (void)initialize;
+ (void)PBArrayAdd_hasAllInfo;
+ (void)PBArrayAdd_reward;
+ (void)PBArrayAdd_donors;
+ (void)PBArrayAdd_donorNum;
+ (void)PBArrayAdd_prices;
- (void).cxx_destruct;
@property(nonatomic) _Bool hasAllInfo; // @synthesize hasAllInfo=_hasAllInfo;
@property(retain, nonatomic) EmotionReward *reward; // @synthesize reward=_reward;
@property(retain, nonatomic) NSArray *donors; // @synthesize donors=_donors;
@property(nonatomic) unsigned int donorNum; // @synthesize donorNum=_donorNum;
@property(retain, nonatomic) NSArray *prices; // @synthesize prices=_prices;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

