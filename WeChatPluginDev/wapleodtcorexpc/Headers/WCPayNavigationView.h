//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSString, UIFont, UILabel;

@interface WCPayNavigationView : UIView
{
    _Bool m_showing;
    double m_navigationOffsetY;
    unsigned long long _m_pushedDirection;
    UIView *_my_cancelButton;
    UILabel *_my_titleLabel;
    UILabel *_my_subtitleLabel;
    NSString *_my_title;
    NSString *_my_subtitle;
    UIFont *_titleFont;
}

+ (void)baseView:(id)arg1 presentView:(id)arg2;
+ (void)baseView:(id)arg1 pushView:(id)arg2;
+ (void)baseView:(id)arg1 popView:(id)arg2 animated:(_Bool)arg3 direction:(unsigned long long)arg4 completeHandler:(CDUnknownBlockType)arg5;
+ (void)baseView:(id)arg1 pushView:(id)arg2 animated:(_Bool)arg3 direction:(unsigned long long)arg4 completeHandler:(CDUnknownBlockType)arg5;
- (void).cxx_destruct;
@property(retain) UIFont *titleFont; // @synthesize titleFont=_titleFont;
@property(retain, nonatomic) NSString *my_subtitle; // @synthesize my_subtitle=_my_subtitle;
@property(retain, nonatomic) NSString *my_title; // @synthesize my_title=_my_title;
@property(retain, nonatomic) UILabel *my_subtitleLabel; // @synthesize my_subtitleLabel=_my_subtitleLabel;
@property(retain, nonatomic) UILabel *my_titleLabel; // @synthesize my_titleLabel=_my_titleLabel;
@property(retain, nonatomic) UIView *my_cancelButton; // @synthesize my_cancelButton=_my_cancelButton;
@property(nonatomic) unsigned long long m_pushedDirection; // @synthesize m_pushedDirection=_m_pushedDirection;
@property(readonly, nonatomic) double m_navigationOffsetY; // @synthesize m_navigationOffsetY;
@property(readonly, nonatomic) _Bool m_showing; // @synthesize m_showing;
- (void)popToRootWithCompleteHandler:(CDUnknownBlockType)arg1;
- (void)popToRoot;
- (void)popAllWithCompleteHandler:(CDUnknownBlockType)arg1;
- (void)popAll;
- (void)dismissMyselfWithCompleteHandler:(CDUnknownBlockType)arg1;
- (void)dismissMyself;
- (void)popView:(id)arg1 CompleteHandler:(CDUnknownBlockType)arg2;
- (void)popView:(id)arg1;
- (void)pushView:(id)arg1 completeHandler:(CDUnknownBlockType)arg2;
- (void)pushView:(id)arg1;
- (void)presentView:(id)arg1 completeHandler:(CDUnknownBlockType)arg2;
- (void)presentView:(id)arg1;
- (void)popView:(id)arg1 animated:(_Bool)arg2 direction:(unsigned long long)arg3 completeHandler:(CDUnknownBlockType)arg4;
- (void)pushView:(id)arg1 animated:(_Bool)arg2 direction:(unsigned long long)arg3 completeHandler:(CDUnknownBlockType)arg4;
- (void)adjustTitleLabel;
- (void)updateSubtitleLabel;
- (void)updateTitleLabel;
- (id)cancelButtonViewWithPushDirection:(unsigned long long)arg1;
- (void)updateCancelButton;
- (void)updateSubView;
- (void)layoutSubviews;
- (void)viewDidAppear;
- (void)viewWillAppear;
- (void)viewDidDisappear;
- (void)viewWillDisappear;
- (void)updateSubtitle:(id)arg1;
- (void)updateTitleFont:(id)arg1;
- (void)updateTitle:(id)arg1;
- (void)updateShowing:(_Bool)arg1;
- (id)init;

@end

