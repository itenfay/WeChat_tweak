//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMImageView, MMUILabel, NSString, UIButton, UITextField, UIView;
@protocol WCPayQrcodeUsagehalfPageCellDelegate;

@interface WCPayQrcodeUsagehalfPageCell
{
    _Bool _isSelected;
    _Bool _showInputField;
    MMUILabel *_itemLabel;
    UIView *_topSeperatorView;
    UIView *_bottomSeperatorView;
    UITextField *_inputTextField;
    id <WCPayQrcodeUsagehalfPageCellDelegate> _m_delegate;
    MMImageView *_checkBox;
    UIButton *_container;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool showInputField; // @synthesize showInputField=_showInputField;
@property(nonatomic) _Bool isSelected; // @synthesize isSelected=_isSelected;
@property(retain, nonatomic) UIButton *container; // @synthesize container=_container;
@property(retain, nonatomic) MMImageView *checkBox; // @synthesize checkBox=_checkBox;
@property(nonatomic) __weak id <WCPayQrcodeUsagehalfPageCellDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
@property(retain, nonatomic) UITextField *inputTextField; // @synthesize inputTextField=_inputTextField;
@property(retain, nonatomic) UIView *bottomSeperatorView; // @synthesize bottomSeperatorView=_bottomSeperatorView;
@property(retain, nonatomic) UIView *topSeperatorView; // @synthesize topSeperatorView=_topSeperatorView;
@property(retain, nonatomic) MMUILabel *itemLabel; // @synthesize itemLabel=_itemLabel;
- (unsigned long long)accessibilityTraits;
- (void)onTapCell;
- (void)textDidChange:(id)arg1;
- (id)textFieldContent;
- (void)addBottomSeperator;
- (void)layoutSubviews;
- (id)initWithSelected:(_Bool)arg1 showInputField:(_Bool)arg2;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setFrame:(struct CGRect)arg1;
- (void)awakeFromNib;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

