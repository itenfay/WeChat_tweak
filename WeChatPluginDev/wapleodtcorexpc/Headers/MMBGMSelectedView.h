//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMBGMPanelPublishContext, MMBGMSelectedBottomView, MMBGMSelectedConfig, MMBGMSelectedContentView, NSString;
@protocol MMBGMSelectedViewDelegate;

@interface MMBGMSelectedView
{
    id <MMBGMSelectedViewDelegate> _delegate;
    MMBGMPanelPublishContext *_publishContext;
    MMBGMSelectedConfig *_config;
    MMBGMSelectedContentView *_topContentView;
    MMBGMSelectedBottomView *_bottomView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMBGMSelectedBottomView *bottomView; // @synthesize bottomView=_bottomView;
@property(retain, nonatomic) MMBGMSelectedContentView *topContentView; // @synthesize topContentView=_topContentView;
@property(retain, nonatomic) MMBGMSelectedConfig *config; // @synthesize config=_config;
@property(retain, nonatomic) MMBGMPanelPublishContext *publishContext; // @synthesize publishContext=_publishContext;
@property(nonatomic) __weak id <MMBGMSelectedViewDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)bgmSelectedContentViewGetMusicState:(id)arg1;
- (void)bgmSelectedContentViewDidCloseSearchView:(id)arg1 latestSelectedMusic:(id)arg2;
- (void)bgmSelectedContentView:(id)arg1 didSearchWithKey:(id)arg2;
- (void)bgmSelectedContentViewDidClickSearchBar:(id)arg1;
- (void)bgmSelectedContentView:(id)arg1 willShowMusic:(id)arg2 tabIndex:(unsigned long long)arg3 musicIndex:(unsigned long long)arg4;
- (id)bgmSelectedContentView:(id)arg1 willSelectMusic:(id)arg2 indexPath:(id)arg3 tabIndex:(unsigned long long)arg4;
- (void)bgmSelectedContentViewDidSelectedMusic:(id)arg1 atTabIndex:(unsigned long long)arg2 index:(unsigned long long)arg3 isTriggerByTap:(_Bool)arg4;
- (void)onBGMSelectedBottomView:(id)arg1 didClickLyricOnBtn:(id)arg2;
- (void)onBGMSelectedBottomView:(id)arg1 didClickMusicOnBtn:(id)arg2;
- (void)onBGMSelectedBottomView:(id)arg1 didClickOstBtn:(id)arg2;
- (void)setBgmViewShow;
- (id)genMusicSelectedResult;
- (id)currentMusicData;
- (void)manualSetLyricOn:(_Bool)arg1;
- (void)manualSetOstOn:(_Bool)arg1;
- (void)manualSetMusicOn:(_Bool)arg1;
- (_Bool)isLyricOn;
- (_Bool)isOriginSoundSelected;
- (_Bool)isMusicOn;
- (void)addSearchSelectedResultIfNeed;
- (void)selectFirstMusicOfCurrentTabIfNeeded;
- (void)autoStopSelectedCellPlayingState;
- (void)autoSetSelectedCellPlayingState;
- (void)switchToTabIndex:(unsigned long long)arg1;
- (void)setAllCellUnSelected;
- (void)selectMusicAtTabIndex:(unsigned long long)arg1 index:(unsigned long long)arg2;
- (unsigned long long)currentSelectedTabIndex;
- (void)findAndSetMusicPlaying:(id)arg1;
- (void)addMusicData:(id)arg1 toIndex:(unsigned long long)arg2;
- (void)layoutSubviews;
- (void)setupWithtabModel:(id)arg1 config:(id)arg2;
- (id)genReportDict;
- (void)setupDataReport;
- (id)initWithFrame:(struct CGRect)arg1 tabModel:(id)arg2 config:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

