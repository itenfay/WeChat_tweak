//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class UIColor;

@interface QNavigationGravityLine : NSObject
{
    double _width;
    UIColor *_color;
    struct CLLocationCoordinate2D _destination;
}

- (void).cxx_destruct;
@property(nonatomic) struct CLLocationCoordinate2D destination; // @synthesize destination=_destination;
@property(retain, nonatomic) UIColor *color; // @synthesize color=_color;
@property(nonatomic) double width; // @synthesize width=_width;

@end

