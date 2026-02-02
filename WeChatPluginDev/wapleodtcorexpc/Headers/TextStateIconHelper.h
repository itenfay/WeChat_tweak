//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface TextStateIconHelper : NSObject
{
}

+ (id)sharedIconRecursiveLock;
+ (id)sharedIconRenderingQueue;
+ (_Bool)isUseLockToLoadWxEmoji;
+ (void)setIcon:(id)arg1 toWebImageView:(id)arg2 isBig:(_Bool)arg3 alwaysTemplate:(_Bool)arg4 error:(id *)arg5;
+ (void)setIcon:(id)arg1 toWebImageView:(id)arg2 isBig:(_Bool)arg3 alwaysTemplate:(_Bool)arg4;
+ (void)setIcon:(id)arg1 toWebImageView:(id)arg2 isBig:(_Bool)arg3;
+ (void)setIcon:(id)arg1 toWebImageView:(id)arg2;
+ (id)decodeAndLoadExperimentTable;
+ (void)encodeAndSaveExperimentTable:(id)arg1;
+ (id)getExperimentTablePath;
+ (id)decodeAndLoadPassthroughIconList;
+ (void)encodeAndSavePassthroughIconList:(id)arg1;
+ (id)getPassthroughIconListPath;
+ (id)decodeAndLoadIconStorageForType:(unsigned int)arg1;
+ (void)encodeAndSaveIconStorage:(id)arg1 type:(unsigned int)arg2;
+ (id)getStoragePathForType:(unsigned int)arg1;
+ (id)typeNumberFromConfigId:(id)arg1;
+ (id)exportI18nListFromDict:(id)arg1;
+ (id)parseFromI18nList:(id)arg1;

@end

