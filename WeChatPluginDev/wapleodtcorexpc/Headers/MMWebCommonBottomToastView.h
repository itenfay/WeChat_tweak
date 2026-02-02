//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSString, UIButton, UIImageView, UILabel;

@interface MMWebCommonBottomToastView : UIView
{
    NSString *_toastId;
    UIButton *_contentView;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UIImageView *_iconView;
    UIImageView *_arrowView;
    UIView *_buttonMask;
    double _extraBottomMargin;
    CDUnknownBlockType _clickBlock;
    CDUnknownBlockType _hideBlock;
}

+ (void)showToastWithId:(id)arg1 title:(id)arg2 iconImage:(id)arg3 iconData:(id)arg4 subtitle:(id)arg5 needArrow:(_Bool)arg6 clickable:(_Bool)arg7 extraBottomMargin:(double)arg8 inSuperView:(id)arg9 reportBindBlock:(CDUnknownBlockType)arg10 clickBlock:(CDUnknownBlockType)arg11 hideBlock:(CDUnknownBlockType)arg12;
+ (void)showToastWithId:(id)arg1 title:(id)arg2 iconImage:(id)arg3 iconData:(id)arg4 subtitle:(id)arg5 needArrow:(_Bool)arg6 clickable:(_Bool)arg7 extraBottomMargin:(double)arg8 inSuperView:(id)arg9 clickBlock:(CDUnknownBlockType)arg10 hideBlock:(CDUnknownBlockType)arg11;
+ (void)showToastWithId:(id)arg1 title:(id)arg2 iconData:(id)arg3 subtitle:(id)arg4 needArrow:(_Bool)arg5 clickable:(_Bool)arg6 inSuperView:(id)arg7 clickBlock:(CDUnknownBlockType)arg8;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType hideBlock; // @synthesize hideBlock=_hideBlock;
@property(copy, nonatomic) CDUnknownBlockType clickBlock; // @synthesize clickBlock=_clickBlock;
@property(nonatomic) double extraBottomMargin; // @synthesize extraBottomMargin=_extraBottomMargin;
@property(retain, nonatomic) UIView *buttonMask; // @synthesize buttonMask=_buttonMask;
@property(retain, nonatomic) UIImageView *arrowView; // @synthesize arrowView=_arrowView;
@property(retain, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIButton *contentView; // @synthesize contentView=_contentView;
@property(copy, nonatomic) NSString *toastId; // @synthesize toastId=_toastId;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)onToolViewChangeToMode:(unsigned long long)arg1 Height:(double)arg2;
- (void)hideToast;
- (void)onToastClicked;
- (void)hideToastWithAnimation:(_Bool)arg1;
- (void)showToast;
- (void)removeNotification;
- (void)addNotification;
- (void)layoutSubviews;
- (void)initView;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

