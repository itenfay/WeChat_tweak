//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMBGMPanelPublishContext, MMBGMSelectedTabViewModel, NSString, UILabel, UITableView, UITableViewDiffableDataSource, WCFinderAnimationLoadingView, WCTimeLineFooterView;
@protocol MMBGMSelectedTabManagerDelegate;

@interface MMBGMSelectedTabManager : NSObject
{
    _Bool _isAutoStopped;
    id <MMBGMSelectedTabManagerDelegate> _delegate;
    MMBGMSelectedTabViewModel *_viewModel;
    MMBGMPanelPublishContext *_publishContext;
    UITableView *_tableView;
    WCTimeLineFooterView *_footerView;
    UITableViewDiffableDataSource *_diffDataSource;
    UILabel *_noMusicTipsLabel;
    WCFinderAnimationLoadingView *_loadingView;
    long long _currentIndex;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isAutoStopped; // @synthesize isAutoStopped=_isAutoStopped;
@property(nonatomic) long long currentIndex; // @synthesize currentIndex=_currentIndex;
@property(retain, nonatomic) WCFinderAnimationLoadingView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) UILabel *noMusicTipsLabel; // @synthesize noMusicTipsLabel=_noMusicTipsLabel;
@property(retain, nonatomic) UITableViewDiffableDataSource *diffDataSource; // @synthesize diffDataSource=_diffDataSource;
@property(retain, nonatomic) WCTimeLineFooterView *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) MMBGMPanelPublishContext *publishContext; // @synthesize publishContext=_publishContext;
@property(retain, nonatomic) MMBGMSelectedTabViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(nonatomic) __weak id <MMBGMSelectedTabManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)bgmSelectedTabTableViewCellGetPanelConfig:(id)arg1;
- (id)bgmSelectedTabTableViewCellGetSearchWord:(id)arg1;
- (unsigned long long)bgmSelectedTabTableViewCellGetTabType:(id)arg1;
- (void)MMRefreshTableFooterDidTriggerRefresh:(id)arg1;
- (id)currentSelectedMusicData;
- (void)musicTabVM:(id)arg1 didSelectMusicInfo:(id)arg2;
- (void)handleMusicTabVMDataChange:(id)arg1;
- (void)musicTabVMDataChange:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (void)applyDiffSnapshot;
- (void)reloadTableView;
- (void)updateTableViewFrame:(struct CGRect)arg1;
- (void)setSelfViewWithFrame:(struct CGRect)arg1 toSuperView:(id)arg2;
- (_Bool)isLyricsCellType;
- (struct CGRect)viewFrame;
- (void)onSwitchToThisPage:(_Bool)arg1;
- (void)manualSetCellAtIndex:(unsigned long long)arg1 isSelected:(_Bool)arg2;
- (void)startLoadingAnimation;
- (id)musicDataAtIndex:(unsigned long long)arg1;
- (void)selectMusicAtIndex:(unsigned long long)arg1;
- (void)selectFirstMusicIfNeeded;
- (void)autoStopSelectedCellPlayingState;
- (void)autoSetSelectedCellPlayingState;
- (void)setAllCellUnSelected;
- (id)initWithTabModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

