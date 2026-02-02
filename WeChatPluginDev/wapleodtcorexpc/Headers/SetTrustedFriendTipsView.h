//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class UIButton, UIView;
@protocol SetTrustedFriendTipsViewDelegate;

@interface SetTrustedFriendTipsView
{
    id <SetTrustedFriendTipsViewDelegate> _m_delegate;
    UIView *_tipsView;
    UIButton *_closeButton;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) UIView *tipsView; // @synthesize tipsView=_tipsView;
@property(nonatomic) __weak id <SetTrustedFriendTipsViewDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
- (void)layoutTipsView;
- (void)dismissSystemMsg;
- (void)layoutSubviews;
- (id)initWithDelegate:(id)arg1;

@end

