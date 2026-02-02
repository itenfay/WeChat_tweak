//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUILabel, NSString, RingToneDetail, RingToneImageView, UIView;
@protocol RingToneHistoryViewCellDelegate;

@interface RingToneHistoryViewCell
{
    _Bool _isPlaying;
    RingToneDetail *_ring;
    id <RingToneHistoryViewCellDelegate> _delegate;
    long long _index;
    RingToneImageView *_coverView;
    UIView *_bottomView;
    MMUILabel *_titleLabel;
    MMUILabel *_descLabel;
    UIView *_rightContentStackView;
    UIView *_seperatorLine;
    UIView *_detailLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *detailLabel; // @synthesize detailLabel=_detailLabel;
@property(retain, nonatomic) UIView *seperatorLine; // @synthesize seperatorLine=_seperatorLine;
@property(retain, nonatomic) UIView *rightContentStackView; // @synthesize rightContentStackView=_rightContentStackView;
@property(retain, nonatomic) MMUILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *bottomView; // @synthesize bottomView=_bottomView;
@property(retain, nonatomic) RingToneImageView *coverView; // @synthesize coverView=_coverView;
@property(nonatomic) long long index; // @synthesize index=_index;
@property(nonatomic) __weak id <RingToneHistoryViewCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool isPlaying; // @synthesize isPlaying=_isPlaying;
@property(retain, nonatomic) RingToneDetail *ring; // @synthesize ring=_ring;
- (void)playWithID:(id)arg1;
- (void)stopAllPlay;
- (void)initiativeTriggerPlay;
- (void)prepareForReuse;
- (void)jumpToPlayerPage;
- (void)layoutSubviews;
- (void)updateContentWithRingDetail:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

