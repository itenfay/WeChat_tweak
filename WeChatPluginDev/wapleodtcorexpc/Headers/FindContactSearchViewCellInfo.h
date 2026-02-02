//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMLoadingView, MMUILabel, MMUIViewController, NSArray, NSString, SearchContactDataProvider, UITextField, UIView, WCDataSearcher;
@protocol FindContactSearchViewCellInfoDelegate;

@interface FindContactSearchViewCellInfo
{
    UITextField *m_userNameTextField;
    MMLoadingView *m_loadingView;
    NSString *m_nsUserNameToFind;
    MMUIViewController *m_containViewController;
    UIView *m_backGroundView;
    UIView *m_backGroundBlurView;
    unsigned int _requestEventID;
    WCDataSearcher *_searcher;
    _Bool _didSearchContactDone;
    _Bool _isSearching;
    _Bool _isActived;
    _Bool _bShowNoResult;
    _Bool _bOnlyShowResult;
    _Bool _bHasShownWebSearchCell;
    _Bool _bHasOperateOnlineResult;
    id <FindContactSearchViewCellInfoDelegate> _m_delegate;
    NSArray *_foundContactArray;
    unsigned long long _searchContactState;
    SearchContactDataProvider *_searchContactDataProvider;
    MMUILabel *_nonResultLabel;
}

+ (id)contactsFromSearchResponse:(id)arg1 req:(id)arg2;
- (void).cxx_destruct;
@property(nonatomic) _Bool bHasOperateOnlineResult; // @synthesize bHasOperateOnlineResult=_bHasOperateOnlineResult;
@property(nonatomic) _Bool bHasShownWebSearchCell; // @synthesize bHasShownWebSearchCell=_bHasShownWebSearchCell;
@property(nonatomic) _Bool bOnlyShowResult; // @synthesize bOnlyShowResult=_bOnlyShowResult;
@property(nonatomic) _Bool bShowNoResult; // @synthesize bShowNoResult=_bShowNoResult;
@property(nonatomic) _Bool isActived; // @synthesize isActived=_isActived;
@property(nonatomic) _Bool isSearching; // @synthesize isSearching=_isSearching;
@property(nonatomic) _Bool didSearchContactDone; // @synthesize didSearchContactDone=_didSearchContactDone;
@property(retain, nonatomic) MMUILabel *nonResultLabel; // @synthesize nonResultLabel=_nonResultLabel;
@property(retain, nonatomic) SearchContactDataProvider *searchContactDataProvider; // @synthesize searchContactDataProvider=_searchContactDataProvider;
@property(nonatomic) unsigned long long searchContactState; // @synthesize searchContactState=_searchContactState;
@property(retain, nonatomic) NSArray *foundContactArray; // @synthesize foundContactArray=_foundContactArray;
@property(nonatomic) __weak id <FindContactSearchViewCellInfoDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
@property(retain, nonatomic) NSString *m_nsUserNameToFind; // @synthesize m_nsUserNameToFind;
@property(retain, nonatomic) UITextField *m_userNameTextField; // @synthesize m_userNameTextField;
- (void)showBizConfig;
- (void)doExit;
- (void)onFoom;
- (void)onTestCrashMemoryCorruption;
- (void)onTestCrashPureSwift;
- (void)onTestCrashSwift;
- (void)onEnterRDMDeviceList;
- (void)onTestCrash9;
- (void)onTestCrash8;
- (void)onTestCrash7;
- (void)onTestCrash60;
- (void)onTestCrash6;
- (void)onTestCrash5;
- (void)onTestCrash4;
- (void)onTestCrash2;
- (void)onTestCrash1;
- (void)onTestCrash;
- (void)logWebSearchClickByKeyword:(id)arg1 clickType:(unsigned int)arg2;
- (void)endSearch;
- (void)onGetSearchDetailPageResponse:(id)arg1 eventID:(unsigned int)arg2;
- (void)do_LogExt:(int)arg1;
- (void)onSearchResultViewNeedStartWebSearch;
- (void)onSearchResultViewNeedPushViewController:(id)arg1;
- (void)onSearchResultViewNeedReload;
- (void)openContactInfoViewForPhone:(id)arg1;
- (void)showContactInfoView:(id)arg1;
- (void)showWebSearchEntryWithSrvErrMsg:(id)arg1 bfail:(_Bool)arg2 response:(id)arg3;
- (void)showContactListInfoView;
- (void)doShowContactListInfoView;
- (void)onGetNonResult;
- (_Bool)isSearchActived;
- (void)SearchBarBecomeUnActive;
- (void)SearchBarBecomeActive;
- (void)onSearch:(id)arg1;
- (_Bool)handleDebugCommand:(id)arg1;
- (id)getSearcher;
- (_Bool)isValidLocalQuery:(id)arg1;
- (void)removeNoResultLabelWhenSearching;
- (_Bool)allTextIsBlank;
- (void)newMessageFromContactInfo:(id)arg1;
- (void)addFriendScene:(id)arg1;
- (_Bool)isBestGuessPhoneNumber:(id)arg1;
- (_Bool)isObj:(id)arg1 match:(id)arg2;
- (id)filterUserName:(id)arg1;
- (id)getSearchBarText;
- (void)stopLoading;
- (void)startLoading;
- (void)updateLoadingWithText:(id)arg1;
- (void)startBlockedLoadingWithText:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)sendBrandContactListRequest;
- (void)onGetSearchContactRet:(id)arg1 req:(id)arg2;
- (void)updateResultArray:(id)arg1;
- (void)onlySetActive:(id)arg1;
- (void)doSearch;
- (void)didSearchViewTableSelect:(id)arg1;
- (double)heightForSearchViewTable:(id)arg1;
- (id)cellForIndex:(id)arg1 ForSearchViewTable:(id)arg2;
- (id)getAddressBookPersonImage:(id)arg1;
- (id)titleForHeaderInSection:(long long)arg1 ForSearchViewTable:(id)arg2;
- (id)viewForHeaderInSection:(long long)arg1 ForSearchViewTable:(id)arg2;
- (double)heightForHeaderInSection:(long long)arg1 ForSearchViewTable:(id)arg2;
- (long long)numberOfRowsInSection:(long long)arg1 ForSearchViewTable:(id)arg2;
- (long long)numberOfSectionsForSearchViewTable:(id)arg1;
- (void)wcsWillDismissSearch:(id)arg1;
- (void)cancelSearch;
- (void)wcsSearchBarCancelButtonClicked:(id)arg1;
- (void)wcsSearchBar:(id)arg1 textDidChange:(id)arg2;
- (void)wcsDidPresentSearch:(id)arg1;
- (void)wcsWillPresentSearch:(id)arg1;
- (void)wcsSearchBarSearchButtonClicked:(id)arg1;
- (void)doSearch:(id)arg1 Pre:(_Bool)arg2;
- (id)makeEntryCell:(id)arg1;
- (void)makeCell:(id)arg1;
- (void)OnSearchUser;
- (_Bool)becomeFirstResponder;
- (_Bool)resignFirstResponder;
- (void)layoutViews;
- (void)onTagBackgroundView:(id)arg1;
- (void)setDimsDuringSearch:(_Bool)arg1;
- (id)initWithContentController:(id)arg1 backGroundView:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

