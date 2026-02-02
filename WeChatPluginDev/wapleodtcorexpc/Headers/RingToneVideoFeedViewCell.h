//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionViewCell.h>

@class CAGradientLayer, MMUIButton, MMUILabel, NSString, RingToneDetail, RingToneFinderPlayerView, UIImageView, UIView, WCFinderFeedContentVM;
@protocol RingToneVideoFeedViewCellDelegate;

@interface RingToneVideoFeedViewCell : UICollectionViewCell
{
    _Bool _isCurrentPlaying;
    RingToneDetail *_ring;
    id <RingToneVideoFeedViewCellDelegate> _delegate;
    WCFinderFeedContentVM *_feedContentVM;
    RingToneFinderPlayerView *_finderPlayerView;
    MMUIButton *_doneBtn;
    UIImageView *_ringIconView;
    UIImageView *_musicDancingView;
    MMUILabel *_descLabel;
    MMUILabel *_titleLabel;
    MMUILabel *_settingsLabel;
    unsigned long long _useFriendNum;
    unsigned long long _settingNum;
    CAGradientLayer *_gradientLayer;
    UIView *_blurView;
    MMUIButton *_tingBtn;
}

+ (double)cellHeightWith:(id)arg1 width:(double)arg2 ring:(id)arg3;
+ (id)cellID;
- (void).cxx_destruct;
@property(retain, nonatomic) MMUIButton *tingBtn; // @synthesize tingBtn=_tingBtn;
@property(retain, nonatomic) UIView *blurView; // @synthesize blurView=_blurView;
@property(retain, nonatomic) CAGradientLayer *gradientLayer; // @synthesize gradientLayer=_gradientLayer;
@property(nonatomic) unsigned long long settingNum; // @synthesize settingNum=_settingNum;
@property(nonatomic) unsigned long long useFriendNum; // @synthesize useFriendNum=_useFriendNum;
@property(retain, nonatomic) MMUILabel *settingsLabel; // @synthesize settingsLabel=_settingsLabel;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) MMUILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) UIImageView *musicDancingView; // @synthesize musicDancingView=_musicDancingView;
@property(retain, nonatomic) UIImageView *ringIconView; // @synthesize ringIconView=_ringIconView;
@property(retain, nonatomic) MMUIButton *doneBtn; // @synthesize doneBtn=_doneBtn;
@property(retain, nonatomic) RingToneFinderPlayerView *finderPlayerView; // @synthesize finderPlayerView=_finderPlayerView;
@property(retain, nonatomic) WCFinderFeedContentVM *feedContentVM; // @synthesize feedContentVM=_feedContentVM;
@property(nonatomic) _Bool isCurrentPlaying; // @synthesize isCurrentPlaying=_isCurrentPlaying;
@property(nonatomic) __weak id <RingToneVideoFeedViewCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) RingToneDetail *ring; // @synthesize ring=_ring;
- (void)playWithID:(id)arg1;
- (void)stopAllPlay;
- (void)onWCAudioSessionOldDeviceUnavailable;
- (void)onRingToneSheetDisappear;
- (void)onJumpToTingInfoPage:(id)arg1;
- (void)onSelectRing:(id)arg1;
- (double)getCurrentPlayTime;
- (void)setDancingViewOn:(_Bool)arg1;
- (void)stopPlaySound:(_Bool)arg1;
- (void)playWithSound:(_Bool)arg1;
- (void)_triggerAntiAddictCheckLogic;
- (void)setBlurAlpha:(double)arg1;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)changeDataSource:(id)arg1 currentIndex:(long long)arg2 useThumb:(id)arg3 startPlayTime:(double)arg4;
- (void)updateContentWithRingDetail:(id)arg1 vm:(id)arg2 playFirstRing:(_Bool)arg3 friendName:(id)arg4;
- (void)initSubView;
- (void)registerExtForVC:(unsigned long long)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

