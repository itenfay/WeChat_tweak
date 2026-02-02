//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSIndexPath;
@protocol BTItemCellViewModelVideoPlayProtocol;

@interface BTVideoExposureItem
{
    NSIndexPath *_cellViewIndexPath;
    double _exposureRatio;
    id <BTItemCellViewModelVideoPlayProtocol> _itemCellViewModelVideoPlay;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <BTItemCellViewModelVideoPlayProtocol> itemCellViewModelVideoPlay; // @synthesize itemCellViewModelVideoPlay=_itemCellViewModelVideoPlay;
@property(nonatomic) double exposureRatio; // @synthesize exposureRatio=_exposureRatio;
@property(retain, nonatomic) NSIndexPath *cellViewIndexPath; // @synthesize cellViewIndexPath=_cellViewIndexPath;
- (void)calcExposureRatioWithExposureRect:(struct CGRect)arg1 videoRect:(struct CGRect)arg2;

@end

