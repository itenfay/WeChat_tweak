//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class FinderPaidCollectionInfo, MMUIButton, MMWebImageView, NSString, RichTextView, UILabel;

@interface WCFinderProfilePaidCollectionCellContentView : UIView
{
    MMWebImageView *_coverImgView;
    RichTextView *_titleView;
    UILabel *_descLabel;
    MMUIButton *_priceLabel;
    FinderPaidCollectionInfo *_paidCollection;
    struct CGSize _layoutSize;
}

+ (double)viewHeightWithPaidCollection:(id)arg1 width:(double)arg2;
+ (double)titleMaxWidthWithWidth:(double)arg1;
- (void).cxx_destruct;
@property(nonatomic) struct CGSize layoutSize; // @synthesize layoutSize=_layoutSize;
@property(retain, nonatomic) FinderPaidCollectionInfo *paidCollection; // @synthesize paidCollection=_paidCollection;
@property(retain, nonatomic) MMUIButton *priceLabel; // @synthesize priceLabel=_priceLabel;
@property(retain, nonatomic) UILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) RichTextView *titleView; // @synthesize titleView=_titleView;
@property(retain, nonatomic) MMWebImageView *coverImgView; // @synthesize coverImgView=_coverImgView;
- (void)onPaidCollectionTopicID:(id)arg1 purchaseStateChanged:(_Bool)arg2;
- (void)updatePriceText:(id)arg1;
- (void)layoutUI;
- (void)layoutSubviews;
- (id)priceTextWithPrice:(unsigned long long)arg1 purchased:(_Bool)arg2;
- (void)updateWithPaidCollection:(id)arg1;
- (void)prepareForReuse;
- (void)setupUI;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

