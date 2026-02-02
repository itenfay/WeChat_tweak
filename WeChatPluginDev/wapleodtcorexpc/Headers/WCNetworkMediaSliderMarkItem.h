//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class UIColor;

@interface WCNetworkMediaSliderMarkItem : NSObject
{
    double _width;
    double _position;
    UIColor *_color;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIColor *color; // @synthesize color=_color;
@property(nonatomic) double position; // @synthesize position=_position;
@property(nonatomic) double width; // @synthesize width=_width;
- (id)description;

@end

