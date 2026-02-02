//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionViewCell.h>

@class CAShapeLayer, UILabel, UIView;

@interface WCMomentsShareScopeLoadMoreCellView : UICollectionViewCell
{
    UIView *_loadMoreTopLineView;
    UILabel *_loadMoreLabel;
    unsigned long long _cellViewCurrentCorner;
    CAShapeLayer *_cellViewCornerMaskLayer;
}

+ (_Bool)isSectionIdentifierEqualsTo:(id)arg1;
+ (double)cellHeight;
+ (id)cellIdentifier;
- (void).cxx_destruct;
@property(retain, nonatomic) CAShapeLayer *cellViewCornerMaskLayer; // @synthesize cellViewCornerMaskLayer=_cellViewCornerMaskLayer;
@property(nonatomic) unsigned long long cellViewCurrentCorner; // @synthesize cellViewCurrentCorner=_cellViewCurrentCorner;
@property(retain, nonatomic) UILabel *loadMoreLabel; // @synthesize loadMoreLabel=_loadMoreLabel;
@property(retain, nonatomic) UIView *loadMoreTopLineView; // @synthesize loadMoreTopLineView=_loadMoreTopLineView;
- (void)_removeCellViewCorner;
- (void)_initCellViewCornerFromViewModel:(id)arg1;
- (void)_initCellViewWithViewModel:(id)arg1;
- (void)loadFromViewModel:(id)arg1;

@end

