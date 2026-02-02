//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMSpecialMsgSearchHelper, NSString;

@interface MMBaseSessionViewController
{
    MMSpecialMsgSearchHelper *m_specialMsgSearchHelper;
    unsigned int m_detailSearchResultCount;
    unsigned int m_resCount;
    _Bool _isShowMsgSearch;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isShowMsgSearch; // @synthesize isShowMsgSearch=_isShowMsgSearch;
- (void)handleNavigationCancelItemClick;
- (void)onFTSKFContactSearchResultChangedForDetail;
- (void)cancelSearch;
- (_Bool)hasSearchDone;
- (void)search:(id)arg1;
- (void)didCustomizationSearchSelectForSpecialMsgReport:(id)arg1;
- (void)didCustomizationKFContactSearchSelectForSpecialMsg:(id)arg1 searchText:(id)arg2;
- (void)didCustomizationSearchSelectForSpecialMsg:(id)arg1 searchText:(id)arg2;
- (void)returenRecombineCustomizationArrSearchResult:(id)arg1 arrRecombineSearchResult:(id)arg2;
- (void)addMsgSessionFirstTitleCell:(id)arg1;
- (id)getArrDetailSearchResult;
- (void)recombineCustomizationKFSessionArrSearchResult:(id)arg1 searchText:(id)arg2;
- (void)recombineCustomizationArrSearchResult:(id)arg1 searchText:(id)arg2;
- (id)getCustomizationCellForSpecialMsgInTableView:(id)arg1 result:(id)arg2 cellIndex:(id)arg3;
- (void)startCustomizationSearchForSpecialMsg:(id)arg1;
- (id)getChatContactForSpecialMsg;
- (_Bool)checkClusterUserNameForSpecialMsg:(id)arg1;
- (void)msgSearchBarDoSearchForSpecialMsg;
- (void)msgSearchDidDismissForSpecialMsg;
- (void)msgSearchBarCancelForSpecialMsg;
- (void)msgSearchBarActiveForSpecialMsg;
- (void)reportSearchButtonExposure;
- (_Bool)isKFContactMsgSearchBusinessType;
- (void)openKFContact:(id)arg1;
- (_Bool)shouldHideNavigationBar;
- (void)viewWillPop:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (_Bool)shouldInteractivePop;
- (void)handleMsgUpdateSearchBar:(id)arg1;
- (unsigned int)getMsgSearchBusinessType;
- (void)initIsShowMsgSearch;
- (void)initGetSpecialMsgSearchHelper;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

