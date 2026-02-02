//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class BrandTemplateMsgAuthSettingPageModel, NSMutableArray, NSString, WAContactGetter;

@interface MMTemplateMsgAuthScopesViewController
{
    NSMutableArray *_scopeList;
    WAContactGetter *_contactGetter;
    _Bool _hasFillOriginInfoAndReportEnterEvent;
    _Bool _isGlobalRecv;
    NSString *_userName;
    NSString *_nickName;
    BrandTemplateMsgAuthSettingPageModel *_settingPageModel;
    unsigned long long _enterScene;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long enterScene; // @synthesize enterScene=_enterScene;
@property(retain, nonatomic) BrandTemplateMsgAuthSettingPageModel *settingPageModel; // @synthesize settingPageModel=_settingPageModel;
@property(nonatomic) _Bool isGlobalRecv; // @synthesize isGlobalRecv=_isGlobalRecv;
@property(copy, nonatomic) NSString *nickName; // @synthesize nickName=_nickName;
@property(copy, nonatomic) NSString *userName; // @synthesize userName=_userName;
- (_Bool)isCurrentSceneNeedDataReporter;
- (void)onStrangerContactUpdated:(id)arg1;
- (void)getWeappContactForUsername:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)getNickNameFromLocalOrServer;
- (void)onUpdateScopeGlobalRecv:(_Bool)arg1 forUser:(id)arg2;
- (void)onFetchShowInSettingScopeList:(id)arg1 forUser:(id)arg2 hasSettingEntry:(_Bool)arg3;
- (void)reloadUI;
- (void)tryUpdateKVReportInfo;
- (void)viewDidLoad;
- (void)viewDidBePoped:(_Bool)arg1;
- (id)init;
- (id)initWithEnterScene:(unsigned long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

