//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class AVCaptureDataOutputSynchronizer, AVCaptureSynchronizedDataCollection;

@protocol AVCaptureDataOutputSynchronizerDelegate <NSObject>
- (void)dataOutputSynchronizer:(AVCaptureDataOutputSynchronizer *)arg1 didOutputSynchronizedDataCollection:(AVCaptureSynchronizedDataCollection *)arg2;
@end

