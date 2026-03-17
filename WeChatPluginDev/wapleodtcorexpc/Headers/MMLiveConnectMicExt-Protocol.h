//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMLiveApplyConnectMicAudience, MMLiveConnectMicModeChanges, MMLiveTaskId, NSString;

@protocol MMLiveConnectMicExt <NSObject>

@optional
- (void)onLiveConnectMicPkStatusChange:(unsigned long long)arg1 toState:(unsigned long long)arg2;
- (void)onLiveConnectMicPaidMicSettingChanged:(MMLiveConnectMicModeChanges *)arg1;
- (void)onLiveConnectMicModeChanged:(MMLiveConnectMicModeChanges *)arg1;
- (void)onConnectMicPKUserForegroundPercentageUpdated:(MMLiveTaskId *)arg1 foregroundPercent:(unsigned int)arg2 foregroundGiftId:(NSString *)arg3 username:(NSString *)arg4;
- (void)onConnectMicDidEndPK:(MMLiveTaskId *)arg1;
- (void)onConnectMicDidStartPK:(MMLiveTaskId *)arg1;
- (void)onLiveConnectMicAudienceMutedByAnchorStatusChanged:(_Bool)arg1;
- (void)onLiveFreeTalkFlagChanged:(_Bool)arg1;
- (void)onLiveConnectMicConditionSettingChanged:(unsigned long long)arg1;
- (void)onLiveCanApplyConnecteMicChanged:(_Bool)arg1;
- (void)onLiveUnConnectedMic:(MMLiveApplyConnectMicAudience *)arg1;
- (void)onLiveConnectedMic:(MMLiveApplyConnectMicAudience *)arg1;
@end

