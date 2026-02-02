//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class UIView;
@protocol MMMultiMenuAndMemuTableViewCellDelegate;

@interface MMMultiMenuAndMemuTableViewCell
{
    UIView *coverView;
    _Bool m_selected;
    id <MMMultiMenuAndMemuTableViewCellDelegate> _delegate;
    long long _buttonTitleLabelNumberOfLines;
    UIView *_m_bkgCardView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *m_bkgCardView; // @synthesize m_bkgCardView=_m_bkgCardView;
@property(nonatomic) long long buttonTitleLabelNumberOfLines; // @synthesize buttonTitleLabelNumberOfLines=_buttonTitleLabelNumberOfLines;
@property(nonatomic) __weak id <MMMultiMenuAndMemuTableViewCellDelegate> delegate; // @synthesize delegate=_delegate;
- (long long)getButtonTitleLabelTextAlignment;
- (long long)getButtonTitleLabelNumberOfLines;
- (void)deleteAction:(id)arg1;
- (void)onMenuTransitionToConfirmState:(long long)arg1;
- (id)getArrMemuItemForRowAtIndexPath:(id)arg1;
- (void)setMenuOptionsViewHidden:(_Bool)arg1 animated:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)setCoverView:(_Bool)arg1;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setFrame:(struct CGRect)arg1;

@end

