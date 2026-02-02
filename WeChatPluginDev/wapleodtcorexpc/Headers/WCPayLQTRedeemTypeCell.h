//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class RedeemTypeList, UIImageView, UILabel;
@protocol WCPayLQTRedeemTypeCellDelegate;

@interface WCPayLQTRedeemTypeCell : UIView
{
    _Bool _m_selected;
    _Bool _m_disable;
    _Bool _m_highlight;
    _Bool _m_defaultSelected;
    UILabel *_m_titleLabel;
    UILabel *_m_desLabel;
    UIView *_m_lineView;
    UIImageView *_m_selectedIcon;
    RedeemTypeList *_m_data;
    id <WCPayLQTRedeemTypeCellDelegate> _m_delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <WCPayLQTRedeemTypeCellDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
@property(nonatomic) _Bool m_defaultSelected; // @synthesize m_defaultSelected=_m_defaultSelected;
@property(nonatomic) _Bool m_highlight; // @synthesize m_highlight=_m_highlight;
@property(nonatomic) _Bool m_disable; // @synthesize m_disable=_m_disable;
@property(nonatomic) _Bool m_selected; // @synthesize m_selected=_m_selected;
@property(retain, nonatomic) RedeemTypeList *m_data; // @synthesize m_data=_m_data;
@property(retain, nonatomic) UIImageView *m_selectedIcon; // @synthesize m_selectedIcon=_m_selectedIcon;
@property(retain, nonatomic) UIView *m_lineView; // @synthesize m_lineView=_m_lineView;
@property(retain, nonatomic) UILabel *m_desLabel; // @synthesize m_desLabel=_m_desLabel;
@property(retain, nonatomic) UILabel *m_titleLabel; // @synthesize m_titleLabel=_m_titleLabel;
- (void)updateRedeemTypeList:(id)arg1 selected:(_Bool)arg2 disable:(_Bool)arg3 highlight:(_Bool)arg4 defaultSelect:(_Bool)arg5;
- (void)layoutSubviews;
- (void)updateMaskView;
- (void)updateLineView;
- (void)updateSelectIcon;
- (void)updateDesLabel;
- (void)updateTitleLabel;
- (void)adjustHeight;
- (void)updateView;
- (void)onTap;
- (id)initWithFrame:(struct CGRect)arg1;
- (double)layoutForKey:(id)arg1;

@end

