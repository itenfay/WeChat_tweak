//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface OMJMaterialManager : NSObject
{
    SharedPtr_153997a4 _backingMaterialManager;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) SharedPtr_153997a4 backingMaterialManager; // @synthesize backingMaterialManager=_backingMaterialManager;
- (id)getMaterialInfoWithMaterialID:(id)arg1;
- (id)getColorStyleMaterialInfosOfMaterial:(id)arg1;
- (_Bool)isLocalMaterialLoaded:(id)arg1 version:(long long)arg2;
- (_Bool)isLocalMaterialLoaded:(id)arg1;
- (_Bool)registerLocalStickerMaterialWithMaterialID:(id)arg1 version:(long long)arg2 zipFilePath:(id)arg3 error:(id *)arg4;
- (void)waitLoadingLocalMaterialWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)cancelAll;
- (void)cancelLoadMaterialTask:(long long)arg1;
- (long long)loadMaterial:(id)arg1 version:(long long)arg2 progressHandler:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (long long)loadMaterial:(id)arg1 progressHandler:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (_Bool)isMaterialLoaded:(id)arg1 version:(long long)arg2;
- (_Bool)isMaterialLoaded:(id)arg1;
- (void)cancelMaterialPackTask:(long long)arg1;
- (long long)requestMaterialPackWithScene:(unsigned long long)arg1 extraParams:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (long long)requestMaterialPackWithScene:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)initWithBackingMaterialManager:(const void *)arg1;

@end

