//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface OMJCaptureSession : NSObject
{
    struct XMJCaptureSessionOptions _options;
    SharedPtr_722639b5 _backCaptureSession;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) SharedPtr_722639b5 backCaptureSession; // @synthesize backCaptureSession=_backCaptureSession;
@property(nonatomic) struct XMJCaptureSessionOptions options; // @synthesize options=_options;
- (void)stopRunning;
- (void)setupAndStartRunning;
- (id)initWithDimensionLevel:(unsigned long long)arg1 frontCamera:(_Bool)arg2;

@end

