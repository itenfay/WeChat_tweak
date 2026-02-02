//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface WCFinderCustomCollectionFixedSpacingFlowLayout
{
    double _fixedSpacing;
}

@property(nonatomic) double fixedSpacing; // @synthesize fixedSpacing=_fixedSpacing;
- (void)invalidateLayout;
- (_Bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg1;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;

@end

