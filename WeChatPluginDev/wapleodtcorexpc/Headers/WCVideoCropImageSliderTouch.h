//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class UITouch;

@interface WCVideoCropImageSliderTouch : NSObject
{
    double _time;
    UITouch *_touch;
    struct CGPoint _point;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UITouch *touch; // @synthesize touch=_touch;
@property(nonatomic) double time; // @synthesize time=_time;
@property(nonatomic) struct CGPoint point; // @synthesize point=_point;

@end

