//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MBExternalViewStub;

@protocol IMBExternalViewDelegate <NSObject>
- (void)onCanvasViewDestroy:(unsigned int)arg1 view:(MBExternalViewStub *)arg2;
- (void)onCanvasViewLayout:(unsigned int)arg1 view:(MBExternalViewStub *)arg2 left:(float)arg3 top:(float)arg4 width:(float)arg5 height:(float)arg6;
- (void)onCanvasViewCreated:(unsigned int)arg1 view:(MBExternalViewStub *)arg2;

@optional
- (void)onCanvasViewFirstFrameRendered:(unsigned int)arg1;
@end

