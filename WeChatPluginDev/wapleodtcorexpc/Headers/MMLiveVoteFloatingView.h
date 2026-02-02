//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMFinderLiveTaskId, MMUIImageView, MMUILabel, NSString, UIView;

@interface MMLiveVoteFloatingView
{
    _Bool _disabledDisplay;
    _Bool _layoutSubviewsAtCenter;
    _Bool _hasFinished;
    _Bool _isStaticStyle;
    NSString *_delayHideVotingId;
    MMFinderLiveTaskId *_taskId;
    MMUIImageView *_voteFloatingImage;
    MMUILabel *_tipLabel;
    UIView *_staticBGView;
    double _tipLabelStaticHeight;
}

- (void).cxx_destruct;
@property(nonatomic) double tipLabelStaticHeight; // @synthesize tipLabelStaticHeight=_tipLabelStaticHeight;
@property(retain, nonatomic) UIView *staticBGView; // @synthesize staticBGView=_staticBGView;
@property(nonatomic) _Bool isStaticStyle; // @synthesize isStaticStyle=_isStaticStyle;
@property(nonatomic) _Bool hasFinished; // @synthesize hasFinished=_hasFinished;
@property(retain, nonatomic) MMUILabel *tipLabel; // @synthesize tipLabel=_tipLabel;
@property(retain, nonatomic) MMUIImageView *voteFloatingImage; // @synthesize voteFloatingImage=_voteFloatingImage;
@property(retain, nonatomic) MMFinderLiveTaskId *taskId; // @synthesize taskId=_taskId;
@property(retain, nonatomic) NSString *delayHideVotingId; // @synthesize delayHideVotingId=_delayHideVotingId;
@property(nonatomic) _Bool layoutSubviewsAtCenter; // @synthesize layoutSubviewsAtCenter=_layoutSubviewsAtCenter;
@property(nonatomic) _Bool disabledDisplay; // @synthesize disabledDisplay=_disabledDisplay;
- (void)animateToNormalStyle;
- (void)animateToStaticStyleWithCompletion:(CDUnknownBlockType)arg1;
- (void)layoutSubviews;
- (void)setupViews;
- (void)setFinished:(_Bool)arg1;
- (void)startDisplayAnimate;
- (void)setHidden:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1 taskId:(id)arg2;

@end

