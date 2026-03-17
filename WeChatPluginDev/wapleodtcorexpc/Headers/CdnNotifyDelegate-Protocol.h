//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMWeEffectFrame, NSDictionary;

@protocol CdnNotifyDelegate <NSObject>
- (void)onRenderFpsUpdate:(int)arg1;
- (void)onOutputWeEffectProcessedRenderFrame:(MMWeEffectFrame *)arg1;
- (void)onNotifyEvent:(int)arg1 withParams:(NSDictionary *)arg2;
@end

