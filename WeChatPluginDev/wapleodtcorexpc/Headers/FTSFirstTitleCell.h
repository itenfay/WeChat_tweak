//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUIButton, UILabel, UIView;
@protocol FTSFirstTitleCellDelegate;

@interface FTSFirstTitleCell
{
    _Bool _showRightButton;
    id <FTSFirstTitleCellDelegate> _m_delegate;
    UIView *_topLine;
    UILabel *_titleLabel;
    MMUIButton *_rightButton;
    UIView *_bottomLine;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *bottomLine; // @synthesize bottomLine=_bottomLine;
@property(retain, nonatomic) MMUIButton *rightButton; // @synthesize rightButton=_rightButton;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *topLine; // @synthesize topLine=_topLine;
@property(nonatomic) _Bool showRightButton; // @synthesize showRightButton=_showRightButton;
@property(nonatomic) __weak id <FTSFirstTitleCellDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
- (id)getTopLine;
- (void)onRightButtonTapped;
- (void)layoutSubviews;
- (void)updateTitle:(id)arg1 rightButtonTitle:(id)arg2;
- (void)updateTitle:(id)arg1;
- (void)initView;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

