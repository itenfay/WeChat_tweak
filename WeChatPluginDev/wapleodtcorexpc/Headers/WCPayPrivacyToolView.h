//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class UIButton, UIImageView;
@protocol WCPayPrivacyToolViewDelegate;

@interface WCPayPrivacyToolView : UIView
{
    id <WCPayPrivacyToolViewDelegate> _m_delegate;
    UIButton *_m_notAgreeButton;
    UIButton *_m_agreeButton;
    UIImageView *_m_blurImageView;
    UIView *_m_buttonContentView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *m_buttonContentView; // @synthesize m_buttonContentView=_m_buttonContentView;
@property(retain, nonatomic) UIImageView *m_blurImageView; // @synthesize m_blurImageView=_m_blurImageView;
@property(retain, nonatomic) UIButton *m_agreeButton; // @synthesize m_agreeButton=_m_agreeButton;
@property(retain, nonatomic) UIButton *m_notAgreeButton; // @synthesize m_notAgreeButton=_m_notAgreeButton;
@property(nonatomic) __weak id <WCPayPrivacyToolViewDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
- (void)onClickNotAgreeButton;
- (void)onClickAgreeButton;
- (double)getBlurImageHeight;
- (void)adjustToolViewFrame;
- (void)updateBlurImageView;
- (void)updateAgreeButton;
- (void)updateNotAgreeButton;
- (void)updateButtonContentView;
- (void)updateFrame;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

