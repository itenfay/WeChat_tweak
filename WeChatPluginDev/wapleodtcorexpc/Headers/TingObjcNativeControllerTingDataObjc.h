//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface TingObjcNativeControllerTingDataObjc : NSObject
{
}

+ (void)trySyncPlayerActionToWeAppTask:(id)arg1 action:(unsigned long long)arg2;
+ (_Bool)isEngineListenItemInfoEvent:(id)arg1;
+ (_Bool)isEngineCategoryInfoEvent:(id)arg1;
+ (void)setShowAudioRedDot:(_Bool)arg1 callback:(CDUnknownBlockType)arg2;
+ (void)uploadRecordFileToCdn:(id)arg1 callback:(CDUnknownBlockType)arg2;
+ (void)showAudioRedDot:(CDUnknownBlockType)arg1;
+ (void)preloadMiniProgram:(long long)arg1 preloadScene:(long long)arg2 callback:(CDUnknownBlockType)arg3;
+ (void)onTingCommonEvent:(long long)arg1 paramsJson:(id)arg2 callback:(CDUnknownBlockType)arg3;
+ (void)onPlayerLike:(id)arg1 isLike:(_Bool)arg2 callback:(CDUnknownBlockType)arg3;
+ (void)onPlayerAction:(id)arg1 action:(long long)arg2 callback:(CDUnknownBlockType)arg3;
+ (void)hasAddedInFavDB:(id)arg1 callback:(CDUnknownBlockType)arg2;
+ (void)getIdentityType:(CDUnknownBlockType)arg1;
+ (void)deleteFavBySourceId:(id)arg1 callback:(CDUnknownBlockType)arg2;
+ (void)addOrRevertBlackList:(id)arg1 addOrRevert:(_Bool)arg2 callback:(CDUnknownBlockType)arg3;

@end

