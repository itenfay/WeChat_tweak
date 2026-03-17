//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSError, RPPreviewViewController, RPScreenRecorder;

@protocol RPScreenRecorderDelegate <NSObject>

@optional
- (void)screenRecorderDidChangeAvailability:(RPScreenRecorder *)arg1;
- (void)screenRecorder:(RPScreenRecorder *)arg1 didStopRecordingWithPreviewViewController:(RPPreviewViewController *)arg2 error:(NSError *)arg3;
- (void)screenRecorder:(RPScreenRecorder *)arg1 didStopRecordingWithError:(NSError *)arg2 previewViewController:(RPPreviewViewController *)arg3;
@end

