//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionViewFlowLayout.h>

@interface MMLiveLotteryDetailCardGiftFlowLayout : UICollectionViewFlowLayout
{
    double _sumCellWidth;
    double _betweenOfCell;
    double _betweenOfSection;
    long long _cellType;
}

@property(nonatomic) long long cellType; // @synthesize cellType=_cellType;
@property(nonatomic) double betweenOfSection; // @synthesize betweenOfSection=_betweenOfSection;
@property(nonatomic) double betweenOfCell; // @synthesize betweenOfCell=_betweenOfCell;
- (void)setCellFrameWith:(id)arg1;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (id)initWithType:(long long)arg1 betweenOfCell:(double)arg2 betweenOfSection:(double)arg3;
- (id)initWthType:(long long)arg1;
- (id)init;

@end

