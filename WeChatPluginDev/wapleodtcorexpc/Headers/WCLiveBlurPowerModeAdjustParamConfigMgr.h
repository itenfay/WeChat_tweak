//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray;

@interface WCLiveBlurPowerModeAdjustParamConfigMgr : NSObject
{
    NSMutableArray *_mutaAdjustStrategyParamList;
    NSMutableArray *_mutaAdjustStrategyParamLevelList;
}

+ (id)shareInstance;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *mutaAdjustStrategyParamLevelList; // @synthesize mutaAdjustStrategyParamLevelList=_mutaAdjustStrategyParamLevelList;
@property(retain, nonatomic) NSMutableArray *mutaAdjustStrategyParamList; // @synthesize mutaAdjustStrategyParamList=_mutaAdjustStrategyParamList;
@property(readonly, nonatomic) NSArray *adjustStrategyParamLevelList;
@property(readonly, nonatomic) NSArray *adjustStrategyParamList;
- (void)initDefaultData;
- (id)init;

@end

