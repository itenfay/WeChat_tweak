//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSIndexPath;

@interface UITableViewCellExposureInfo
{
    NSIndexPath *_cellViewIndexPath;
    double _exposureRatio;
    struct CGRect _intersectionRect;
    struct CGRect _cellViewRect;
}

- (void).cxx_destruct;
@property(nonatomic) double exposureRatio; // @synthesize exposureRatio=_exposureRatio;
@property(nonatomic) struct CGRect cellViewRect; // @synthesize cellViewRect=_cellViewRect;
@property(nonatomic) struct CGRect intersectionRect; // @synthesize intersectionRect=_intersectionRect;
@property(retain, nonatomic) NSIndexPath *cellViewIndexPath; // @synthesize cellViewIndexPath=_cellViewIndexPath;

@end

