//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface MJVocalEnhancementProcessor : NSObject
{
}

+ (id)calcVocalAdjustmentGainsInternalWithCachedParams:(id)arg1;
+ (id)calcVocalAdjustmentGainsWithCache:(id)arg1 keys:(id)arg2;
+ (id)processWithFilePath:(id)arg1 outputPath:(id)arg2 vocalEnhancementParams:(id)arg3;
+ (id)processWithFilePath:(id)arg1 outputPath:(id)arg2;

@end

