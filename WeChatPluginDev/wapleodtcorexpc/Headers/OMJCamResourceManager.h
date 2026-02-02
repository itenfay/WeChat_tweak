//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface OMJCamResourceManager : NSObject
{
    SharedPtr_8810e4e6 _backingResourceManager;
}

+ (_Bool)isLocalTemplateExistsWithTemplateID:(id)arg1 version:(unsigned long long)arg2 environmentCachesDirectory:(id)arg3;
+ (_Bool)registerLocalTemplateWithTemplateID:(id)arg1 version:(unsigned long long)arg2 filePath:(id)arg3 environmentCachesDirectory:(id)arg4 error:(id *)arg5;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) SharedPtr_8810e4e6 backingResourceManager; // @synthesize backingResourceManager=_backingResourceManager;
- (void)cancelSelectAndLoadMusic;
- (void)selectAndLoadMusicWithMusicIDs:(id)arg1 progressHandler:(CDUnknownBlockType)arg2 musicCompletionHandler:(CDUnknownBlockType)arg3;
- (void)selectAndLoadMusicWithMusicIDs:(id)arg1 progressHandler:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)musicFilePathWithID:(id)arg1;
- (void)registerLocalMusicWithInfo:(id)arg1 musicFilePath:(id)arg2;
- (_Bool)isMusicLoadedWithID:(id)arg1;
- (void)cancelLoadMusicWithTaskID:(int)arg1;
- (int)loadMusicWithMusicID:(id)arg1 progressHandler:(CDUnknownBlockType)arg2 musicCompletionHandler:(CDUnknownBlockType)arg3;
- (int)loadMusicWithMusicID:(id)arg1 progressHandler:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)getBeautyAdjustmentDescWithMaterialID:(id)arg1;
- (void)cancelLoadMaterialTask:(long long)arg1;
- (long long)loadMaterial:(id)arg1 progressHandler:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)cancelMaterialPackTask:(long long)arg1;
- (long long)requestMaterialPackWithScene:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (_Bool)removeTemplateWithTemplateID:(id)arg1 version:(unsigned long long)arg2;
- (id)getTemplateInfoWithTemplateID:(id)arg1 version:(unsigned long long)arg2;
- (_Bool)isTemplateLoadedWithTemplateID:(id)arg1 version:(unsigned long long)arg2;
- (void)cancelAll;
- (void)cancelLoadWithTaskID:(int)arg1;
- (int)loadTemplateWithTemplateID:(id)arg1 loadPriority:(long long)arg2 progressHandler:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (int)loadTemplateWithTemplateID:(id)arg1 progressHandler:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (int)loadBuiltinCommonResourcesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (_Bool)isBuiltinCommonResourcesLoaded;
- (id)initWithBackingResourceManager:(const void *)arg1;

@end

