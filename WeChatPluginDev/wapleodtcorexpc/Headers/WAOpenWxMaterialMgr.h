//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableDictionary, NSString, UIImage;

@interface WAOpenWxMaterialMgr
{
    NSMutableDictionary *_materialWeAppDic;
    UIImage *_cornerImg;
}

+ (id)htmlTransPathForUpdatedWebResource;
+ (id)htmlPathForUpdatedWebResource;
+ (id)confPathForUpdatedWebResource;
+ (id)dirForUpdatedWebResource;
+ (id)confPathForDefaultWebResource;
+ (id)dirForDefaultWebResource;
- (void).cxx_destruct;
@property(retain, nonatomic) UIImage *cornerImg; // @synthesize cornerImg=_cornerImg;
@property(retain, nonatomic) NSMutableDictionary *materialWeAppDic; // @synthesize materialWeAppDic=_materialWeAppDic;
- (void)reportOpenMaterialOpenItem:(id)arg1;
- (void)reportOpenMaterialListItem:(id)arg1;
- (void)reportOpenMaterialItem:(id)arg1;
- (id)adjustOneLine:(id)arg1;
- (id)adjustRecommName:(id)arg1 appName:(id)arg2;
- (id)getExtByMime:(id)arg1;
- (id)getMimeByExt:(id)arg1;
- (id)getExtMimeDic;
- (id)makeExtMimeDic;
- (void)openAppForMaterial:(id)arg1;
- (void)showAllAppForMaterial:(id)arg1;
- (id)getMatarialTypeName:(unsigned int)arg1;
- (id)safeArr:(id)arg1;
- (id)safeStr:(id)arg1;
- (id)getWeAppIcon:(id)arg1;
- (id)genAppListActionSheetItem:(id)arg1 scene:(unsigned int)arg2;
- (id)genAppActionSheetItem:(id)arg1;
- (id)getCornerImg;
- (id)getInfoForFile:(id)arg1;
- (id)getInfoForVideo;
- (id)getInfoForImageFilePath:(id)arg1;
- (id)getInfoForWebview;
- (id)getInfoForFileExt:(id)arg1;
- (void)onMaterialWeAppRsp:(id)arg1 req:(id)arg2;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)requestWeAppList:(id)arg1;
- (void)updateWeAppForMaterial:(id)arg1;
- (_Bool)forbidMaterialType:(unsigned int)arg1;
- (void)onResUpdateFinish:(long long)arg1 resType:(unsigned int)arg2 subResType:(unsigned int)arg3;
- (void)tryCopyWebResource;
- (void)updateWebResource;
- (void)dealloc;
- (void)onServiceInit;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

