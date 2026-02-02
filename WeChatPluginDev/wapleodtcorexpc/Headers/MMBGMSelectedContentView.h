//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMBGMCategoryDetailView, MMBGMPanelPublishContext, MMBGMSelectedSearchView, MMBGMSelectedTabBarView, NSMutableArray, NSString, UIScrollView, WCSearchBar;
@protocol MMBGMSelectedContentViewDelegate, MMBGMSelectedMusicDataProtocol;

@interface MMBGMSelectedContentView
{
    id <MMBGMSelectedContentViewDelegate> _delegate;
    MMBGMPanelPublishContext *_publishContext;
    WCSearchBar *_searchBar;
    MMBGMSelectedTabBarView *_tabBar;
    UIScrollView *_scrollView;
    MMBGMSelectedSearchView *_searchResultView;
    NSMutableArray *_tabControllers;
    NSMutableArray *_tabViewModels;
    MMBGMCategoryDetailView *_categoryDetailView;
    unsigned long long _currentTabIndex;
    id <MMBGMSelectedMusicDataProtocol> _currentMusicData;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <MMBGMSelectedMusicDataProtocol> currentMusicData; // @synthesize currentMusicData=_currentMusicData;
@property(nonatomic) unsigned long long currentTabIndex; // @synthesize currentTabIndex=_currentTabIndex;
@property(retain, nonatomic) MMBGMCategoryDetailView *categoryDetailView; // @synthesize categoryDetailView=_categoryDetailView;
@property(retain, nonatomic) NSMutableArray *tabViewModels; // @synthesize tabViewModels=_tabViewModels;
@property(retain, nonatomic) NSMutableArray *tabControllers; // @synthesize tabControllers=_tabControllers;
@property(retain, nonatomic) MMBGMSelectedSearchView *searchResultView; // @synthesize searchResultView=_searchResultView;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) MMBGMSelectedTabBarView *tabBar; // @synthesize tabBar=_tabBar;
@property(retain, nonatomic) WCSearchBar *searchBar; // @synthesize searchBar=_searchBar;
@property(retain, nonatomic) MMBGMPanelPublishContext *publishContext; // @synthesize publishContext=_publishContext;
@property(nonatomic) __weak id <MMBGMSelectedContentViewDelegate> delegate; // @synthesize delegate=_delegate;
- (id)bgmCategoryDetailGetCurrentSelectedMusicData;
- (void)bgmCategoryDetailViewDidSelectedMusic:(id)arg1 atIndex:(unsigned long long)arg2 isTriggerByTap:(_Bool)arg3;
- (void)bgmCategoryDetailViewDidClickCloseButton;
- (void)onBgmSelectedSearchViewDidClickCancel:(id)arg1;
- (void)onBgmSelectedSearchView:(id)arg1 didClickSelectedMusicCategory:(id)arg2;
- (void)onBgmSelectedSearchView:(id)arg1 didSearchWithKey:(id)arg2;
- (void)onBgmSelectedSearchView:(id)arg1 willShowMusic:(id)arg2 musicIndex:(unsigned long long)arg3;
- (void)onBgmSelectedSearchView:(id)arg1 didSelectedMusic:(id)arg2 atIndex:(unsigned long long)arg3 isTriggerByTap:(_Bool)arg4;
- (id)onBgmSelectedSearchView:(id)arg1 willSelectMusic:(id)arg2 indexPath:(id)arg3;
- (id)bgmSelectedTabManagerGetCurrentMusicData;
- (void)bgmSelectedTabManager:(id)arg1 willShowMusic:(id)arg2 musicIndex:(unsigned long long)arg3;
- (void)bgmSelectedTabManager:(id)arg1 didSelectedMusic:(id)arg2 atIndex:(unsigned long long)arg3 isTriggerByTap:(_Bool)arg4;
- (id)bgmSelectedTabManager:(id)arg1 willSelectMusic:(id)arg2 indexPath:(id)arg3;
- (void)bgmSelectedTabBarView:(id)arg1 didSelectedIndex:(long long)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (_Bool)isMusicOn;
- (void)updateCurrentPlayingMusicData:(id)arg1;
- (void)findAndSetMusicPlaying:(id)arg1;
- (void)addSearchSelectedResultIfNeed;
- (void)selectFirstMusicOfCurrentTabIfNeeded;
- (void)autoStopSelectedCellPlayingState;
- (void)autoSetSelectedCellPlayingState;
- (void)switchToTabIndex:(unsigned long long)arg1;
- (void)setAllCellUnSelected;
- (void)selectMusicAtTabIndex:(unsigned long long)arg1 index:(unsigned long long)arg2;
- (unsigned long long)currentSelectedTabIndex;
- (void)loadCurrentIndex;
- (void)setBgmViewShow;
- (void)addMusicData:(id)arg1 toIndex:(unsigned long long)arg2;
- (void)layoutSubviews;
- (void)setupWithtabModel:(id)arg1 config:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1 tabModel:(id)arg2 config:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

