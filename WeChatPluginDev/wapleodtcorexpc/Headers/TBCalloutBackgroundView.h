//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class CALayer;

@interface TBCalloutBackgroundView : UIView
{
    _Bool _highlighted;
    CALayer *_contentMask;
    double _anchorHeight;
    double _anchorMargin;
    struct CGPoint _arrowPoint;
}

+ (id)CalloutArrow_2x;
+ (id)CalloutArrow;
+ (id)embeddedImageNamed:(id)arg1;
+ (id)dataWithBase64EncodedString:(id)arg1;
@property(nonatomic) double anchorMargin; // @synthesize anchorMargin=_anchorMargin;
@property(nonatomic) double anchorHeight; // @synthesize anchorHeight=_anchorHeight;
@property(nonatomic) CALayer *contentMask; // @synthesize contentMask=_contentMask;
@property(nonatomic) _Bool highlighted; // @synthesize highlighted=_highlighted;
@property(nonatomic) struct CGPoint arrowPoint; // @synthesize arrowPoint=_arrowPoint;

@end

