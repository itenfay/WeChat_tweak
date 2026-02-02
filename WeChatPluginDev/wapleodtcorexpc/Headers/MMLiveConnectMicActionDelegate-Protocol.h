//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMLiveApplyConnectMicAudience, MMLiveTaskId, NSMutableArray;

@protocol MMLiveConnectMicActionDelegate <NSObject>

@optional
- (void)onFinderLiveConnectedMicPKSuperfanCountUpdated:(unsigned long long)arg1;
- (void)onConnectMicModeChanged:(_Bool)arg1;
- (void)onConnectMicOperationPanelWillShowWithIdentityIdList:(NSMutableArray *)arg1;
- (void)onApplyLiveMicWithTaskId:(MMLiveTaskId *)arg1;
- (void)onCloseLiveMicWithTaskId:(MMLiveTaskId *)arg1 audienceInfo:(MMLiveApplyConnectMicAudience *)arg2;
- (void)onAcceptLiveMicWithTaskId:(MMLiveTaskId *)arg1 audienceInfo:(MMLiveApplyConnectMicAudience *)arg2;
- (void)onUpdateLiveMicEnableWithTaskId:(MMLiveTaskId *)arg1 enable:(_Bool)arg2;
@end

