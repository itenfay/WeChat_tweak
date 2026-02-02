//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "MMSightCameraAspectRatioOptionDelegate-Protocol.h"
#import "MMSightCameraBeautifyOptionDelegate-Protocol.h"
#import "MMSightCameraFilterOptionDelegate-Protocol.h"
#import "MMSightCameraFlashlightOptionDelegate-Protocol.h"
#import "MMSightCameraGridLineOptionDelegate-Protocol.h"
#import "MMSightCameraHDROptionDelegate-Protocol.h"
#import "MMSightCameraNightModeOptionDelegate-Protocol.h"
#import "MMSightCameraPortraitModeOptionDelegate-Protocol.h"
#import "MMSightCameraProModeOptionDelegate-Protocol.h"
#import "MMSightCameraTimerOptionDelegate-Protocol.h"
#import "MMSightCameraZoomerOptionDelegate-Protocol.h"

@protocol MMSightCameraOptionControllerProtocol <MMSightCameraAspectRatioOptionDelegate, MMSightCameraBeautifyOptionDelegate, MMSightCameraFilterOptionDelegate, MMSightCameraFlashlightOptionDelegate, MMSightCameraGridLineOptionDelegate, MMSightCameraHDROptionDelegate, MMSightCameraNightModeOptionDelegate, MMSightCameraPortraitModeOptionDelegate, MMSightCameraProModeOptionDelegate, MMSightCameraTimerOptionDelegate, MMSightCameraZoomerOptionDelegate>
- (_Bool)isCameraProModeEnabled;
@end

