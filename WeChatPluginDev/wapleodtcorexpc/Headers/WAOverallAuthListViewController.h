//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSArray, NSMutableArray, NSMutableDictionary, NSString, UILabel, UIView;

@interface WAOverallAuthListViewController
{
    NSMutableArray *_cellDataList;
    unsigned int _minUpdateTime;
    _Bool _hasNoMore;
    UIView *_emptyView;
    UILabel *_emptyLabel;
    NSArray *_allNeedShowScopeList;
    NSMutableDictionary *_cellDataWaitingForUpdate;
}

- (void).cxx_destruct;
- (_Bool)isSetNormalToBlackStyle;
- (id)normalTintColor;
- (void)modifyCellWithUsrName:(id)arg1 scope:(id)arg2 desc:(id)arg3 isAdd:(_Bool)arg4;
- (void)onDeleteAppUseUserInfo:(id)arg1 errorCode:(int)arg2 errMsg:(id)arg3;
- (void)onAppAuthInfoListModifyEnd:(_Bool)arg1 AuthDataList:(id)arg2;
- (void)onModifyWeAppContact:(id)arg1;
- (void)requestContactWithUsrNameList:(id)arg1;
- (void)getOverallAuthListCgi:(id)arg1 didFailWithError:(id)arg2;
- (void)getOverallAuthListCgi:(id)arg1 didGetAuthItemList:(id)arg2 hasNoMore:(_Bool)arg3 allNeedShowScopeList:(id)arg4;
- (void)requestNextPagePrivacyReportItem;
- (void)initRefreshControl;
- (void)initEmptyView;
- (void)updateListData;
- (void)viewDidLoad;
- (void)loadView;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

