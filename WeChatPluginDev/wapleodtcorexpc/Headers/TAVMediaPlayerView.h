//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class AVPlayer, NSString;

@interface TAVMediaPlayerView : UIView
{
    _Bool _shouldAnimation;
    _Bool _paused;
    unsigned long long _fillMode;
    AVPlayer *_player;
}

+ (Class)layerClass;
- (void).cxx_destruct;
@property(nonatomic, getter=isPaused) _Bool paused; // @synthesize paused=_paused;
@property(nonatomic) _Bool shouldAnimation; // @synthesize shouldAnimation=_shouldAnimation;
@property(nonatomic) unsigned long long fillMode; // @synthesize fillMode=_fillMode;
- (void)refreshView;
@property(readonly, nonatomic) struct CGRect videoRect;
@property(nonatomic) __weak AVPlayer *player; // @synthesize player=_player;
- (void)updateLayerFillMode;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

