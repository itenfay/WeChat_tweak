//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionReusableView.h>

@class CAGradientLayer;

@interface WCFinderSearchDecorationView : UICollectionReusableView
{
    CAGradientLayer *_gradientLayer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CAGradientLayer *gradientLayer; // @synthesize gradientLayer=_gradientLayer;
- (void)traitCollectionDidChange:(id)arg1;
- (void)layoutSubviews;
- (void)applyLayoutAttributes:(id)arg1;
- (void)setupSearchMaskUI;
- (id)initWithFrame:(struct CGRect)arg1;

@end

