//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface PAGAnimator : NSObject
{
    struct shared_ptr<pag::PAGAnimator> animator;
    struct shared_ptr<pag::AnimatorListener> animatorListener;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)update;
- (void)cancel;
- (void)start;
- (_Bool)isRunning;
- (void)setProgress:(double)arg1;
- (double)progress;
- (void)setRepeatCount:(int)arg1;
- (int)repeatCount;
- (void)setDuration:(long long)arg1;
- (long long)duration;
- (void)setSync:(_Bool)arg1;
- (_Bool)isSync;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
- (id)initWithUpdater:(id)arg1;

@end

