//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class UIColor;

@interface WCSVGImageConfig : NSObject
{
    UIColor *_tintColor;
    double _rotationAngle;
    double _opacity;
    double _rescale;
    struct CGRect _bounds;
}

+ (id)imageConfigWithTintColor:(id)arg1 bounds:(struct CGRect)arg2 rotationAngle:(double)arg3 opacity:(double)arg4 scale:(double)arg5;
+ (id)imageConfigWithTintColor:(id)arg1 bounds:(struct CGRect)arg2 rotationAngle:(double)arg3 opacity:(double)arg4;
- (void).cxx_destruct;
@property(nonatomic) double rescale; // @synthesize rescale=_rescale;
@property(nonatomic) double opacity; // @synthesize opacity=_opacity;
@property(nonatomic) double rotationAngle; // @synthesize rotationAngle=_rotationAngle;
@property(nonatomic) struct CGRect bounds; // @synthesize bounds=_bounds;
@property(retain, nonatomic) UIColor *tintColor; // @synthesize tintColor=_tintColor;

@end

