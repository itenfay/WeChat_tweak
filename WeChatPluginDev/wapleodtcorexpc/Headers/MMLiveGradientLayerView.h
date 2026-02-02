//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class CAGradientLayer, NSArray, NSString;

@interface MMLiveGradientLayerView : UIView
{
}

+ (Class)layerClass;
- (void)setUIColors:(id)arg1;
@property(readonly, nonatomic) CAGradientLayer *gradientLayer;
@property(copy, nonatomic) NSString *type;
@property(nonatomic) struct CGPoint endPoint;
@property(nonatomic) struct CGPoint startPoint;
@property(copy, nonatomic) NSArray *locations;
@property(copy, nonatomic) NSArray *colors;

@end

