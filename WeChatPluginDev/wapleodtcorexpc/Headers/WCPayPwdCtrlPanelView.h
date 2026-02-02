//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSString, RichTextView, UIImageView, UILabel, WCPayTenpayPasswordCtrlItem;

@interface WCPayPwdCtrlPanelView : UIView
{
    UIImageView *m_footerTipImageView;
    UILabel *m_footerTip;
    UIView *m_footerView;
    WCPayTenpayPasswordCtrlItem *m_textField;
    RichTextView *tip;
    UILabel *m_titleLabel;
    UILabel *m_tipsLabel;
    double _contentViewY;
    NSString *_m_nsTitle;
    NSString *_m_nsTips;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *m_nsTips; // @synthesize m_nsTips=_m_nsTips;
@property(retain, nonatomic) NSString *m_nsTitle; // @synthesize m_nsTitle=_m_nsTitle;
@property(nonatomic) double contentViewY; // @synthesize contentViewY=_contentViewY;
@property(retain, nonatomic) WCPayTenpayPasswordCtrlItem *m_textField; // @synthesize m_textField;
- (void)keyboardDidHide:(id)arg1;
- (void)keyboardDidShow:(id)arg1;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)dealloc;
- (void)setFooterView:(id)arg1;
- (void)setError:(id)arg1;
- (void)layoutSubviews;
- (id)initWithTitle:(id)arg1 tips:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

