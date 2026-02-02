//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CUploadHDHeadImg, MMHeadImageCacher, MMHeadImageDownloader, NSString;

@interface MMHeadImageMgr
{
    MMHeadImageCacher *_headImgCacher;
    MMHeadImageDownloader *_headImgDownloader;
    CUploadHDHeadImg *_headImgUploader;
}

+ (void)saveHeadImgData:(id)arg1 forLoginUser:(id)arg2;
+ (id)getUsrHeadImgForLogin:(id)arg1;
+ (_Bool)isDownloadHeadImageUsingWxpc;
+ (id)tryGenHQImage:(id)arg1;
+ (id)resizeImage:(id)arg1;
+ (_Bool)isKFName:(id)arg1;
+ (_Bool)isGoogleName:(id)arg1;
+ (_Bool)isMobileName:(id)arg1;
+ (id)amendHeadImgIfNeed:(id)arg1;
+ (id)getPluginImage:(id)arg1;
+ (id)getBrandContactPluginImage:(long long)arg1 length:(double)arg2;
+ (id)getBrandContactPluginDefaultImage:(long long)arg1 length:(double)arg2;
+ (id)getDefaultHeadImage:(id)arg1;
+ (id)getRoundImgDirectoryPath;
+ (id)getOldHeadImgPathForLoginUsr:(id)arg1 isHD:(_Bool)arg2;
+ (id)getHeadImgRootDirectoryPath;
+ (id)getHeadImgDirectoryPath:(unsigned char)arg1;
+ (id)getHeadImgPathForNewVersionForLoadImage:(id)arg1 forCategory:(unsigned char)arg2 isHD:(_Bool)arg3 forLogin:(_Bool)arg4;
+ (id)getHeadImgPathForNewVersionForLoadImage:(id)arg1 forCategory:(unsigned char)arg2 isHD:(_Bool)arg3;
+ (id)getHeadImgPathForNewVersion:(id)arg1 forCategory:(unsigned char)arg2 isHD:(_Bool)arg3;
+ (id)getHeadImgPathForOldVersion:(id)arg1 isHD:(_Bool)arg2;
- (void).cxx_destruct;
- (void)internalUpdateUsrHeadImg:(id)arg1 withUrl:(id)arg2 forCategory:(unsigned char)arg3;
- (void)internalUpdateUsrHeadImg:(id)arg1 forCategory:(unsigned char)arg2;
- (_Bool)checkIsNeedUpdateBrandIcon:(id)arg1 isHeadImgExistedInLocal:(_Bool)arg2;
- (_Bool)checkIsNeedUpdateKFBrandHeadImg:(id)arg1 isHeadImgExistedInLocal:(_Bool)arg2;
- (_Bool)checkIsNeedUpdateEnterpriseHeadImg:(id)arg1 isHeadImgExistedInLocal:(_Bool)arg2;
- (_Bool)checkIsNeedUpdateHeadImg:(id)arg1 isHeadImgExistedInLocal:(_Bool)arg2;
- (_Bool)isMobileName:(id)arg1;
- (_Bool)checkIsNeedUpdate:(id)arg1 category:(unsigned char)arg2 isHeadImgExistedInLocal:(_Bool)arg3;
- (void)handleModUserImg:(id)arg1;
- (void)onNewSyncModUserImage:(id)arg1;
- (void)onStrangerBrandHeadImageURLChange:(id)arg1;
- (void)onStrangerContactUpdateForbidden:(id)arg1;
- (void)onStrangerContactUpdated:(id)arg1 Contact:(id)arg2;
- (void)onWWKFContactHeadImageURLChangeed:(id)arg1;
- (void)onWWKFContactDeleted:(id)arg1;
- (void)onDeleteWeAppContact:(id)arg1;
- (void)onDeleteContact:(id)arg1;
- (void)onBrandContactHeadImageURLChange:(id)arg1;
- (void)onModifyContactHeadImage:(id)arg1;
- (void)onGetUsrImage:(id)arg1 Status:(id)arg2 Image:(id)arg3 Category:(unsigned char)arg4;
- (void)notifyHeadImageChange:(id)arg1;
- (_Bool)isNeedAutoUpdateHeadImgForUsr:(id)arg1;
- (void)setDownloadCommonMode;
- (void)setDownloadFastMode;
- (void)deleteHeadImageForBrand:(id)arg1;
- (_Bool)isNeedGetHDImg:(id)arg1;
- (_Bool)isUploadIngHeadImg;
- (unsigned int)uploadHDHeadImg:(id)arg1 qualityType:(unsigned int)arg2;
- (unsigned int)uploadHDHeadImg:(id)arg1;
- (unsigned int)downloadHDHeadImg:(id)arg1 url:(id)arg2 forCategory:(unsigned char)arg3;
- (unsigned int)downloadHDHeadImg:(id)arg1 forCategory:(unsigned char)arg2;
- (void)fixSelfHeadImgByLocalImg;
- (void)cancelDownloadRequest:(id)arg1;
- (_Bool)createEmptyUsrImgInLocal:(id)arg1;
- (_Bool)saveUsrImgToLocal:(id)arg1 withData:(id)arg2 forCategory:(unsigned char)arg3 isHD:(_Bool)arg4 forceReload:(_Bool)arg5 saveAsTemp:(_Bool)arg6;
- (_Bool)saveUsrImgToLocal:(id)arg1 withData:(id)arg2 forCategory:(unsigned char)arg3 isHD:(_Bool)arg4 forceReload:(_Bool)arg5;
- (_Bool)saveUsrImgToLocal:(id)arg1 withData:(id)arg2 forCategory:(unsigned char)arg3 isHD:(_Bool)arg4;
- (_Bool)saveUsrImgToLocal:(id)arg1 withFile:(id)arg2 forCategory:(unsigned char)arg3 isHD:(_Bool)arg4;
- (void)forceUpdatrUsrHeadImg:(id)arg1 withUrl:(id)arg2 forCategory:(unsigned char)arg3 isHeadImgExistedInLocal:(_Bool)arg4;
- (void)forceUpdatrUsrHeadImg:(id)arg1 forCategory:(unsigned char)arg2 isHeadImgExistedInLocal:(_Bool)arg3;
- (void)updateUsrHeadImg:(id)arg1 withUrl:(id)arg2 forCategory:(unsigned char)arg3 isHeadImgExistedInLocal:(_Bool)arg4;
- (void)updateUsrHeadImg:(id)arg1 forCategory:(unsigned char)arg2 isHeadImgExistedInLocal:(_Bool)arg3;
- (void)updateUsrHeadImg:(id)arg1 withUrl:(id)arg2 forCategory:(unsigned char)arg3;
- (void)updateUsrHeadImg:(id)arg1 forCategory:(unsigned char)arg2;
- (id)getOriginalHDHeadImg:(id)arg1 withCategory:(unsigned char)arg2;
- (_Bool)isHeadImgExistInLocal:(id)arg1 isHD:(_Bool)arg2;
- (_Bool)isHeadImgExistInLocal:(id)arg1;
- (id)getRoundImage:(id)arg1 size:(struct CGSize)arg2 cornerSize:(unsigned int)arg3 withCategory:(unsigned char)arg4;
- (id)getRoundImage:(id)arg1 size:(struct CGSize)arg2 withCategory:(unsigned char)arg3;
- (id)getOriginalHeadImage:(id)arg1 withCategory:(unsigned char)arg2;
- (id)getHeadImageWithUseScene:(id)arg1 withScene:(unsigned char)arg2 withCategory:(unsigned char)arg3 retHeadImgIsExistedLocal:(_Bool *)arg4;
- (id)getHeadImageWithUseScene:(id)arg1 withScene:(unsigned char)arg2 withCategory:(unsigned char)arg3;
- (id)getHeadImage:(id)arg1 withCategory:(unsigned char)arg2;
- (void)onServiceClearData;
- (void)onServiceMemoryWarning;
- (void)onServiceInit;
- (id)VoIPHDHeadImageWithContact:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

