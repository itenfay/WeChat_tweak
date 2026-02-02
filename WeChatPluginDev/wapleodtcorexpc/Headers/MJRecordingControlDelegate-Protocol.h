//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MJRecordingControl;

@protocol MJRecordingControlDelegate <NSObject>

@optional
- (void)recordingControlDidCancelRecording:(MJRecordingControl *)arg1;
- (void)recordingControlDidStopRecording:(MJRecordingControl *)arg1;
- (void)recordingControlDidStartRecording:(MJRecordingControl *)arg1;
@end

