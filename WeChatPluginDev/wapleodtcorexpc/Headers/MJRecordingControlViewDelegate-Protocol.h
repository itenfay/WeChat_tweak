//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MJRecordingControlView;

@protocol MJRecordingControlViewDelegate <NSObject>

@optional
- (void)recordingControlViewDidCancelRecording:(MJRecordingControlView *)arg1;
- (void)recordingControlViewDidStopRecording:(MJRecordingControlView *)arg1;
- (void)recordingControlViewDidStartRecording:(MJRecordingControlView *)arg1;
@end

