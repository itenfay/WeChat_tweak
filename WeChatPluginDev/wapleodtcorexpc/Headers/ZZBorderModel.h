//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class UIColor;

@interface ZZBorderModel : NSObject
{
    double _width;
    UIColor *_color;
    double _radius;
}

+ (id)create;
- (void).cxx_destruct;
@property(nonatomic) double radius; // @synthesize radius=_radius;
@property(retain, nonatomic) UIColor *color; // @synthesize color=_color;
@property(nonatomic) double width; // @synthesize width=_width;

@end

