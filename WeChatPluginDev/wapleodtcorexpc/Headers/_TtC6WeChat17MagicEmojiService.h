//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MISSING_TYPE;

@interface _TtC6WeChat17MagicEmojiService
{
    MISSING_TYPE *_biz;
    MISSING_TYPE *delegate;
    MISSING_TYPE *belowInputCoverViewContainer;
}

- (void).cxx_destruct;
- (id)init;
- (void)applicationDidEnterBackground;
- (void)applicationDidBecomeActive;
- (struct CGRect)getBoundingBoxWithEggId:(id)arg1;
- (void)easterEggForceStopWithEggKey:(id)arg1 eggId:(id)arg2 stopReason:(unsigned long long)arg3 sceneId:(id)arg4;
- (void)easterEggGiftClickWithEggKey:(id)arg1 eggId:(id)arg2 sceneId:(id)arg3;
- (_Bool)easterEggPlayAnimationWithEggKey:(id)arg1 eggId:(id)arg2 animationType:(unsigned long long)arg3 sceneId:(id)arg4 extString:(id)arg5;
- (id)getBizSession;
- (void)destroy;
- (_Bool)trigger:(id)arg1 handler:(id)arg2;
- (void)safeDestroyWithDelegate:(id)arg1;
- (void)clear;
- (id)getRuntimeView;
- (void)insertView:(id)arg1;
- (void)setupWithDelegate:(id)arg1;
- (void)onServiceTerminate;
- (void)onServiceInit;

@end

