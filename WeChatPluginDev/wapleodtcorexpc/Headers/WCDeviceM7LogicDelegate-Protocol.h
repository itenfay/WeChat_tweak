//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class WCDeviceStepObject;

@protocol WCDeviceM7LogicDelegate <NSObject>

@optional
- (void)tryUploadStepOnSourceChange;
- (void)tryUploadStepOnObserver;
- (unsigned int)getLastHealthkitStep;
- (unsigned int)getLastM7Step;
- (void)onGotDeviceStepObject:(WCDeviceStepObject *)arg1;
@end

