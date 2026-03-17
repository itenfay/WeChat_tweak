//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString, TingLaunchOptions;
@protocol TingFlowPlayerProtocol;

@protocol TingMinimizeTaskDelegate <NSObject>
- (void)willOpenMinimizeTask;
- (void)onActiveMinimizeTask;
- (void)onTerminateMinimizeTask;
- (void)onFoldMinimizeTask;
- (void)onRemoveMinimizeTaskAnimiated:(_Bool)arg1 onlyFade:(_Bool)arg2;
- (void)onAddMinimizeTaskAnimiated:(_Bool)arg1 voiceTic:(_Bool)arg2 fold:(_Bool)arg3;
- (TingLaunchOptions *)nextLaunchOptionForClientId:(NSString *)arg1;
- (_Bool)disableMinimizeTask;
- (_Bool)isPlayerModuleActive;
- (_Bool)isPlayerInForground;
- (_Bool)canAddMinimizeTask;
- (_Bool)hasMinimizeTask;
- (id <TingFlowPlayerProtocol>)player;
@end

