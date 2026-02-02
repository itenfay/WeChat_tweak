//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionViewLayoutAttributes.h>

@class CALayer, UIColor;

@interface EmoticonBoardDynamicTabBarBackgroundViewLayoutAttributes : UICollectionViewLayoutAttributes
{
    UIColor *_backgroundColor;
    CALayer *_selectionMaskLayer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CALayer *selectionMaskLayer; // @synthesize selectionMaskLayer=_selectionMaskLayer;
@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;

@end

