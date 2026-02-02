//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, WCSVGImageConfig;

@interface WCSVGCanvas : NSObject
{
    long long _type;
    NSMutableArray *_components;
    WCSVGCanvas *_mask;
    double _opacity;
    WCSVGImageConfig *_associateImageConfig;
    struct CGRect _bounds;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCSVGImageConfig *associateImageConfig; // @synthesize associateImageConfig=_associateImageConfig;
@property(nonatomic) double opacity; // @synthesize opacity=_opacity;
@property(nonatomic) struct CGRect bounds; // @synthesize bounds=_bounds;
@property(retain, nonatomic) WCSVGCanvas *mask; // @synthesize mask=_mask;
@property(retain, nonatomic) NSMutableArray *components; // @synthesize components=_components;
@property(nonatomic) long long type; // @synthesize type=_type;
- (id)maskImageFromImage:(id)arg1;
- (void)drawAllComponentsInContext:(struct CGContext *)arg1;
- (void)addMask:(id)arg1 toContext:(struct CGContext *)arg2;
- (void)drawInContext:(struct CGContext *)arg1 withBounds:(struct CGRect)arg2;
- (id)image;
- (id)initWithType:(long long)arg1;

@end

