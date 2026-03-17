//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class UIColor;

@interface GCSpaceCellModel : NSObject
{
    UIColor *_backgroundColor;
    double _cellHeight;
}

@property(nonatomic) double cellHeight; // @synthesize cellHeight=_cellHeight;
@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (id)cellReuseIdentifier;
- (struct CGSize)cellSizeForCollectionView:(id)arg1;

@end

