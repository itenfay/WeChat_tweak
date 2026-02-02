//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, UILabel, UITableView, UIView, WCFinderAnimationLoadingView, WCFinderFeedContentTextViewConfig, WCFinderMemberShipSearchViewModel;

@interface WCFinderMemberShipSearchVC
{
    CDUnknownBlockType _closeCallback;
    WCFinderMemberShipSearchViewModel *_viewModel;
    UITableView *_resTableView;
    unsigned long long _searchKey;
    NSString *_finderUserName;
    UIView *_emptyView;
    UILabel *_emptyLabel;
    WCFinderAnimationLoadingView *_emptyLoadingView;
    WCFinderFeedContentTextViewConfig *_textViewConfig;
}

+ (void)displayOnViewController:(id)arg1 finderUserName:(id)arg2 closeCallback:(CDUnknownBlockType)arg3;
- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderFeedContentTextViewConfig *textViewConfig; // @synthesize textViewConfig=_textViewConfig;
@property(retain, nonatomic) WCFinderAnimationLoadingView *emptyLoadingView; // @synthesize emptyLoadingView=_emptyLoadingView;
@property(retain, nonatomic) UILabel *emptyLabel; // @synthesize emptyLabel=_emptyLabel;
@property(retain, nonatomic) UIView *emptyView; // @synthesize emptyView=_emptyView;
@property(copy, nonatomic) NSString *finderUserName; // @synthesize finderUserName=_finderUserName;
@property(nonatomic) unsigned long long searchKey; // @synthesize searchKey=_searchKey;
@property(retain, nonatomic) UITableView *resTableView; // @synthesize resTableView=_resTableView;
@property(retain, nonatomic) WCFinderMemberShipSearchViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(copy, nonatomic) CDUnknownBlockType closeCallback; // @synthesize closeCallback=_closeCallback;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)onDataChanged;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)_doSerach:(long long)arg1;
- (void)_delaySearch;
- (void)onTextFieldChanged:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (id)customSearchBar;
- (double)searchBarHeight;
- (void)onNavigationCancelItemClick;
- (void)_dismiss:(unsigned long long)arg1;
- (id)createResTableView;
- (void)viewDidBePushOrPresent:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

