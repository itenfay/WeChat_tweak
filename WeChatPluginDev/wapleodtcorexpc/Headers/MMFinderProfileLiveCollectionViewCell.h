//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionViewCell.h>

@class CAGradientLayer, MMLiveCDNPlayerView, MMUIImageView, NSString, RichTextView, UILabel, UIView, WCFinderDataItem;
@protocol MMFinderProfileLiveCollectionViewCellDelegate;

@interface MMFinderProfileLiveCollectionViewCell : UICollectionViewCell
{
    _Bool _isReplayVedio;
    id <MMFinderProfileLiveCollectionViewCellDelegate> _delegate;
    WCFinderDataItem *_dataItem;
    MMLiveCDNPlayerView *_playerView;
    UIView *_endMaskView;
    UILabel *_endTipsView;
    UIView *_gradientView;
    CAGradientLayer *_gradientLayer;
    RichTextView *_descLabel;
    UILabel *_digestLabel;
    UILabel *_dateLabel;
    MMUIImageView *_digestIcon;
    UIView *_separaLine;
    MMUIImageView *_privateIcon;
}

+ (unsigned long long)getDescStyleWithDataItem:(id)arg1;
+ (_Bool)needShowPaymentInfoWithDataItem:(id)arg1;
+ (_Bool)isAudiencePurchasedWithDataItem:(id)arg1;
+ (_Bool)isOwnerWithDataItem:(id)arg1;
+ (double)cellHeightInWidth:(double)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) MMUIImageView *privateIcon; // @synthesize privateIcon=_privateIcon;
@property(retain, nonatomic) UIView *separaLine; // @synthesize separaLine=_separaLine;
@property(retain, nonatomic) MMUIImageView *digestIcon; // @synthesize digestIcon=_digestIcon;
@property(retain, nonatomic) UILabel *dateLabel; // @synthesize dateLabel=_dateLabel;
@property(retain, nonatomic) UILabel *digestLabel; // @synthesize digestLabel=_digestLabel;
@property(retain, nonatomic) RichTextView *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) CAGradientLayer *gradientLayer; // @synthesize gradientLayer=_gradientLayer;
@property(retain, nonatomic) UIView *gradientView; // @synthesize gradientView=_gradientView;
@property(retain, nonatomic) UILabel *endTipsView; // @synthesize endTipsView=_endTipsView;
@property(retain, nonatomic) UIView *endMaskView; // @synthesize endMaskView=_endMaskView;
@property(retain, nonatomic) MMLiveCDNPlayerView *playerView; // @synthesize playerView=_playerView;
@property(retain, nonatomic) WCFinderDataItem *dataItem; // @synthesize dataItem=_dataItem;
@property(nonatomic) _Bool isReplayVedio; // @synthesize isReplayVedio=_isReplayVedio;
@property(nonatomic) __weak id <MMFinderProfileLiveCollectionViewCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onPlayMuteByNotifyOuter:(_Bool)arg1;
- (void)onPlayEnd;
- (void)onPlayDisconnect;
- (void)onPlayProgress:(double)arg1;
- (void)onPlayBegin;
- (CDUnknownBlockType)iconGeneratorWithName:(id)arg1;
- (_Bool)needShowPaymentInfo;
- (void)hideReplayDetail;
- (unsigned long long)watchOrPurchaseCount;
- (struct CGSize)getIconSize;
- (void)updateReplayDesc;
- (id)watchOrPurchaseUserCountText:(unsigned long long)arg1;
- (_Bool)checkPurchaseUserCount;
- (void)removeBlurEffectIfNeed;
- (void)addBlurEffectIfNeed;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)setAccessibilityInfo:(id)arg1;
- (void)setMute:(_Bool)arg1;
- (void)stop;
- (void)playWithSound:(_Bool)arg1;
- (void)updateWithDataItem:(id)arg1 isReplayVedio:(_Bool)arg2;
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

