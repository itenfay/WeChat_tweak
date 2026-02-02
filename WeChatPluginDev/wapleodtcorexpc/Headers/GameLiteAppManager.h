//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class GCCommonServer, NSMutableDictionary, NSString, WCTTable;

@interface GameLiteAppManager
{
    _Bool _ignoreGameLiteCheck;
    NSMutableDictionary *_dbDataDict;
    WCTTable *_dbTable;
    GCCommonServer *_server;
}

- (void).cxx_destruct;
@property(retain, nonatomic) GCCommonServer *server; // @synthesize server=_server;
@property(retain, nonatomic) WCTTable *dbTable; // @synthesize dbTable=_dbTable;
@property(retain, nonatomic) NSMutableDictionary *dbDataDict; // @synthesize dbDataDict=_dbDataDict;
@property(nonatomic) _Bool ignoreGameLiteCheck; // @synthesize ignoreGameLiteCheck=_ignoreGameLiteCheck;
- (void)asyncGetLiteAppControllerCheckTopVc:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)showHalfScreenWebViewWithConfig:(id)arg1 liteAppParam:(id)arg2;
- (_Bool)checkPageExists:(id)arg1 inLiteAppInfo:(id)arg2;
- (id)getLiteAppViewControllerWithAppInfo:(id)arg1 pagePath:(id)arg2 queryJsonStr:(id)arg3 transParentLiteApp:(_Bool)arg4;
- (id)getViewControllerWithUrl:(id)arg1 onlyReturnLite:(_Bool)arg2 transParentLiteApp:(_Bool)arg3;
- (id)gameChatEntryScene;
- (id)getViewControllerWithUrl:(id)arg1;
- (id)queryDictWithEntryScene:(id)arg1 urlStr:(id)arg2;
- (id)doubleCheckGetLiteAppInfoItemWithPkgId:(id)arg1 liteAppId:(id)arg2;
- (id)getLiteInfoAndCheckUpateIfNeedWithAppid:(id)arg1 pkgId:(id)arg2;
- (id)getLiteInfoAndCheckUpateIfNeedWithConfigModel:(id)arg1;
- (id)innerGetLiteAppConfigDbModel:(id)arg1;
- (id)getDbModelsForUrl:(id)arg1;
- (void)handleLiteConfResponse:(id)arg1;
- (id)dbModelFromUrlLiteConf:(id)arg1;
- (id)liteAppConfigModel:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

