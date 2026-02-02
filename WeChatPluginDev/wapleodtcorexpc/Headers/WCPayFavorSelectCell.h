//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UITableViewCell.h>

@class NSString, UIButton, UILabel, UIView;
@protocol WCPayFavorSelectCellDelegate;

@interface WCPayFavorSelectCell : UITableViewCell
{
    _Bool _m_selected;
    _Bool _m_canSelect;
    _Bool _m_isFirstCell;
    _Bool _m_isLastCell;
    id <WCPayFavorSelectCellDelegate> _m_delegate;
    NSString *_m_title;
    NSString *_m_desc;
    long long _m_index;
    UILabel *_m_titleLabel;
    UILabel *_m_descLabel;
    UIButton *_m_selectedButton;
    UIView *_m_maskView;
    UIView *_m_lineView;
    UIView *_m_firstLineView;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool m_isLastCell; // @synthesize m_isLastCell=_m_isLastCell;
@property(nonatomic) _Bool m_isFirstCell; // @synthesize m_isFirstCell=_m_isFirstCell;
@property(retain, nonatomic) UIView *m_firstLineView; // @synthesize m_firstLineView=_m_firstLineView;
@property(retain, nonatomic) UIView *m_lineView; // @synthesize m_lineView=_m_lineView;
@property(retain, nonatomic) UIView *m_maskView; // @synthesize m_maskView=_m_maskView;
@property(retain, nonatomic) UIButton *m_selectedButton; // @synthesize m_selectedButton=_m_selectedButton;
@property(retain, nonatomic) UILabel *m_descLabel; // @synthesize m_descLabel=_m_descLabel;
@property(retain, nonatomic) UILabel *m_titleLabel; // @synthesize m_titleLabel=_m_titleLabel;
@property(nonatomic) long long m_index; // @synthesize m_index=_m_index;
@property(nonatomic) _Bool m_canSelect; // @synthesize m_canSelect=_m_canSelect;
@property(nonatomic) _Bool m_selected; // @synthesize m_selected=_m_selected;
@property(retain, nonatomic) NSString *m_desc; // @synthesize m_desc=_m_desc;
@property(retain, nonatomic) NSString *m_title; // @synthesize m_title=_m_title;
@property(nonatomic) __weak id <WCPayFavorSelectCellDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
- (void)onClickSelectButton;
- (void)updateFirstCellLineView;
- (void)updateLastCellLineView;
- (void)updateLineView;
- (_Bool)isLastCell;
- (_Bool)isFirstCell;
- (void)setLastCell:(_Bool)arg1;
- (void)setFirstCell:(_Bool)arg1;
- (void)updateMaskView;
- (void)updateSelected;
- (void)updateDesc;
- (void)updateTitle;
- (void)updateAccessibilityLabel;
- (void)updateView;
- (void)layoutSubviews;
- (void)updateTitle:(id)arg1 desc:(id)arg2 selected:(_Bool)arg3 canSelect:(_Bool)arg4 index:(long long)arg5;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)awakeFromNib;

@end

