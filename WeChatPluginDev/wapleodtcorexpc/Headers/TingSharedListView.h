//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMListenCategoryItem, MMUILabel, TingCategoryCoverView;

@interface TingSharedListView : UIView
{
    unsigned long long _type;
    UIView *_contentView;
    TingCategoryCoverView *_coverView;
    MMUILabel *_titleLabel;
    MMUILabel *_subtitleLabel;
    MMListenCategoryItem *_categoryItem;
    double _textMarginTop;
}

+ (double)cardWidthForMoment;
+ (double)cardWidthForChat;
- (void).cxx_destruct;
@property(nonatomic) double textMarginTop; // @synthesize textMarginTop=_textMarginTop;
@property(retain, nonatomic) MMListenCategoryItem *categoryItem; // @synthesize categoryItem=_categoryItem;
@property(retain, nonatomic) MMUILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) TingCategoryCoverView *coverView; // @synthesize coverView=_coverView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
- (void)setHighlighted:(_Bool)arg1;
- (void)updateDisplayWith:(id)arg1;
- (void)layoutSubviews;
- (void)sizeToFit;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)configureLayout;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)subtitleFont;
- (id)titleFont;
- (int)fontModule;
- (double)cardWidth;

@end

