//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSArray, WCAudioModule, WCAudioModuleParam;

@protocol WCAudioModuleDelegate <NSObject>
- (void)audioModuleInterruptionBegin:(WCAudioModule *)arg1 param:(WCAudioModuleParam *)arg2;

@optional
- (_Bool)audioModuleBindingWCPlayerPipSupport;
- (void)audioModuleDidRemoveFromInterruptList:(WCAudioModule *)arg1;
- (NSArray *)mixListForAudioModule:(WCAudioModule *)arg1;
- (void)audioModuleInterruptionEnd:(WCAudioModule *)arg1 param:(WCAudioModuleParam *)arg2;
@end

