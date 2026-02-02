//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UITableViewCell.h>

@class FinderPaidCollectionInfo, MMWebImageView, RichTextView, UILabel, UIView, WCFinderAuthorContactView;

@interface WCFinderPaidCollectionCell : UITableViewCell
{
    _Bool _isLastCell;
    MMWebImageView *_coverImgView;
    RichTextView *_titleView;
    UILabel *_descLabel;
    WCFinderAuthorContactView *_contactView;
    UIView *_seperatorLine;
    FinderPaidCollectionInfo *_paidCollection;
    struct CGSize _layoutSize;
}

+ (double)cellHeightWithPaidCollection:(id)arg1 width:(double)arg2;
+ (double)titleMaxWidthWithWidth:(double)arg1;
- (void).cxx_destruct;
@property(nonatomic) _Bool isLastCell; // @synthesize isLastCell=_isLastCell;
@property(retain, nonatomic) FinderPaidCollectionInfo *paidCollection; // @synthesize paidCollection=_paidCollection;
@property(nonatomic) struct CGSize layoutSize; // @synthesize layoutSize=_layoutSize;
@property(retain, nonatomic) UIView *seperatorLine; // @synthesize seperatorLine=_seperatorLine;
@property(retain, nonatomic) WCFinderAuthorContactView *contactView; // @synthesize contactView=_contactView;
@property(retain, nonatomic) UILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) RichTextView *titleView; // @synthesize titleView=_titleView;
@property(retain, nonatomic) MMWebImageView *coverImgView; // @synthesize coverImgView=_coverImgView;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)updateWithPaidCollection:(id)arg1 isLastCell:(_Bool)arg2;
- (void)setupUI;
- (void)prepareForReuse;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)awakeFromNib;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

