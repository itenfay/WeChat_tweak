//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MISSING_TYPE;

@interface _TtC6WeChat19MagicSnsTimelineBiz
{
    MISSING_TYPE *snsEmojiDelegate;
    MISSING_TYPE *snsCurrentScene;
    MISSING_TYPE *pkgMgr;
}

- (void).cxx_destruct;
- (id)init;
- (void)onCanvasViewFirstFrameRendered:(unsigned int)arg1;
- (void)onCanvasViewCreated:(unsigned int)arg1 view:(id)arg2;
- (void)onDestroy:(int)arg1;
- (void)onMainScriptInjected:(id)arg1;
- (void)onCreated;
- (void)destroy;
- (void)onFireworkPlayEndWithId:(id)arg1;
- (id)getFireworkInfoByIDWithId:(id)arg1;
- (void)onFireworkSceneChangeWithScene:(long long)arg1 fireworkPlayRect:(struct CGRect)arg2;
- (void)sendFireWorkInfoEventWithInfo:(id)arg1;
- (id)getMagicEmojiViewHolder;
- (void)start;

@end

