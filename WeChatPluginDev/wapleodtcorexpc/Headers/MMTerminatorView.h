//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class InteractionLabel, MMTerminatorViewParams, MMUIButton, UIView;
@protocol MMTerminatorViewDelegate;

@interface MMTerminatorView
{
    MMTerminatorViewParams *_params;
    id <MMTerminatorViewDelegate> _delegate;
    UIView *_leftLineView;
    UIView *_rightLineView;
    MMUIButton *_iconImageView;
    InteractionLabel *_titleLabel;
    InteractionLabel *_subtitleLabel;
    struct CGSize _lastSize;
}

+ (double)heightForParams:(id)arg1 width:(double)arg2;
+ (double)maxContentWidthWithTotalWidth:(double)arg1;
- (void).cxx_destruct;
@property(nonatomic) struct CGSize lastSize; // @synthesize lastSize=_lastSize;
@property(retain, nonatomic) InteractionLabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) InteractionLabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) MMUIButton *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(retain, nonatomic) UIView *rightLineView; // @synthesize rightLineView=_rightLineView;
@property(retain, nonatomic) UIView *leftLineView; // @synthesize leftLineView=_leftLineView;
@property(nonatomic) __weak id <MMTerminatorViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) MMTerminatorViewParams *params; // @synthesize params=_params;
- (void)onClickSubtitleLabel;
- (void)onClickTitleLabel;
- (void)onClickIconImageView;
- (double)contentHeight;
- (void)updateSubContentSize;
- (void)layoutSubviews;
- (void)initContentView;
- (id)createLineView;
- (void)initLineView;
- (void)initView;
- (id)initWithFrame:(struct CGRect)arg1 params:(id)arg2;

@end

