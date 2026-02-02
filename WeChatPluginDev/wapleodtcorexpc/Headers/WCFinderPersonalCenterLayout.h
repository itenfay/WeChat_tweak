//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionViewFlowLayout.h>

@class NSMutableArray;

@interface WCFinderPersonalCenterLayout : UICollectionViewFlowLayout
{
    NSMutableArray *_decorationAttrs;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *decorationAttrs; // @synthesize decorationAttrs=_decorationAttrs;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (id)layoutAttributesForDecorationViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (void)prepareDecorationLayout;
- (void)prepareLayout;
- (id)flowDelegate;
- (void)setup;
- (id)init;

@end

