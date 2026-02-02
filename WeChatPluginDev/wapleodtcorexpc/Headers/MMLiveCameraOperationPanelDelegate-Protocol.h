//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMLiveCameraOperationPageSheet, NSString;

@protocol MMLiveCameraOperationPanelDelegate <NSObject>

@optional
- (void)onMMLiveCameraOperationPanelWillShow:(MMLiveCameraOperationPageSheet *)arg1;
- (void)onMMLiveCameraOperationPanelClickedRedDotAtPath:(NSString *)arg1;
- (void)onMMLiveCameraOperationPanelExposedRedDotAtPath:(NSString *)arg1;
- (void)onMMLiveCameraOperationPanelCloseWithNextState:(unsigned long long)arg1;
@end

