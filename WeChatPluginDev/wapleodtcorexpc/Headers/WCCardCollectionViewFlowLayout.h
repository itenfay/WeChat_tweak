//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionViewFlowLayout.h>

@class NSMutableArray, UIColor;

@interface WCCardCollectionViewFlowLayout : UICollectionViewFlowLayout
{
    UIColor *_sectonColor;
    NSMutableArray *_decorationViewAttrs;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *decorationViewAttrs; // @synthesize decorationViewAttrs=_decorationViewAttrs;
@property(retain, nonatomic) UIColor *sectonColor; // @synthesize sectonColor=_sectonColor;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (void)prepareLayout;

@end

