//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMMusicPlayerContoller, MMUIWindow, NSString, UIImageView, UILabel, WCImageView, WCTimeLineCellMusicPlayerView;

@interface WCContentItemViewTemplateClassic
{
    UILabel *_titleLabel;
    UILabel *_descLabel;
    WCImageView *_coverImage;
    MMMusicPlayerContoller *_playButton;
    UIImageView *_defaultImageView;
    _Bool _forbidJumpUrl;
    MMUIWindow *m_fullScreenWindow;
    int _currentPage;
    double _targetMargin;
    double _targetWidth;
    _Bool _bSceneFromSearch;
    _Bool _closeAdLongVideoForViewDetail;
    WCTimeLineCellMusicPlayerView *_musicView;
}

+ (double)heightForMedia:(id)arg1 showDetail:(_Bool)arg2 appID:(id)arg3;
+ (double)heightForMedia:(id)arg1 showDetail:(_Bool)arg2;
+ (_Bool)isMusicMVType:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) WCTimeLineCellMusicPlayerView *musicView; // @synthesize musicView=_musicView;
@property(nonatomic) _Bool closeAdLongVideoForViewDetail; // @synthesize closeAdLongVideoForViewDetail=_closeAdLongVideoForViewDetail;
@property(nonatomic) _Bool bSceneFromSearch; // @synthesize bSceneFromSearch=_bSceneFromSearch;
@property(nonatomic) double targetWidth; // @synthesize targetWidth=_targetWidth;
@property(nonatomic) double targetMargin; // @synthesize targetMargin=_targetMargin;
- (struct CGRect)previewingSourceRectForLocation:(struct CGPoint)arg1 inCoordinateView:(id)arg2;
- (id)viewControllerToPreviewWithFromController:(id)arg1 forLocation:(struct CGPoint)arg2 inCoordinateView:(id)arg3;
- (_Bool)canPeek;
- (void)dealloc;
- (void)setNonInteractive;
- (void)setNormalColor;
- (void)setHighlightedColor;
- (void)onClickWCImage:(id)arg1;
- (void)onClickToPlayMusic:(id)arg1 playState:(long long)arg2 clickedOnBtn:(_Bool)arg3;
- (void)onShareVideoToTimeline:(_Bool)arg1;
- (void)onShareVideoToFriend:(id)arg1;
- (void)onClickFavVideoMenu;
- (void)onClosePlayerForViewDetail:(id)arg1;
- (void)jumpToDetail:(id)arg1;
- (void)onClosePlayer;
- (_Bool)stopAtLastVideoFrameWhenPlayEnd;
- (void)jumpToMV;
- (void)jumpToViewStreamVideo;
- (void)throwUrlMessage;
- (id)getVoiceOverStrForTimeline;
- (void)onVoiceOverClick;
- (void)onLongTouch;
- (void)onShareToOpenSDK:(id)arg1;
- (void)addFavorite;
- (void)onFavoriteAdd:(id)arg1;
- (void)initViewsWithWCDataItem:(id)arg1;
- (void)layoutSubviews;
- (void)setPlayButtonHidden:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

