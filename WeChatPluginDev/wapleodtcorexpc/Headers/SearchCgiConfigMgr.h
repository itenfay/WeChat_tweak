//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, SearchCgiConfigData;

@interface SearchCgiConfigMgr
{
    SearchCgiConfigData *_cgiConfig;
    _Bool _bProtectRequst;
    unsigned int _lastFailRequstTime;
    SearchCgiConfigData *_dicDefaultConfig;
    _Bool _isUpdatingCgiConfig;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isUpdatingCgiConfig; // @synthesize isUpdatingCgiConfig=_isUpdatingCgiConfig;
- (void)onLimitedModeBizLevelChange:(long long)arg1 bizType:(long long)arg2;
- (void)onLimitedModeChanged;
- (void)OnGetNewXmlMsg:(id)arg1 Type:(id)arg2 MsgWrap:(id)arg3;
- (void)onAuthOK;
- (void)parseDic:(id)arg1 requestKeys:(id)arg2;
- (void)handleResp:(id)arg1 andRequest:(id)arg2;
- (void)handleLogicError;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)doRequestWithScene:(unsigned long long)arg1;
- (void)doRequest;
- (void)doRequestByJSApi;
- (id)getBizTopSearchPlaceHolder;
- (id)getGuideConfigTilte:(unsigned long long)arg1;
- (id)getDefaultConfigPathForLang:(id)arg1;
- (id)getDefaultConfig;
- (void)resetData;
- (void)cleanAllCache;
- (_Bool)tryRequest;
- (id)dataPath;
- (void)removeFile;
- (void)writeDataToFile;
- (void)initData;
- (id)getConfigDictFor:(id)arg1;
- (id)getConfigStringFor:(id)arg1;
- (id)getTopstoryTabParam;
- (id)getSearchId;
- (unsigned long long)getSnsContactMatchQueryLenLimit;
- (_Bool)isSnsContactsMatchOpen;
- (unsigned long long)getFFWebSearchGuideParam;
- (id)getBrowseIconUrlInLabDetailView;
- (id)getFFBrowseIconUrl;
- (id)routeExptItemFor:(unsigned long long)arg1;
- (id)getFFBrowseEntryTitle;
- (id)getWebSearchIconUrlInLabDetailView;
- (id)getFFWebSearchTitle;
- (_Bool)isFFWebSearchEntryOpen;
- (id)getSearchGuideConfig:(long long)arg1;
- (id)getDiscoverSearchGuideConfigForH5;
- (_Bool)isSugOpenForMFSBiz;
- (_Bool)isSugOpenForTabNovel;
- (_Bool)isSugOpenForTabEmot;
- (_Bool)isSugOpenForTabMusic;
- (_Bool)isSugOpenForTabSnsLocal;
- (_Bool)isSugOpenForTabSns;
- (_Bool)isSugOpenForTabArticleLocal;
- (_Bool)isSugOpenForTabArticle;
- (_Bool)isSugOpenForTabBizServiceMore;
- (_Bool)isSugOpenForTabBiz;
- (_Bool)isSugOpenForGlobalNovelMore;
- (_Bool)isSugOpenForGlobalEmotMore;
- (_Bool)isSugOpenForGlobalMusicMore;
- (_Bool)isSugOpenForGlobalWeAppMore;
- (_Bool)isSugOpenForGlobalBizMore;
- (_Bool)isSugOpenForGlobalSnsMore;
- (_Bool)isSugOpenForGlobalMix;
- (_Bool)isSugOpenForBrandArticleSearch;
- (_Bool)shouldHideKeyboardIn:(unsigned long long)arg1 bizType:(unsigned long long)arg2;
- (id)getSearchBarConfig;
- (id)getWebSearchBarWording;
- (id)getValidConfig;
- (void)onServiceEnterForeground;
- (void)onServiceInit;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

