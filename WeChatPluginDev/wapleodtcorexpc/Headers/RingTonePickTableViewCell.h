//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UITableViewCell.h>

@class MMUILabel, NSString, RingToneDetail, RingToneImageView, UIButton, UIStackView, UIView, VideoRingNetProvider;
@protocol RingTonePickTableViewCellDelegate;

@interface RingTonePickTableViewCell : UITableViewCell
{
    _Bool _isPlaying;
    _Bool _forbidActionButtons;
    _Bool _highLighted;
    id <RingTonePickTableViewCellDelegate> _delegate;
    UIView *_bottomView;
    UIButton *_originVideoButton;
    unsigned long long _scene;
    RingToneImageView *_coverView;
    MMUILabel *_titleLabel;
    UIStackView *_titleStack;
    MMUILabel *_descLabel;
    UIStackView *_descStack;
    UIButton *_useButton;
    UIButton *_listButton;
    UIStackView *_actionsView;
    RingToneDetail *_ring;
    VideoRingNetProvider *_net;
}

- (void).cxx_destruct;
@property(retain, nonatomic) VideoRingNetProvider *net; // @synthesize net=_net;
@property(nonatomic) _Bool highLighted; // @synthesize highLighted=_highLighted;
@property(retain, nonatomic) RingToneDetail *ring; // @synthesize ring=_ring;
@property(retain, nonatomic) UIStackView *actionsView; // @synthesize actionsView=_actionsView;
@property(retain, nonatomic) UIButton *listButton; // @synthesize listButton=_listButton;
@property(retain, nonatomic) UIButton *useButton; // @synthesize useButton=_useButton;
@property(retain, nonatomic) UIStackView *descStack; // @synthesize descStack=_descStack;
@property(retain, nonatomic) MMUILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) UIStackView *titleStack; // @synthesize titleStack=_titleStack;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) RingToneImageView *coverView; // @synthesize coverView=_coverView;
@property(nonatomic) _Bool forbidActionButtons; // @synthesize forbidActionButtons=_forbidActionButtons;
@property(nonatomic) unsigned long long scene; // @synthesize scene=_scene;
@property(nonatomic) _Bool isPlaying; // @synthesize isPlaying=_isPlaying;
@property(retain, nonatomic) UIButton *originVideoButton; // @synthesize originVideoButton=_originVideoButton;
@property(retain, nonatomic) UIView *bottomView; // @synthesize bottomView=_bottomView;
@property(nonatomic) __weak id <RingTonePickTableViewCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)playWithID:(id)arg1;
- (void)stopAllPlay;
- (_Bool)accessibilityPerformMagicTap;
- (void)onTapToPlay;
- (void)onUseButtonTap;
- (void)addConstraints;
- (void)changeButtonImageForVoIP;
- (void)initActionButtons;
- (void)initdescLabel;
- (void)initTiltleLabel;
- (void)initCoverView;
- (void)initBottomView;
- (void)prepareForReuse;
- (void)internalUpdateContentWith:(id)arg1 higlightContent:(_Bool)arg2;
- (void)updateContentWithRingDetail:(id)arg1 higlightContent:(_Bool)arg2;
- (void)initView;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

