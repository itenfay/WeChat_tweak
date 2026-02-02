//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionViewCell.h>

@class NSString, UIImageView, UILabel, UIView;

@interface CameraScanCombineScanGoodsResultCardView : UICollectionViewCell
{
    NSString *_reqKey;
    UIView *_bgView;
    UIImageView *_goodsSnapshotView;
    UILabel *_goodsDescLabel;
    UIImageView *_rightArrowView;
    UIImageView *_loadingImageView;
    UIView *_highlightMaskView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *highlightMaskView; // @synthesize highlightMaskView=_highlightMaskView;
@property(retain, nonatomic) UIImageView *loadingImageView; // @synthesize loadingImageView=_loadingImageView;
@property(retain, nonatomic) UIImageView *rightArrowView; // @synthesize rightArrowView=_rightArrowView;
@property(retain, nonatomic) UILabel *goodsDescLabel; // @synthesize goodsDescLabel=_goodsDescLabel;
@property(retain, nonatomic) UIImageView *goodsSnapshotView; // @synthesize goodsSnapshotView=_goodsSnapshotView;
@property(retain, nonatomic) UIView *bgView; // @synthesize bgView=_bgView;
@property(copy, nonatomic) NSString *reqKey; // @synthesize reqKey=_reqKey;
- (void)setHighlighted:(_Bool)arg1;
- (void)applyViewModel:(id)arg1;
- (void)layoutSubviews;
- (void)initSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

