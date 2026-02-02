//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class TXCGSensor;

@protocol TXCGSensorDelegate <NSObject>

@optional
- (void)gSensor:(TXCGSensor *)arg1 onChangeRenderRotation:(unsigned long long)arg2 isViewInLandscape:(_Bool)arg3;
- (void)gSensor:(TXCGSensor *)arg1 onRotationChange:(unsigned long long)arg2 isViewInLandscape:(_Bool)arg3;
@end

