//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class UIEvent;

@protocol IRemoteControlCheckExt

@optional
- (void)iRemoteControlCheckEvent:(UIEvent *)arg1;
- (void)iRemoteControlCheckShouldPrevTrack;
- (void)iRemoteControlCheckShouldNextTrack;
- (void)iRemoteControlCheckShouldStop;
- (void)iRemoteControlCheckShouldPlayOrPause;
- (void)iRemoteControlCheckShouldPause;
- (void)iRemoteControlCheckShouldPlay;
- (void)iRemoteControlCheckShouldFinishRecord;
- (void)iRemoteControlCheckShouldBeginRecord;
- (void)iRemoteControlCheckPluginOff;
- (void)iRemoteControlCheckPluginOn;
@end

