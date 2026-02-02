//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSArray;

@interface WCFinderGradientView : UIView
{
}

+ (Class)layerClass;
@property struct CGPoint endPoint;
@property struct CGPoint startPoint;
@property(copy) NSArray *locations;
@property(copy) NSArray *colors;
- (id)_layer;

@end

