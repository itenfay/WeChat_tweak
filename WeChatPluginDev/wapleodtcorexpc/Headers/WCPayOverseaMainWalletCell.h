//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionViewCell.h>

@class MMWebImageView, UILabel, UIView, WCPayOverseaPayFunctionObject;

@interface WCPayOverseaMainWalletCell : UICollectionViewCell
{
    _Bool _showNew;
    _Bool _rightTopNew;
    _Bool _hasHLine;
    int _radius;
    MMWebImageView *_m_iconView;
    MMWebImageView *_m_foregroundIconView;
    UILabel *_m_nameLabel;
    WCPayOverseaPayFunctionObject *_m_data;
    UIView *_m_wLine;
    UIView *_m_hLine;
    UILabel *_m_subtitleLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *m_subtitleLabel; // @synthesize m_subtitleLabel=_m_subtitleLabel;
@property _Bool hasHLine; // @synthesize hasHLine=_hasHLine;
@property int radius; // @synthesize radius=_radius;
@property(nonatomic) _Bool rightTopNew; // @synthesize rightTopNew=_rightTopNew;
@property(nonatomic) _Bool showNew; // @synthesize showNew=_showNew;
@property(retain, nonatomic) UIView *m_hLine; // @synthesize m_hLine=_m_hLine;
@property(retain, nonatomic) UIView *m_wLine; // @synthesize m_wLine=_m_wLine;
@property(retain, nonatomic) WCPayOverseaPayFunctionObject *m_data; // @synthesize m_data=_m_data;
@property(retain, nonatomic) UILabel *m_nameLabel; // @synthesize m_nameLabel=_m_nameLabel;
@property(retain, nonatomic) MMWebImageView *m_foregroundIconView; // @synthesize m_foregroundIconView=_m_foregroundIconView;
@property(retain, nonatomic) MMWebImageView *m_iconView; // @synthesize m_iconView=_m_iconView;
- (id)contentAccessbilityLabel;
- (void)updateCellData:(id)arg1 showNew:(_Bool)arg2 radius:(int)arg3 hLine:(_Bool)arg4 rightTopNew:(_Bool)arg5;
- (void)updateCellData:(id)arg1 showNew:(_Bool)arg2 radius:(int)arg3 hLine:(_Bool)arg4;
- (void)setHighlighted:(_Bool)arg1;
- (void)updateLine;
- (void)updateSubtitleLabel;
- (void)updateNameLabel;
- (void)updateForegroundIconView;
- (void)updateIconView;
- (void)updateView;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

@end

