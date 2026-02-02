//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSMutableArray, NSString;

@protocol WeVisLiveEffectDelegate <NSObject>
- (_Bool)checkNeedBeautyWithFaceTrackRet:(int)arg1;
- (void)onLuaScriptJsonMessageReceived:(NSString *)arg1 fromSourceId:(int)arg2;
- (void)onResourceIDVector:(NSMutableArray *)arg1 scene:(unsigned long long)arg2;
- (void)onResourceID:(long long)arg1;
- (void)onResult:(int)arg1;
@end

