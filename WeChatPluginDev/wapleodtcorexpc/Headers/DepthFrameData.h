//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class CIImage;

@interface DepthFrameData : NSObject
{
    CIImage *_depthFrame;
    long long _capture_time;
    struct Mat _bgrFrame;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) long long capture_time; // @synthesize capture_time=_capture_time;
@property(nonatomic) struct Mat bgrFrame; // @synthesize bgrFrame=_bgrFrame;
@property(retain, nonatomic) CIImage *depthFrame; // @synthesize depthFrame=_depthFrame;
- (void)releaseData;

@end

