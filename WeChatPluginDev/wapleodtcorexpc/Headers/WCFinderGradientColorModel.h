//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSNumber, UIColor;

@interface WCFinderGradientColorModel : NSObject
{
    NSNumber *_location;
    UIColor *_color;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIColor *color; // @synthesize color=_color;
@property(retain, nonatomic) NSNumber *location; // @synthesize location=_location;
- (id)initWithLocation:(id)arg1 color:(id)arg2;

@end

