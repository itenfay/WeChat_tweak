//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSString, WSWebNativeVideoPlayerLogic;
@protocol WSWebNativeVideoPlayerLogicDelegate;

@interface WSWebNativeVideoPlayerView : UIView
{
    _Bool _shouldResumeWhenCallingPlayIfNeeded;
    unsigned int _nativeViewId;
    id <WSWebNativeVideoPlayerLogicDelegate> _delegate;
    WSWebNativeVideoPlayerLogic *_logic;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool shouldResumeWhenCallingPlayIfNeeded; // @synthesize shouldResumeWhenCallingPlayIfNeeded=_shouldResumeWhenCallingPlayIfNeeded;
@property(retain, nonatomic) WSWebNativeVideoPlayerLogic *logic; // @synthesize logic=_logic;
@property(readonly, nonatomic) __weak id <WSWebNativeVideoPlayerLogicDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) unsigned int nativeViewId; // @synthesize nativeViewId=_nativeViewId;
- (void)pauseIfNeeded;
- (void)playIfNeeded;
- (void)seek:(double)arg1;
- (void)setLoop:(_Bool)arg1;
- (void)setMuted:(_Bool)arg1;
- (void)setPlayerContentMode:(long long)arg1;
- (void)destroy;
- (void)stop;
- (void)pause;
- (void)play;
- (_Bool)isPlaying;
- (void)setVideoPath:(id)arg1;
- (void)setFinderDataItem:(id)arg1;
- (void)dealloc;
- (id)initWithViewId:(unsigned int)arg1 andPluginKey:(id)arg2 delegate:(id)arg3;
- (id)initWithViewId:(unsigned int)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

