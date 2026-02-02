//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSArray, NSMutableArray;

@interface ChildClippingView : UIView
{
    NSArray *_filters;
    NSMutableArray *_backdropFilterSubviews;
}

@property(retain, nonatomic) NSMutableArray *backdropFilterSubviews; // @synthesize backdropFilterSubviews=_backdropFilterSubviews;
@property(retain, nonatomic) NSArray *filters; // @synthesize filters=_filters;
- (void)dealloc;
- (void)applyBlurBackdropFilters:(id)arg1;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;

@end

