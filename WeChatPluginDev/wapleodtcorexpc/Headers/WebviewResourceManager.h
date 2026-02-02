//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray, NSMutableDictionary, NSMutableSet, NSRecursiveLock, NSString, WebResourceCDNDownloadHelper, WebResourceCDNUploadHelper;

@interface WebviewResourceManager
{
    NSRecursiveLock *_lock;
    NSMutableArray *_resItemArray;
    WebResourceCDNUploadHelper *_cdnUploadHelper;
    WebResourceCDNDownloadHelper *_cdnDownloadHelper;
    NSMutableDictionary *_recordPMSDic;
    _Bool _isEnableWebHostShow;
    unsigned int _webHostRuleVersion;
    NSMutableSet *_weixinHostSet;
    NSMutableDictionary *_tencentHostDic;
    NSMutableSet *_weixinHostRegSet;
    NSMutableDictionary *_tencentHostRegDic;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *tencentHostRegDic; // @synthesize tencentHostRegDic=_tencentHostRegDic;
@property(retain, nonatomic) NSMutableSet *weixinHostRegSet; // @synthesize weixinHostRegSet=_weixinHostRegSet;
@property(retain, nonatomic) NSMutableDictionary *tencentHostDic; // @synthesize tencentHostDic=_tencentHostDic;
@property(retain, nonatomic) NSMutableSet *weixinHostSet; // @synthesize weixinHostSet=_weixinHostSet;
@property(nonatomic) unsigned int webHostRuleVersion; // @synthesize webHostRuleVersion=_webHostRuleVersion;
@property(nonatomic) _Bool isEnableWebHostShow; // @synthesize isEnableWebHostShow=_isEnableWebHostShow;
- (id)calcHostReg:(id)arg1;
- (void)updateWebHostRule;
- (void)onCallBackFail:(id)arg1 name:(id)arg2 version:(int)arg3 errNo:(int)arg4 errCode:(int)arg5 scene:(long long)arg6;
- (void)onCallBackSuccess:(id)arg1 name:(id)arg2 version:(int)arg3 scene:(long long)arg4;
- (void)onCallBackCheckSuccess:(id)arg1 name:(id)arg2 version:(int)arg3 scene:(long long)arg4;
- (void)onItemDownloadProgress:(int)arg1 Item:(id)arg2;
- (void)onItemCDNDownloadFinished:(int)arg1 Item:(id)arg2;
- (void)onItemUploadProgressWithoutMediaId:(int)arg1 Item:(id)arg2;
- (void)onItemUploadCDNFinishedWithoutMediaId:(int)arg1 Item:(id)arg2;
- (void)onItemUploadProgress:(int)arg1 Item:(id)arg2;
- (void)onItemUploadCDNFinished:(int)arg1 Item:(id)arg2;
- (id)matchWebHostRule:(id)arg1;
- (id)getWebHostRule:(id)arg1;
- (_Bool)uploadLocalResItem:(id)arg1;
- (_Bool)uploadLocalImage:(id)arg1;
- (id)getResItemByLocalId:(id)arg1;
- (void)addCustomResItem:(id)arg1;
- (void)saveLocalImageFinished:(id)arg1;
- (_Bool)uploadVideo:(id)arg1;
- (_Bool)addMiniGameVideoItemResourceByCopyFile:(id)arg1;
- (_Bool)addVideoResource:(id)arg1;
- (_Bool)downloadVoice:(id)arg1 AppId:(id)arg2;
- (_Bool)uploadVoice:(id)arg1;
- (void)addRecordResource:(id)arg1;
- (_Bool)downloadImage:(id)arg1 AppId:(id)arg2;
- (void)asyncNotifyResourceDownloadFinish:(id)arg1;
- (void)removeImageWithLocalId:(id)arg1;
- (void)addItemToResArray:(id)arg1;
- (void)addLocalImagesWithOriginalSize:(id)arg1;
- (id)addImage:(id)arg1;
- (void)addLocalImages:(id)arg1;
- (void)stopAllNetworkTask;
- (id)getLocalVideoPathByResourceId:(id)arg1;
- (id)getLocalPathByResourceId:(id)arg1;
- (id)getLocalResourceIdByPath:(id)arg1;
- (id)getLocalResourceId;
- (void)saveRecordPermissionDic;
- (_Bool)loadRecordPermissionDic;
- (void)saveResItemArray;
- (_Bool)loadResItemArray;
- (id)getUserWebResourceRootDir;
- (void)onServiceClearData;
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

