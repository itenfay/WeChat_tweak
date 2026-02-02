//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@protocol WSWebNativeVideoPlayerLogicDelegate;

@interface WSWebNativeVideoPlayerLogic : NSObject
{
    unsigned int _nativeViewId;
    id <WSWebNativeVideoPlayerLogicDelegate> _delegate;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) __weak id <WSWebNativeVideoPlayerLogicDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) unsigned int nativeViewId; // @synthesize nativeViewId=_nativeViewId;
- (void)seek:(double)arg1;
- (void)setLoop:(_Bool)arg1;
- (void)setMuted:(_Bool)arg1;
- (void)setPlayerContentMode:(long long)arg1;
- (void)destroy;
- (void)stop;
- (void)pause;
- (void)play;
- (_Bool)isPlaying;
- (id)createPlayerView:(struct CGRect)arg1;
- (id)initWithViewId:(unsigned int)arg1 andDelegate:(id)arg2;

@end

