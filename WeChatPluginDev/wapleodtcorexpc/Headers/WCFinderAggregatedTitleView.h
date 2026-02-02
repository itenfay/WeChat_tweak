//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class RichTextView, WCFinderAuthInfoIconView;

@interface WCFinderAggregatedTitleView : UIView
{
    RichTextView *_titleView;
    WCFinderAuthInfoIconView *_authInfoIconView;
    RichTextView *_suffixTitleView;
    id _target;
    SEL _action;
}

+ (_Bool)shouldShowSuffixTitleWithTitle:(id)arg1 font:(id)arg2 width:(double)arg3;
+ (double)getTitleWidthWithTitle:(id)arg1 authInfo:(id)arg2 font:(id)arg3 width:(double)arg4;
+ (double)getTitleWidthWithTitle:(id)arg1 suffixTitle:(id)arg2 font:(id)arg3 width:(double)arg4;
- (void).cxx_destruct;
@property(nonatomic) SEL action; // @synthesize action=_action;
@property(nonatomic) __weak id target; // @synthesize target=_target;
@property(nonatomic) __weak RichTextView *suffixTitleView; // @synthesize suffixTitleView=_suffixTitleView;
@property(nonatomic) __weak WCFinderAuthInfoIconView *authInfoIconView; // @synthesize authInfoIconView=_authInfoIconView;
@property(nonatomic) __weak RichTextView *titleView; // @synthesize titleView=_titleView;
- (void)tapGestureAction;
- (void)setTarget:(id)arg1 selector:(SEL)arg2;
- (void)setTextColor:(id)arg1;
- (void)setupAuthInfo:(id)arg1;
- (double)fullWidth;
- (void)setTitle:(id)arg1 suffixTitle:(id)arg2 authInfo:(id)arg3 font:(id)arg4 width:(double)arg5 titleWidth:(double)arg6 shouldShowSuffix:(_Bool)arg7;
- (void)setUpUI;
- (void)cleanTitle;
- (id)init;

@end

