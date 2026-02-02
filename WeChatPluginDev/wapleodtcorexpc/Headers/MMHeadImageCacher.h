//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSCache, NSMutableDictionary;

@interface MMHeadImageCacher
{
    NSMutableDictionary *_dictUseScene2MemoryCache;
    NSCache *_originContactsHeadImgCache;
}

- (void).cxx_destruct;
- (void)cleanupTempMemoryCache:(id)arg1;
- (void)saveHeadImgToMemoryCacheIfNeed:(const struct HeadImgUseSceneConfig *)arg1 usrName:(id)arg2 headImg:(id)arg3;
- (id)memoryCacheForUseScene:(unsigned char)arg1;
- (_Bool)translateOldHeadImg:(id)arg1 toCategory:(unsigned char)arg2 isHD:(_Bool)arg3;
- (_Bool)translateHeadImg:(id)arg1 toCategory:(unsigned char)arg2 fromPath:(id)arg3 isHD:(_Bool)arg4;
- (void)discardCachedHeadImgInFIC:(id)arg1;
- (void)discardCachedHeadImgInMemory:(id)arg1;
- (void)deleteBrandHeadImageFromLocal:(id)arg1;
- (_Bool)deleteUsrHeadImgFromLocal:(id)arg1 isHD:(_Bool)arg2;
- (id)getImgSavePath:(id)arg1 forCategory:(unsigned char)arg2 isHD:(_Bool)arg3;
- (unsigned long long)cleanAllHeadImage;
- (void)cleanupAllMemoryCache;
- (void)fixSelfHeadImgByLocalImg;
- (_Bool)createEmptyUsrImgInLocal:(id)arg1;
- (_Bool)saveImgDataToFile:(id)arg1 file:(id)arg2;
- (_Bool)saveUsrImgToLocal:(id)arg1 withData:(id)arg2 forCategory:(unsigned char)arg3 isHD:(_Bool)arg4 forceReload:(_Bool)arg5 saveAsTemp:(_Bool)arg6;
- (_Bool)saveUsrImgToLocal:(id)arg1 withFile:(id)arg2 forCategory:(unsigned char)arg3 isHD:(_Bool)arg4;
- (void)deleteUsrHDHeadImgFromLocal:(id)arg1;
- (void)deleteUsrHeadImg:(id)arg1;
- (void)deleteHeadImageForBrand:(id)arg1;
- (void)discardCachedHeadImg:(id)arg1;
- (void)moveTmpImageToTargetInLocal:(id)arg1 withCategory:(unsigned char)arg2;
- (_Bool)isHeadImgExistInLocal:(id)arg1 isHD:(_Bool)arg2;
- (_Bool)isHeadImgExistInLocal:(id)arg1;
- (id)loadImageFromLocal:(id)arg1 withCategory:(unsigned char)arg2 isHD:(_Bool)arg3;
- (id)getHeadImage:(const struct HeadImgUseSceneConfig *)arg1 usrName:(id)arg2 withCategory:(unsigned char)arg3 retHeadImgIsExistedLocal:(_Bool *)arg4;
- (id)init;

@end

