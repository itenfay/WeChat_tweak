//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class WCCameraModule;

@protocol WCCameraModuleDelegate <NSObject>
- (long long)cameraModuleReportScene;
- (void)cameraModuleInterruptionBegin:(WCCameraModule *)arg1;

@optional
- (void)cameraModuleInterruptionCancel:(WCCameraModule *)arg1;
- (void)cameraModuleInterruptionEnd:(WCCameraModule *)arg1;
@end

