//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class _TtC6WeChat15MagicRewardView;

@interface MMLiveMagicRewardResMemoryMonitorTask
{
    _Bool _isResMemoryLoaded;
    _Bool _isUnLoading;
    _Bool _enableAutoUnload;
    _TtC6WeChat15MagicRewardView *_magicRewardView;
    CDUnknownBlockType _onResMemoryLoadedCallback;
    CDUnknownBlockType _onResMemoryUnLoadedCallback;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType onResMemoryUnLoadedCallback; // @synthesize onResMemoryUnLoadedCallback=_onResMemoryUnLoadedCallback;
@property(copy, nonatomic) CDUnknownBlockType onResMemoryLoadedCallback; // @synthesize onResMemoryLoadedCallback=_onResMemoryLoadedCallback;
@property(nonatomic) _Bool enableAutoUnload; // @synthesize enableAutoUnload=_enableAutoUnload;
@property(nonatomic) _Bool isUnLoading; // @synthesize isUnLoading=_isUnLoading;
@property(nonatomic) _Bool isResMemoryLoaded; // @synthesize isResMemoryLoaded=_isResMemoryLoaded;
@property(nonatomic) __weak _TtC6WeChat15MagicRewardView *magicRewardView; // @synthesize magicRewardView=_magicRewardView;
- (id)description;
- (void)restartMonitorIfNeedAfterMemoryUsed:(id)arg1;
- (void)onAnimationTimeoutWithView:(id)arg1;
- (void)onAnimationRepeatWithView:(id)arg1;
- (void)onAnimationEndWithView:(id)arg1;
- (void)onAnimationCancelWithView:(id)arg1;
- (void)onAnimationStartWithView:(id)arg1;
- (void)onResUnloadedWithView:(id)arg1;
- (void)onResLoadedWithView:(id)arg1;
- (void)tryUnLoadMemory:(CDUnknownBlockType)arg1;
- (void)cancel;
- (void)checkMemory;
- (void)configListeners;
- (id)initWithRewardView:(id)arg1 enableAutoUnLoad:(_Bool)arg2;

@end

