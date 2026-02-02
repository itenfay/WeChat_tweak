//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMLiteAppDownloadMgr, NSDictionary, NSMutableDictionary, NSString;

@interface LiteAppJsApiSaveToPhotosAlbum
{
    NSMutableDictionary *_result;
    NSDictionary *_tailInfo;
    _Bool _useLocalId;
    MMLiteAppDownloadMgr *_downloadMgr;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMLiteAppDownloadMgr *downloadMgr; // @synthesize downloadMgr=_downloadMgr;
- (void)addTailInfo:(id)arg1;
- (void)onDownloadTaskCompletion:(id)arg1 errType:(unsigned long long)arg2 errCode:(int)arg3;
- (void)_onSaveImageFinishedWithSuccess:(_Bool)arg1 placeHolder:(id)arg2 error:(id)arg3;
- (void)video:(id)arg1 didFinishSavingWithError:(id)arg2 contextInfo:(void *)arg3;
- (void)getFileDataFromLocal:(id)arg1;
- (void)getFileDataFromCDN:(id)arg1 filePath:(id)arg2;
- (void)invokeJsApi:(id)arg1 param:(id)arg2 isFromView:(_Bool)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

