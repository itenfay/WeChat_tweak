//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMUIButton, UIButton, UILabel;
@protocol MultiTalkBeforeTalkingOperateViewDelegate;

@interface MultiTalkBeforeTalkingOperateView : UIView
{
    UILabel *_m_titleLabel;
    UILabel *_m_descriptionLabel;
    UILabel *_m_memberDescLabel;
    UIButton *_m_hangupButton;
    UIButton *_m_enterCallButton;
    MMUIButton *_m_minimizeButton;
    id <MultiTalkBeforeTalkingOperateViewDelegate> _m_delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <MultiTalkBeforeTalkingOperateViewDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
@property(retain, nonatomic) MMUIButton *m_minimizeButton; // @synthesize m_minimizeButton=_m_minimizeButton;
@property(retain, nonatomic) UIButton *m_enterCallButton; // @synthesize m_enterCallButton=_m_enterCallButton;
@property(retain, nonatomic) UIButton *m_hangupButton; // @synthesize m_hangupButton=_m_hangupButton;
@property(retain, nonatomic) UILabel *m_memberDescLabel; // @synthesize m_memberDescLabel=_m_memberDescLabel;
@property(retain, nonatomic) UILabel *m_descriptionLabel; // @synthesize m_descriptionLabel=_m_descriptionLabel;
@property(retain, nonatomic) UILabel *m_titleLabel; // @synthesize m_titleLabel=_m_titleLabel;
- (void)layoutSubviews;
- (void)onMinimizeButtonClick;
- (void)onEnterButtonClick;
- (void)onHangupButtonClick;
- (void)layoutMinimizeButton;
- (void)initEnterCallButton;
- (void)initHangupButton;
- (void)updateMemberDescLabel:(unsigned long long)arg1;
- (void)initMemberDescLabel;
- (void)initDecLabel;
- (void)initTitleLabel;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)updateBeforeTalkingOtherMemberCount:(unsigned long long)arg1;
- (void)updateDelegate:(id)arg1;
- (void)updateTitle:(id)arg1;
- (void)showOperateView;
- (void)hideOperateView;
- (id)enterCallButton;
- (id)hangupButton;
- (id)memberDescLabel;
- (id)descriptionLabel;
- (id)minimizeButton;
- (id)titleLabel;

@end

