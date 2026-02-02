//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMLiveTaskId, NSMutableArray, NSString, UIView, WCFinderGameLiveListViewController;
@protocol MMFinderLiveStarterChooseGameSearchDelegate;

@interface WCFinderLiveStarterChooseGameSearchPanelView
{
    _Bool _showSearch;
    id <MMFinderLiveStarterChooseGameSearchDelegate> _delegate;
    UIView *_contentView;
    WCFinderGameLiveListViewController *_gameListViewController;
    MMLiveTaskId *_liveTaskId;
    NSMutableArray *_gameUserInfoList;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool showSearch; // @synthesize showSearch=_showSearch;
@property(retain, nonatomic) NSMutableArray *gameUserInfoList; // @synthesize gameUserInfoList=_gameUserInfoList;
@property(retain, nonatomic) MMLiveTaskId *liveTaskId; // @synthesize liveTaskId=_liveTaskId;
@property(retain, nonatomic) WCFinderGameLiveListViewController *gameListViewController; // @synthesize gameListViewController=_gameListViewController;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) __weak id <MMFinderLiveStarterChooseGameSearchDelegate> delegate; // @synthesize delegate=_delegate;
- (double)contentViewHeight;
- (void)setupPageSheetConfig;
- (void)layoutUI;
- (void)createUI;
- (void)leftButtonAction;
- (void)onMMLiveStarterViewControllerRepoortWithActionType:(unsigned long long)arg1 gameId:(id)arg2;
- (void)onMMLiveStarterViewControllerStartGameLiveWithViewModel:(id)arg1 currentController:(id)arg2;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithTaskId:(id)arg1 gameUserInfoList:(id)arg2 showSearch:(_Bool)arg3 contentViewHeight:(double)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

