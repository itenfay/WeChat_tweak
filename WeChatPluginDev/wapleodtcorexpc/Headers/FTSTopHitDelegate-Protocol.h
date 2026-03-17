//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class FTSFeatureItem, NSMutableArray, NSMutableDictionary, NSString;

@protocol FTSTopHitDelegate <NSObject>

@optional
- (NSMutableDictionary *)tophit_getKFContactDictionary;
- (_Bool)isToHitKFContactReady;
- (NSMutableDictionary *)tophit_getFinderDictionary;
- (_Bool)isToHitFinderReady;
- (NSMutableDictionary *)tophit_getWeAppDictionary;
- (_Bool)isToHitWeAppReady;
- (_Bool)isTopHitFeatureReady;
- (void)sortFeatures:(NSMutableArray *)arg1 matchTips:(NSMutableDictionary *)arg2;
- (NSMutableDictionary *)getFeatureDictionary;
- (_Bool)isTopHitFeatureShouldFilterOut:(FTSFeatureItem *)arg1;
- (_Bool)isTopHitContactActive:(NSString *)arg1;
- (_Bool)isTopHitContactReady;
- (NSMutableDictionary *)getContactDictionary;
@end

