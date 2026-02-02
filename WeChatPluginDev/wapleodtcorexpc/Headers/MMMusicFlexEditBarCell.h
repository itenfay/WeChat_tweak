//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionViewCell.h>

@class NSMutableArray, UIView;
@protocol MMMusicFlexEditBarCellDelegate;

@interface MMMusicFlexEditBarCell : UICollectionViewCell
{
    NSMutableArray *_arrImageView;
    UIView *_arrImageContainerView;
    unsigned long long _cellIndex;
    double _offset;
    id <MMMusicFlexEditBarCellDelegate> _delegate;
}

- (void).cxx_destruct;
@property __weak id <MMMusicFlexEditBarCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onTapGes:(id)arg1;
- (double)cellWidthPerSecond;
- (void)layoutSubviews;
- (void)updateCellAlpha;
- (void)updateWhenIsGhostCell;
- (id)genImageViewWithImage:(id)arg1 targetSize:(struct CGSize)arg2;
- (void)updateThumbImageArr;
- (void)reloadThumbImageArr;
- (void)setOffset:(double)arg1;
- (double)offset;
- (void)updateWithCellIndex:(unsigned long long)arg1 bDataChanged:(_Bool)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

