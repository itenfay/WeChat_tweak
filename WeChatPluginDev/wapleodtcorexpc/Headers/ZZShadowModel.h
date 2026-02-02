//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class UIColor;

@interface ZZShadowModel : NSObject
{
    UIColor *_color;
    double _radius;
    double _opacity;
    struct CGSize _offset;
}

+ (id)create;
- (void).cxx_destruct;
@property(nonatomic) double opacity; // @synthesize opacity=_opacity;
@property(nonatomic) double radius; // @synthesize radius=_radius;
@property(retain, nonatomic) UIColor *color; // @synthesize color=_color;
@property(nonatomic) struct CGSize offset; // @synthesize offset=_offset;

@end

