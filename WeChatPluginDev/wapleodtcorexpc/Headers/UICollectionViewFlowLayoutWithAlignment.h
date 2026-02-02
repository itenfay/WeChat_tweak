//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionViewFlowLayout.h>

@interface UICollectionViewFlowLayoutWithAlignment : UICollectionViewFlowLayout
{
    double _betweenOfCell;
    long long _cellType;
    double _sumWidth;
}

@property(nonatomic) double sumWidth; // @synthesize sumWidth=_sumWidth;
@property(nonatomic) long long cellType; // @synthesize cellType=_cellType;
@property(nonatomic) double betweenOfCell; // @synthesize betweenOfCell=_betweenOfCell;
- (void)setCellFrameWith:(id)arg1;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (id)initWthType:(long long)arg1;
- (id)init;

@end

