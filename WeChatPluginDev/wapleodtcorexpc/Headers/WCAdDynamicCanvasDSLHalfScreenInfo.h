//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WCAdDynamicCanvasDSLHalfScreenInfo : NSObject
{
    _Bool _isHalfScreen;
    double _height;
    double _heightPercent;
}

@property(nonatomic) double heightPercent; // @synthesize heightPercent=_heightPercent;
@property(nonatomic) double height; // @synthesize height=_height;
@property(nonatomic) _Bool isHalfScreen; // @synthesize isHalfScreen=_isHalfScreen;
- (double)halfScreenHeight;

@end

