//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMLiveConnectMicAudienceCameraOperationPageSheet;

@protocol MMLiveConnectMicAudienceCameraOperationPanelDelegate <NSObject>

@optional
- (void)onMMLiveConnectMicAudienceCameraOperationPanelLayoutUpdated:(MMLiveConnectMicAudienceCameraOperationPageSheet *)arg1;
- (void)onMMLiveConnectMicAudienceCameraOperationPanel:(MMLiveConnectMicAudienceCameraOperationPageSheet *)arg1 didCloseWithNextState:(unsigned long long)arg2;
- (void)onMMLiveConnectMicAudienceCameraOperationPanel:(MMLiveConnectMicAudienceCameraOperationPageSheet *)arg1 willCloseWithNextState:(unsigned long long)arg2;
- (void)onMMLiveConnectMicAudienceCameraOperationPanelSwitchCameraInvoked:(MMLiveConnectMicAudienceCameraOperationPageSheet *)arg1 completionBlock:(void (^)(_Bool))arg2;
- (void)onMMLiveConnectMicAudienceCameraOperationPanelMirrorFrontCameraInvoked:(MMLiveConnectMicAudienceCameraOperationPageSheet *)arg1;
- (void)onMMLiveConnectMicAudienceCameraOperationPanelWillShow:(MMLiveConnectMicAudienceCameraOperationPageSheet *)arg1;
@end

