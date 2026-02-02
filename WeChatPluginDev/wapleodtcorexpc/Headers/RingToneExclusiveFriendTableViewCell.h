//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUILabel, NSString, RingTone, RingToneDetail, RingToneToolView, UIImageView, UIView, VideoRingNetProvider;
@protocol RingToneExclusiveFriendTableViewCellDelegate;

@interface RingToneExclusiveFriendTableViewCell
{
    _Bool _expanded;
    _Bool _isPlaying;
    id <RingToneExclusiveFriendTableViewCellDelegate> _delegate;
    RingTone *_ring;
    RingToneDetail *_ringDetail;
    UIImageView *_headImageView;
    MMUILabel *_nameLabel;
    MMUILabel *_titleLabel;
    UIView *_lineView;
    RingToneToolView *_toolView;
    VideoRingNetProvider *_net;
    UIView *_bottomView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *bottomView; // @synthesize bottomView=_bottomView;
@property(retain, nonatomic) VideoRingNetProvider *net; // @synthesize net=_net;
@property(retain, nonatomic) RingToneToolView *toolView; // @synthesize toolView=_toolView;
@property(retain, nonatomic) UIView *lineView; // @synthesize lineView=_lineView;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) MMUILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) UIImageView *headImageView; // @synthesize headImageView=_headImageView;
@property(retain, nonatomic) RingToneDetail *ringDetail; // @synthesize ringDetail=_ringDetail;
@property(nonatomic) _Bool isPlaying; // @synthesize isPlaying=_isPlaying;
@property(retain, nonatomic) RingTone *ring; // @synthesize ring=_ring;
@property(nonatomic) _Bool expanded; // @synthesize expanded=_expanded;
@property(nonatomic) __weak id <RingToneExclusiveFriendTableViewCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)playWithID:(id)arg1;
- (void)stopAllPlay;
- (void)onToolViewMoreButtonTap;
- (void)onToolViewPlayButtonTap:(_Bool)arg1;
- (void)initiativeTriggerPlay;
- (void)updateContentWithRing:(id)arg1;
- (void)initView;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

