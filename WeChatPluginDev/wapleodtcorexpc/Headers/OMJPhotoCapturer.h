//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class AVCapturePhotoSettings, NSMutableArray, NSString;
@protocol OMJPhotoCapturerDelegate;

@interface OMJPhotoCapturer : NSObject
{
    AVCapturePhotoSettings *_requestedPhotoSettings;
    id <OMJPhotoCapturerDelegate> _delegate;
    NSMutableArray *_photos;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *photos; // @synthesize photos=_photos;
@property(nonatomic) __weak id <OMJPhotoCapturerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) AVCapturePhotoSettings *requestedPhotoSettings; // @synthesize requestedPhotoSettings=_requestedPhotoSettings;
- (void)captureOutput:(id)arg1 didFinishCaptureForResolvedSettings:(id)arg2 error:(id)arg3;
- (void)captureOutput:(id)arg1 didFinishProcessingPhoto:(id)arg2 error:(id)arg3;
- (void)didFinish;
- (id)initWithRequestedPhotoSettings:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

