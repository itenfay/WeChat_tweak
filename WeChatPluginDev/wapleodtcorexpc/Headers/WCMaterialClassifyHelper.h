//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WCMaterialClassifyHelper : NSObject
{
}

+ (id)modelKeysForClassifierWithScene:(unsigned long long)arg1;
+ (id)syncCalculateClassifyLabelsWithImage:(id)arg1;
+ (void)asyncCalculateClassifyLabelsWithImages:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (_Bool)isBGMFeatureModelWithName:(id)arg1;
+ (void)_asyncCalculateClassifyLabelsWithVideos:(id)arg1 images:(id)arg2 scene:(unsigned long long)arg3 completionHandler:(CDUnknownBlockType)arg4;
+ (void)asyncCalculateClassifyLabelsForFinderWithVideos:(id)arg1 images:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (void)asyncCalculateClassifyLabelsWithVideos:(id)arg1 images:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;

@end

