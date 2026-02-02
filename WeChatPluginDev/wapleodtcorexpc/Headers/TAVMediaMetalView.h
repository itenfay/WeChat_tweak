//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class AVPlayer, MTKView, NSLayoutConstraint, NSString;

@interface TAVMediaMetalView : UIView
{
    _Bool _shouldAnimation;
    _Bool _readyForDisplay;
    unsigned long long _fillMode;
    AVPlayer *_player;
    MTKView *_mtkView;
    NSLayoutConstraint *_widthConstraint;
    NSLayoutConstraint *_heightConstraint;
    NSLayoutConstraint *_centerXConstraint;
    NSLayoutConstraint *_centerYConstraint;
    struct CGSize _nextMTKViewSize;
    struct CGRect _videoRect;
}

+ (_Bool)requiresConstraintBasedLayout;
- (void).cxx_destruct;
@property(nonatomic) struct CGRect videoRect; // @synthesize videoRect=_videoRect;
@property(nonatomic) struct CGSize nextMTKViewSize; // @synthesize nextMTKViewSize=_nextMTKViewSize;
@property(retain, nonatomic) NSLayoutConstraint *centerYConstraint; // @synthesize centerYConstraint=_centerYConstraint;
@property(retain, nonatomic) NSLayoutConstraint *centerXConstraint; // @synthesize centerXConstraint=_centerXConstraint;
@property(retain, nonatomic) NSLayoutConstraint *heightConstraint; // @synthesize heightConstraint=_heightConstraint;
@property(retain, nonatomic) NSLayoutConstraint *widthConstraint; // @synthesize widthConstraint=_widthConstraint;
@property(nonatomic, getter=isReadyForDisplay) _Bool readyForDisplay; // @synthesize readyForDisplay=_readyForDisplay;
@property(retain, nonatomic) MTKView *mtkView; // @synthesize mtkView=_mtkView;
@property(nonatomic) _Bool shouldAnimation; // @synthesize shouldAnimation=_shouldAnimation;
@property(nonatomic) __weak AVPlayer *player; // @synthesize player=_player;
@property(nonatomic) unsigned long long fillMode; // @synthesize fillMode=_fillMode;
- (void)refreshView;
@property(nonatomic, getter=isPaused) _Bool paused;
- (void)updateConstraints;
- (void)updateInputTextureSize:(struct CGSize)arg1;
- (void)updateConstraintsAnimation;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

