//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray;

@interface MMFinderLiveRewardLevelConfigs : NSObject
{
    NSArray *_currentGiftPackageMetaGiftLists;
    NSArray *_totalLevelConfigList;
    NSArray *_currentLevelConfigList;
    unsigned long long _limitConsumeWecoin;
    unsigned long long _limitChooseProduct;
}

+ (unsigned int)GetSelfMinPurchaseTargetLevel;
+ (id)GetSignIconWithRank:(unsigned int)arg1 iconSize:(double)arg2;
+ (id)GetBackgroundColorWithRank:(unsigned int)arg1;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long limitChooseProduct; // @synthesize limitChooseProduct=_limitChooseProduct;
@property(nonatomic) unsigned long long limitConsumeWecoin; // @synthesize limitConsumeWecoin=_limitConsumeWecoin;
@property(retain, nonatomic) NSArray *currentLevelConfigList; // @synthesize currentLevelConfigList=_currentLevelConfigList;
@property(retain, nonatomic) NSArray *totalLevelConfigList; // @synthesize totalLevelConfigList=_totalLevelConfigList;
@property(retain, nonatomic) NSArray *currentGiftPackageMetaGiftLists; // @synthesize currentGiftPackageMetaGiftLists=_currentGiftPackageMetaGiftLists;
- (long long)selectedLevelIndexWithTargetRank:(unsigned int)arg1;
- (unsigned int)getTotalWecoinWithTargetRank:(unsigned int)arg1;
- (id)initWithProductMetaList:(id)arg1 levelConfigList:(id)arg2 limitConsumeWecoin:(unsigned long long)arg3 limitChooseProduct:(unsigned long long)arg4;

@end

