//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@protocol WeMediaDelegate;

@interface WeMediaApi : NSObject
{
    void *runtime;
    struct OpaqueJSContext *js_context;
    id <WeMediaDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <WeMediaDelegate> delegate; // @synthesize delegate=_delegate;
- (void)releaseContext;
- (_Bool)isAudioPlaying;
- (void)startAllAudioPlayer;
- (void)stopAllAudioPlayer;
- (void)onForeground;
- (void)onBackground;
- (void)onSuspend;
- (void)setJSContext:(struct OpaqueJSContext *)arg1 parent:(struct OpaqueJSValue *)arg2;
- (void)setLoglvl:(int)arg1;
- (void)dealloc;
- (id)init;

@end

