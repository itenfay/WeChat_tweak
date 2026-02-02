//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WCFinderRedPacketCropSliderTimeRange : NSObject
{
    double _start;
    double _duration;
}

@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic) double start; // @synthesize start=_start;
- (id)description;
- (id)init;

@end

