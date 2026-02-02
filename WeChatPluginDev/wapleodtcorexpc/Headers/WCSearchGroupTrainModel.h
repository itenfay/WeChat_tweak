//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WCSearchGroupTrainModel : NSObject
{
}

+ (double)safeGetFValue:(id)arg1;
+ (void)forceLoadDefaultModelIfNeeded;
+ (void)loadModel;
+ (void)InitModelConfig;
+ (unsigned int)GetVersion:(unsigned int)arg1;
+ (id)GetModelPathWithSource:(unsigned int *)arg1;
+ (unsigned int)GetVersion;
+ (id)DefaultMainModelPath;
+ (id)DownloadSubModelPath;
+ (id)DownloadMainModelPath;
+ (id)DownloadDir;
+ (_Bool)HasDownloadSubModel;
+ (_Bool)HasDownloadMainModel;
+ (void)ResetGlobalConfig;
+ (void)ResetDownloadedModel:(id)arg1;
+ (void)initialize;
- (id)getMaxSearchGroupFeature;
- (double)scoreByExtMode:(_Bool)arg1 outLeafNodeKeys:(id)arg2 features:(id)arg3;
- (_Bool)isModelFail;

@end

