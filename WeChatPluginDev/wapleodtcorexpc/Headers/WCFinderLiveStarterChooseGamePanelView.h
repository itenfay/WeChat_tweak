//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMFinderLiveGameUserInfo, MMLiveTaskId, NSArray, NSMutableArray, NSString, UIView, WCFinderGameLiveListViewController, WCFinderLiveStarterChooseGameSearchPanelView, WCFinderTabPageView;
@protocol MMFinderLiveStarterChooseGameDelegate;

@interface WCFinderLiveStarterChooseGamePanelView
{
    _Bool _showSearch;
    id <MMFinderLiveStarterChooseGameDelegate> _delegate;
    UIView *_contentView;
    WCFinderGameLiveListViewController *_gameListViewController;
    MMLiveTaskId *_liveTaskId;
    NSMutableArray *_gameUserInfoList;
    WCFinderLiveStarterChooseGameSearchPanelView *_searchPanelView;
    MMFinderLiveGameUserInfo *_selectGameUserInfo;
    WCFinderTabPageView *_tabPageView;
    NSArray *_gameCategoryList;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *gameCategoryList; // @synthesize gameCategoryList=_gameCategoryList;
@property(retain, nonatomic) WCFinderTabPageView *tabPageView; // @synthesize tabPageView=_tabPageView;
@property(retain, nonatomic) MMFinderLiveGameUserInfo *selectGameUserInfo; // @synthesize selectGameUserInfo=_selectGameUserInfo;
@property(retain, nonatomic) WCFinderLiveStarterChooseGameSearchPanelView *searchPanelView; // @synthesize searchPanelView=_searchPanelView;
@property(nonatomic) _Bool showSearch; // @synthesize showSearch=_showSearch;
@property(retain, nonatomic) NSMutableArray *gameUserInfoList; // @synthesize gameUserInfoList=_gameUserInfoList;
@property(retain, nonatomic) MMLiveTaskId *liveTaskId; // @synthesize liveTaskId=_liveTaskId;
@property(retain, nonatomic) WCFinderGameLiveListViewController *gameListViewController; // @synthesize gameListViewController=_gameListViewController;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) __weak id <MMFinderLiveStarterChooseGameDelegate> delegate; // @synthesize delegate=_delegate;
- (double)contentViewHeight;
- (void)setupPageSheetConfig;
- (void)layoutUI;
- (void)createUI;
- (void)onHeaderAction;
- (void)createSearchPanelView;
- (void)onSearchAction;
- (void)leftButtonAction;
- (void)pageSheetWillAppear;
- (void)onMMLiveStarterViewControllerRepoortWithActionType:(unsigned long long)arg1 gameId:(id)arg2;
- (void)onMMLiveStarterViewControllerStartGameLiveWithViewModel:(id)arg1 currentController:(id)arg2;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)updateWithTaskId:(id)arg1 gameCategoryList:(id)arg2 gameUserInfoList:(id)arg3 showSearch:(_Bool)arg4 selectGameUserInfo:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

