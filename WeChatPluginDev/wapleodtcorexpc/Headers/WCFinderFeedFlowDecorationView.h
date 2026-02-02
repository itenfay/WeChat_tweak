//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionReusableView.h>

@class CAGradientLayer, WCFinderFeedFlowDecorationViewLayoutAttributes;

@interface WCFinderFeedFlowDecorationView : UICollectionReusableView
{
    CAGradientLayer *_gradientLayer;
    WCFinderFeedFlowDecorationViewLayoutAttributes *_attr;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderFeedFlowDecorationViewLayoutAttributes *attr; // @synthesize attr=_attr;
@property(retain, nonatomic) CAGradientLayer *gradientLayer; // @synthesize gradientLayer=_gradientLayer;
- (void)updateGradientUI;
- (void)traitCollectionDidChange:(id)arg1;
- (void)layoutSubviews;
- (void)applyLayoutAttributes:(id)arg1;

@end

