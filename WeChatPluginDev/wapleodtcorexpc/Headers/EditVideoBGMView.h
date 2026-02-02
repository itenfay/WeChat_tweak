//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class ColorGradientView, EditVideoBGMFetchFeedbackLogic, EditVideoBGMSearchView, EditVideoMusicController, MMMusicPickerScrollView, MMUIButton, NSMutableArray, NSString, UIView;
@protocol EditVideoBgmViewDelegate;

@interface EditVideoBGMView
{
    _Bool _lyricsOn;
    _Bool _musicOn;
    _Bool _defaultOriginalSoundMute;
    _Bool _isSearchMusicAfterInputEnabled;
    _Bool _isPreviewVideoMute;
    _Bool _isLastInputModeDictation;
    _Bool _isClickSearchMusic;
    unsigned int _entranceType;
    id <EditVideoBgmViewDelegate> _delegate;
    EditVideoMusicController *_musicController;
    ColorGradientView *_colorGradientView;
    long long _curMusicIndex;
    UIView *_contentView;
    UIView *_searchBarContainer;
    UIView *_responseView;
    MMMusicPickerScrollView *_musicPickerView;
    MMUIButton *_musicOnOffBtn;
    MMUIButton *_lyricsOnOffBtn;
    MMUIButton *_closeBtn;
    EditVideoBGMSearchView *_searchView;
    EditVideoBGMFetchFeedbackLogic *_fetchBgmFeedBackLogic;
    unsigned long long _musicAddBySearchCount;
    NSMutableArray *_searchMusicTagForAddedMusics;
    MMUIButton *_closeButton;
    MMUIButton *_originalSoundOnOffBtn;
    MMUIButton *_searchBtn;
    NSString *_musicLogoName;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *musicLogoName; // @synthesize musicLogoName=_musicLogoName;
@property(retain, nonatomic) MMUIButton *searchBtn; // @synthesize searchBtn=_searchBtn;
@property(retain, nonatomic) MMUIButton *originalSoundOnOffBtn; // @synthesize originalSoundOnOffBtn=_originalSoundOnOffBtn;
@property(retain, nonatomic) MMUIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) NSMutableArray *searchMusicTagForAddedMusics; // @synthesize searchMusicTagForAddedMusics=_searchMusicTagForAddedMusics;
@property(nonatomic) unsigned long long musicAddBySearchCount; // @synthesize musicAddBySearchCount=_musicAddBySearchCount;
@property(nonatomic) _Bool isClickSearchMusic; // @synthesize isClickSearchMusic=_isClickSearchMusic;
@property(retain, nonatomic) EditVideoBGMFetchFeedbackLogic *fetchBgmFeedBackLogic; // @synthesize fetchBgmFeedBackLogic=_fetchBgmFeedBackLogic;
@property(retain, nonatomic) EditVideoBGMSearchView *searchView; // @synthesize searchView=_searchView;
@property(nonatomic) _Bool isLastInputModeDictation; // @synthesize isLastInputModeDictation=_isLastInputModeDictation;
@property(retain, nonatomic) MMUIButton *closeBtn; // @synthesize closeBtn=_closeBtn;
@property(nonatomic) __weak MMUIButton *lyricsOnOffBtn; // @synthesize lyricsOnOffBtn=_lyricsOnOffBtn;
@property(retain, nonatomic) MMUIButton *musicOnOffBtn; // @synthesize musicOnOffBtn=_musicOnOffBtn;
@property(retain, nonatomic) MMMusicPickerScrollView *musicPickerView; // @synthesize musicPickerView=_musicPickerView;
@property(retain, nonatomic) UIView *responseView; // @synthesize responseView=_responseView;
@property(retain, nonatomic) UIView *searchBarContainer; // @synthesize searchBarContainer=_searchBarContainer;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) long long curMusicIndex; // @synthesize curMusicIndex=_curMusicIndex;
@property(nonatomic) _Bool isPreviewVideoMute; // @synthesize isPreviewVideoMute=_isPreviewVideoMute;
@property(nonatomic) _Bool isSearchMusicAfterInputEnabled; // @synthesize isSearchMusicAfterInputEnabled=_isSearchMusicAfterInputEnabled;
@property(nonatomic) _Bool defaultOriginalSoundMute; // @synthesize defaultOriginalSoundMute=_defaultOriginalSoundMute;
@property(retain, nonatomic) ColorGradientView *colorGradientView; // @synthesize colorGradientView=_colorGradientView;
@property(nonatomic) unsigned int entranceType; // @synthesize entranceType=_entranceType;
@property(retain, nonatomic) EditVideoMusicController *musicController; // @synthesize musicController=_musicController;
@property(nonatomic, getter=isMusicOn) _Bool musicOn; // @synthesize musicOn=_musicOn;
@property(nonatomic, getter=isLyricsOn) _Bool lyricsOn; // @synthesize lyricsOn=_lyricsOn;
@property(nonatomic) __weak id <EditVideoBgmViewDelegate> delegate; // @synthesize delegate=_delegate;
- (unsigned long long)editVideoBGMFetchFeedbackLogicGetBussnessId;
- (void)onEditVideoBGMSearchViewFinish:(id)arg1 searchKey:(id)arg2;
- (void)onEditVideoBGMSearchViewCancel;
- (void)inputModeDidChange:(id)arg1;
- (void)didBecomeActive;
- (void)willEnterForeground;
- (void)didEnterBackground;
- (void)MMMusicPickerScrollViewBtnClick;
- (void)MMMusicPickerScrollViewDidSelectMusic:(long long)arg1;
- (id)genEditVideoBGMSelectMusicInfo;
- (void)onTap:(id)arg1;
- (id)getBtnSelectedImg;
- (id)getBtnNormalImg;
- (_Bool)isFinderEntrance;
- (void)onLyricsOnOffBtnClick:(id)arg1;
- (_Bool)isOriginalSoundMute;
- (void)onOriginSoundOnOffBtnClick:(id)arg1;
- (void)onMusicOnOffBtnClick:(id)arg1;
- (void)onSearchBtnClick:(id)arg1;
- (void)changeMusicPlayState:(_Bool)arg1 enterSearch:(_Bool)arg2;
- (void)replayMusic;
- (void)playMusic;
- (void)addPanGesture;
- (void)addTapGesture;
- (id)addLyricsOnOffBtn;
- (id)addOriginSoundOnOffBtn;
- (id)addMusicOnOffBtn;
- (void)addVoiceOverResponseView;
- (void)addMusicPickerView;
- (void)realClearPlayer;
- (void)setSearchBtnBGColor:(id)arg1;
- (void)addSearchBtnWithOption:(unsigned long long)arg1;
- (void)addBackgoundViewWithOption:(unsigned long long)arg1;
- (void)addConfigButtonsWithOption:(unsigned long long)arg1;
- (void)addContentViewWithButtonOption:(unsigned long long)arg1;
- (void)addCloseButtonWithOption:(unsigned long long)arg1;
- (void)initViewWithAppearanceOptionOption:(unsigned long long)arg1;
- (void)startPickMusic;
- (void)reportFetchBgmFeedback:(_Bool)arg1;
- (void)kvReportBgmData;
- (void)returnToThisView;
- (void)dealloc;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 appearanceOption:(unsigned long long)arg2 defaultOriginalSoundMute:(_Bool)arg3 musicLogoName:(id)arg4 entranceType:(unsigned int)arg5;
- (id)initWithFrame:(struct CGRect)arg1 appearanceOption:(unsigned long long)arg2 defaultOriginalSoundMute:(_Bool)arg3 musicLogoName:(id)arg4;
- (id)initWithFrame:(struct CGRect)arg1 appearanceOption:(unsigned long long)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)closeBGMSearchView;
- (void)replayFromWithStartTime:(double)arg1;
- (void)triggerSelectCurIndexMusicAction;
- (void)onClickCloseButton:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

