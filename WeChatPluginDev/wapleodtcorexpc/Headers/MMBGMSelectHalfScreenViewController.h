//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMBGMPanelPublishContext, MMBGMSelectedConfig, MMBGMSelectedView, NSMutableArray, NSString, UIColor;
@protocol MMBGMSelectHalfScreenViewControllerDelegate;

@interface MMBGMSelectHalfScreenViewController
{
    _Bool _isShowingInView;
    _Bool _useIphoneUIStyleInIpad;
    id <MMBGMSelectHalfScreenViewControllerDelegate> _delegate;
    NSMutableArray *_tabModels;
    MMBGMPanelPublishContext *_publishContext;
    unsigned long long _entranceType;
    UIColor *_maskBackgroundColor;
    MMBGMSelectedView *_musicView;
    MMBGMSelectedConfig *_config;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMBGMSelectedConfig *config; // @synthesize config=_config;
@property(retain, nonatomic) MMBGMSelectedView *musicView; // @synthesize musicView=_musicView;
@property(nonatomic) _Bool useIphoneUIStyleInIpad; // @synthesize useIphoneUIStyleInIpad=_useIphoneUIStyleInIpad;
@property(retain, nonatomic) UIColor *maskBackgroundColor; // @synthesize maskBackgroundColor=_maskBackgroundColor;
@property(nonatomic) unsigned long long entranceType; // @synthesize entranceType=_entranceType;
@property(retain, nonatomic) MMBGMPanelPublishContext *publishContext; // @synthesize publishContext=_publishContext;
@property(retain, nonatomic) NSMutableArray *tabModels; // @synthesize tabModels=_tabModels;
@property(nonatomic) _Bool isShowingInView; // @synthesize isShowingInView=_isShowingInView;
@property(nonatomic) __weak id <MMBGMSelectHalfScreenViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)getSecondCutPromotionMaskView;
- (void)bgmSelectedViewDidCloseSearchView:(id)arg1 latestSelectedMusic:(id)arg2;
- (void)bgmSelectedViewDidClickOstOnBtn:(_Bool)arg1;
- (void)bgmSelectedViewDidClickLyricOnBtn:(_Bool)arg1;
- (void)bgmSelectedViewDidClickMusicOnBtn:(_Bool)arg1;
- (void)bgmSelectedView:(id)arg1 didSearchWithKey:(id)arg2;
- (void)bgmSelectedViewDidClickSearchBar:(id)arg1;
- (void)bgmSelectedView:(id)arg1 willShowMusic:(id)arg2 tabIndex:(unsigned long long)arg3 musicIndex:(unsigned long long)arg4;
- (id)bgmSelectedView:(id)arg1 willSelectMusic:(id)arg2 indexPath:(id)arg3 tabIndex:(unsigned long long)arg4;
- (void)bgmSelectedViewDidSelectedMusic:(id)arg1 atTabIndex:(unsigned long long)arg2 index:(unsigned long long)arg3 isTriggerByTap:(_Bool)arg4;
- (void)showInView:(id)arg1 animated:(_Bool)arg2 complete:(CDUnknownBlockType)arg3;
- (void)switchToTabIndex:(unsigned long long)arg1;
- (void)setAllCellUnSelected;
- (void)selectMusicAtTabIndex:(unsigned long long)arg1 index:(unsigned long long)arg2;
- (unsigned long long)currentSelectedTabIndex;
- (void)setBgmViewShow;
- (void)pageSheetDidChangeVisibleHeight:(double)arg1;
- (void)pageSheetDidClose:(_Bool)arg1;
- (void)pageSheetWillClose:(_Bool)arg1;
- (id)currentMusicData;
- (id)genMusicSelectedResult;
- (void)findAndSetMusicPlaying:(id)arg1;
- (void)addMusicData:(id)arg1 toIndex:(unsigned long long)arg2;
- (void)manualSetLyricOn:(_Bool)arg1;
- (void)manualSetOstOn:(_Bool)arg1;
- (void)manualSetMusicOn:(_Bool)arg1;
- (_Bool)isLyricOn;
- (_Bool)isOriginSoundSelected;
- (_Bool)isMusicOn;
- (void)viewDidLoad;
- (id)initWithTabModel:(id)arg1 config:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

