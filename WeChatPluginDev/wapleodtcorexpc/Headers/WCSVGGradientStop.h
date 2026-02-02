//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class UIColor;

@interface WCSVGGradientStop : NSObject
{
    double _offset;
    UIColor *_color;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIColor *color; // @synthesize color=_color;
@property(nonatomic) double offset; // @synthesize offset=_offset;
- (id)init;

@end

