//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class AVAudioSessionPortDescription, MultiTalkBottomOperatePanel, NSString;

@protocol MultiTalkBottomOperatePanelDelegate <NSObject>
- (_Bool)getIfTalkReady;
- (void)changeAudioToPort:(NSString *)arg1 hasChanged:(_Bool)arg2;
- (void)showToastOnMultiTalkVC:(NSString *)arg1;
- (_Bool)showAirplayOrJustChange;
- (void)updateProximityWithPort:(NSString *)arg1;
- (NSString *)getSpeakerBtnText:(NSString *)arg1;
- (AVAudioSessionPortDescription *)curOutputPort;
- (_Bool)hasExtenalOutput;
- (NSString *)settingPortType;
- (void)multiTalkBottomOperatePanelDidUpdateSpeakerButtonState:(MultiTalkBottomOperatePanel *)arg1;
- (void)onMultiTalkBottomOperatePanelArrowButtonClick;
- (unsigned long long)getCurrentRoomKey;
- (unsigned long long)getCurrentRoomId;
- (void)onMultiTalkBottomOperatePanelOpenMultiPathCellularSetting;
- (void)onMultiTalkBottomOperatePanelFlipCameraButtonClick;
- (void)onMultiTalkBottomOperatePanelHangup;
- (void)onMultiTalkBottomOperatePanelSpeakerOff;
- (void)onMultiTalkBottomOperatePanelSpeakerOn;
- (void)onMultiTalkBottomOperatePanelMicrophoneOff;
- (void)onMultiTalkBottomOperatePanelMicrophoneOn;
- (void)onMultiTalkBottomOperatePanelVideoClose;
- (void)onMultiTalkBottomOperatePanelVideoOpen;
@end

