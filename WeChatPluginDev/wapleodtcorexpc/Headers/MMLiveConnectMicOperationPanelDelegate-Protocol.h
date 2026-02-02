//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMLiveApplyConnectMicAudience;

@protocol MMLiveConnectMicOperationPanelDelegate <NSObject>

@optional
- (void)onMMLiveConnectMicOperationPanelCancelConnect;
- (void)onMMLiveConnectMicOperationPanelStopConnect;
- (void)onMMLiveConnectMicOperationPanelStartConnectToAudience:(MMLiveApplyConnectMicAudience *)arg1;
- (void)onMMLiveConnectMicOperationPanelClose;
- (void)onMMLiveConnectMicOperationPanelChangeMicState:(_Bool)arg1;
@end

