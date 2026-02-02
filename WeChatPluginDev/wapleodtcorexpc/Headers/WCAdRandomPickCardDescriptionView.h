//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, UILabel, WCAdRandomPickCardInfo, WCAdURLImageView;
@protocol WCAdRandomPickCardDescriptionViewDelegate;

@interface WCAdRandomPickCardDescriptionView
{
    WCAdRandomPickCardInfo *_randomPickCardInfo;
    id <WCAdRandomPickCardDescriptionViewDelegate> _delegate;
    long long _viewStatus;
    WCAdURLImageView *_titleIconView;
    UILabel *_titleLabel;
    WCAdURLImageView *_introduceTitleIconView;
    UILabel *_introduceTitleLabel;
    UILabel *_descLabel;
    UILabel *_doneTitleLabel;
}

+ (double)calcViewHeightForPickCardInfo:(id)arg1 maxWidth:(double)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *doneTitleLabel; // @synthesize doneTitleLabel=_doneTitleLabel;
@property(retain, nonatomic) UILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) UILabel *introduceTitleLabel; // @synthesize introduceTitleLabel=_introduceTitleLabel;
@property(retain, nonatomic) WCAdURLImageView *introduceTitleIconView; // @synthesize introduceTitleIconView=_introduceTitleIconView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) WCAdURLImageView *titleIconView; // @synthesize titleIconView=_titleIconView;
@property(nonatomic) long long viewStatus; // @synthesize viewStatus=_viewStatus;
@property(nonatomic) __weak id <WCAdRandomPickCardDescriptionViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) WCAdRandomPickCardInfo *randomPickCardInfo; // @synthesize randomPickCardInfo=_randomPickCardInfo;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)removeAllLayersAnimations;
- (id)generateSimpleOpacityAnimationFrom:(double)arg1 mid:(double)arg2 to:(double)arg3 duration:(double)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (void)updateViewWithStatus:(long long)arg1;
- (void)updateViewStateForAnimation;
- (void)resetDescriptionView;
- (id)generateSimpleLabelWithFont:(id)arg1 textColor:(id)arg2 text:(id)arg3;
- (void)layoutSubviews;
- (void)generateSubviews;
- (id)initWithFrame:(struct CGRect)arg1 randomPickCardInfo:(id)arg2 delegate:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

