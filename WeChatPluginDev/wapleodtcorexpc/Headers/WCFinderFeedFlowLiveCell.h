//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionViewCell.h>

@class MMLiveCDNPlayerView, NSString, UILabel, UIView, WCFinderFeedContentVM, WCFinderFeedStaticCoverContactView, WCFinderLiveNowView;
@protocol WCFinderFeedFlowLiveCellDelegate;

@interface WCFinderFeedFlowLiveCell : UICollectionViewCell
{
    _Bool _disableAutoPlay;
    id <WCFinderFeedFlowLiveCellDelegate> _delegate;
    MMLiveCDNPlayerView *_playerView;
    UIView *_endMaskView;
    UIView *_endTipsView;
    UIView *_gradientView;
    UILabel *_recommendReasonLabel;
    UIView *_recommendReasonView;
    UILabel *_audienceNumLabel;
    WCFinderFeedContentVM *_contentVM;
    WCFinderFeedStaticCoverContactView *_contactView;
    WCFinderLiveNowView *_liveNowView;
}

+ (double)cellHeightInWidth:(double)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderLiveNowView *liveNowView; // @synthesize liveNowView=_liveNowView;
@property(retain, nonatomic) WCFinderFeedStaticCoverContactView *contactView; // @synthesize contactView=_contactView;
@property(retain, nonatomic) WCFinderFeedContentVM *contentVM; // @synthesize contentVM=_contentVM;
@property(retain, nonatomic) UILabel *audienceNumLabel; // @synthesize audienceNumLabel=_audienceNumLabel;
@property(retain, nonatomic) UIView *recommendReasonView; // @synthesize recommendReasonView=_recommendReasonView;
@property(retain, nonatomic) UILabel *recommendReasonLabel; // @synthesize recommendReasonLabel=_recommendReasonLabel;
@property(retain, nonatomic) UIView *gradientView; // @synthesize gradientView=_gradientView;
@property(retain, nonatomic) UIView *endTipsView; // @synthesize endTipsView=_endTipsView;
@property(retain, nonatomic) UIView *endMaskView; // @synthesize endMaskView=_endMaskView;
@property(retain, nonatomic) MMLiveCDNPlayerView *playerView; // @synthesize playerView=_playerView;
@property(nonatomic) _Bool disableAutoPlay; // @synthesize disableAutoPlay=_disableAutoPlay;
@property(nonatomic) __weak id <WCFinderFeedFlowLiveCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onPlayEnd;
- (void)onPlayDisconnect;
- (void)onPlayProgress:(double)arg1;
- (void)onPlayBegin;
- (void)onFeedLiveCoverInfoUpdate:(id)arg1;
- (void)onFeedLiveStatusChanged:(id)arg1 state:(unsigned long long)arg2;
- (void)onFeedLiveOnlineCountChange:(long long)arg1 participantWording:(id)arg2;
- (id)nickNameAccessibility;
- (void)updatePlayAccessibilityWithLiveState:(unsigned long long)arg1;
- (void)removeBlurEffectIfNeed;
- (void)addBlurEffectIfNeed;
- (id)getAudienceNumWordingWithDataItem:(id)arg1;
- (void)onAuthorViewDidClick;
- (void)willMoveToWindow:(id)arg1;
- (void)layoutUI;
- (_Bool)shouldPreventAutoPlay;
- (void)stop;
- (void)pause;
- (void)playWithSound:(_Bool)arg1;
- (_Bool)isPlaying;
- (void)play;
- (unsigned long long)autoPlayCellType;
- (void)updateWithContentVM:(id)arg1;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

