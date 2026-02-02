//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMWeEffectManager, NSMutableArray, NSString;

@protocol WeEffectManagerResultDelegate <NSObject>
- (void)onWeVisEffectMgrCreateCompleted;
- (void)onWeEffectLuaScriptJsonMessageReceived:(NSString *)arg1 fromSourceId:(int)arg2;
- (void)onResourceIDVector:(NSMutableArray *)arg1 scene:(unsigned long long)arg2;
- (void)onResourceID:(long long)arg1;
- (void)onResult:(int)arg1;

@optional
- (void)onWeEffect:(MMWeEffectManager *)arg1 processFpsUpdate:(int)arg2;
- (void)onWeEffectProcessEnd:(MMWeEffectManager *)arg1 scene:(long long)arg2;
- (void)onWeEffectProcessBegin:(MMWeEffectManager *)arg1 scene:(long long)arg2;
- (void)onWeEffect:(MMWeEffectManager *)arg1 processCostTimeUpdate:(double)arg2 scene:(long long)arg3;
@end

