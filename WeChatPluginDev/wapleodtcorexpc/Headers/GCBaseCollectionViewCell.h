//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionViewCell.h>

@class GCBaseCellModel;

@interface GCBaseCollectionViewCell : UICollectionViewCell
{
    GCBaseCellModel *_bindCellModel;
}

+ (void)calculateLayoutIfNeed:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) __weak GCBaseCellModel *bindCellModel; // @synthesize bindCellModel=_bindCellModel;
- (void)configureWithCellModel:(id)arg1;

@end

