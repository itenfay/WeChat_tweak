//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionViewCell.h>

@class MMLiveCDNPlayerView, NSString, RichTextView, UILabel, UIView, WCFinderAuthInfoIconView, WCFinderFeedContentVM, WCFinderHeadImageView;
@protocol WCFinderFinderTopLiveCellDelegate;

@interface WCFinderFinderTopLiveCell : UICollectionViewCell
{
    id <WCFinderFinderTopLiveCellDelegate> _delegate;
    MMLiveCDNPlayerView *_playerView;
    UIView *_endMaskView;
    UILabel *_endTipsView;
    UIView *_gradientView;
    UILabel *_recommendReasonLabel;
    UIView *_recommendReasonView;
    RichTextView *_descLabel;
    UIView *_authorView;
    UIView *_avatorContainer;
    WCFinderHeadImageView *_avatorImageView;
    UILabel *_nicknameLabel;
    WCFinderAuthInfoIconView *_authInfoIconView;
    UILabel *_audienceNumLabel;
    WCFinderFeedContentVM *_contentVM;
}

+ (double)cellHeightInWidth:(double)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderFeedContentVM *contentVM; // @synthesize contentVM=_contentVM;
@property(retain, nonatomic) UILabel *audienceNumLabel; // @synthesize audienceNumLabel=_audienceNumLabel;
@property(retain, nonatomic) WCFinderAuthInfoIconView *authInfoIconView; // @synthesize authInfoIconView=_authInfoIconView;
@property(retain, nonatomic) UILabel *nicknameLabel; // @synthesize nicknameLabel=_nicknameLabel;
@property(retain, nonatomic) WCFinderHeadImageView *avatorImageView; // @synthesize avatorImageView=_avatorImageView;
@property(retain, nonatomic) UIView *avatorContainer; // @synthesize avatorContainer=_avatorContainer;
@property(retain, nonatomic) UIView *authorView; // @synthesize authorView=_authorView;
@property(retain, nonatomic) RichTextView *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) UIView *recommendReasonView; // @synthesize recommendReasonView=_recommendReasonView;
@property(retain, nonatomic) UILabel *recommendReasonLabel; // @synthesize recommendReasonLabel=_recommendReasonLabel;
@property(retain, nonatomic) UIView *gradientView; // @synthesize gradientView=_gradientView;
@property(retain, nonatomic) UILabel *endTipsView; // @synthesize endTipsView=_endTipsView;
@property(retain, nonatomic) UIView *endMaskView; // @synthesize endMaskView=_endMaskView;
@property(retain, nonatomic) MMLiveCDNPlayerView *playerView; // @synthesize playerView=_playerView;
@property(nonatomic) __weak id <WCFinderFinderTopLiveCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onPlayEnd;
- (void)onPlayDisconnect;
- (void)onPlayProgress:(double)arg1;
- (void)onPlayBegin;
- (void)onFeedLiveCoverInfoUpdate:(id)arg1;
- (void)onFeedLiveOnlineCountChange:(long long)arg1 participantWording:(id)arg2;
- (void)removeBlurEffectIfNeed;
- (void)addBlurEffectIfNeed;
- (id)getAudienceNumWordingWithDataItem:(id)arg1;
- (void)onAuthorViewDidClick;
- (void)layoutUI;
- (void)stop;
- (void)playWithSound:(_Bool)arg1;
- (void)play;
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

