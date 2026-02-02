//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMLiveAnchorSEIInfo, MMLiveAudioRoomSEIConnectMicMsg, MMLiveBaseTask, MMLiveSEIConnectMicMsg, NSArray, NSString;

@protocol MMLiveBaseTaskDelegate <NSObject>

@optional
- (void)onLiveTask:(MMLiveBaseTask *)arg1 didChangeViewCapturing:(_Bool)arg2;
- (void)onLiveTask:(MMLiveBaseTask *)arg1 audioRoomSEIMicMsgInfoUpdated:(MMLiveAudioRoomSEIConnectMicMsg *)arg2 listChanged:(_Bool)arg3;
- (void)onLiveTask:(MMLiveBaseTask *)arg1 audioRoomSceneChangedTo:(unsigned long long)arg2;
- (void)onLiveTask:(MMLiveBaseTask *)arg1 otherConnectMicAnchor:(NSString *)arg2 anchorSeiStatus:(unsigned int)arg3 anchorSEIInfo:(MMLiveAnchorSEIInfo *)arg4;
- (void)onLiveTask:(MMLiveBaseTask *)arg1 isPureAudioModeChangedTo:(_Bool)arg2 isPureAudioDisplayModeValueChanged:(_Bool)arg3;
- (void)onLiveTask:(MMLiveBaseTask *)arg1 SEIMicMsgInfoUpdated:(MMLiveSEIConnectMicMsg *)arg2 listChanged:(_Bool)arg3;
- (void)onLiveTask:(MMLiveBaseTask *)arg1 SEIConnectMicUserInfoListUpdated:(NSArray *)arg2 listChanged:(_Bool)arg3;
@end

