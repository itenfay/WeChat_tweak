//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUILabel, UIButton, UIImageView;
@protocol MMEdgeTipsViewDelegate;

@interface MMEdgeTipsView
{
    int _position;
    id <MMEdgeTipsViewDelegate> _delegate;
    UIButton *_bgButton;
    UIImageView *_iconView;
    MMUILabel *_tipsLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMUILabel *tipsLabel; // @synthesize tipsLabel=_tipsLabel;
@property(retain, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) UIButton *bgButton; // @synthesize bgButton=_bgButton;
@property(readonly, nonatomic) int position; // @synthesize position=_position;
@property(nonatomic) __weak id <MMEdgeTipsViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)setContentNormal;
- (void)setContentHighlighted;
- (void)onClickBtn;
- (void)hideAnimate:(_Bool)arg1 parentView:(id)arg2 finishBlock:(CDUnknownBlockType)arg3;
- (void)showAnimate:(_Bool)arg1 parentView:(id)arg2 finishBlock:(CDUnknownBlockType)arg3;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)initTipsLabelWithConfig:(struct MMEdgeTipsViewConfig *)arg1;
- (void)initIconWithConfig:(struct MMEdgeTipsViewConfig *)arg1;
- (void)initButtonWithConfig:(struct MMEdgeTipsViewConfig *)arg1;
- (id)initWithConfig:(struct MMEdgeTipsViewConfig)arg1;
- (id)initWithTitle:(id)arg1 image:(id)arg2;

@end

