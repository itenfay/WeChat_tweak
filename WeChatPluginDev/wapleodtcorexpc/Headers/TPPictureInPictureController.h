//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class AVPictureInPictureController, AVPlayerLayer, NSString;
@protocol TPPictureInPictureDelegate;

@interface TPPictureInPictureController : NSObject
{
    AVPictureInPictureController *_pictureInPictureController;
    long long _state;
    AVPlayerLayer *_playerLayer;
    _Bool _preloadAVPIPController;
    id <TPPictureInPictureDelegate> _delegate;
    long long _pictureInPictureStartDelayMs;
}

+ (_Bool)isPictureInPictureSupported;
- (void).cxx_destruct;
@property(nonatomic) _Bool preloadAVPIPController; // @synthesize preloadAVPIPController=_preloadAVPIPController;
@property(nonatomic) long long pictureInPictureStartDelayMs; // @synthesize pictureInPictureStartDelayMs=_pictureInPictureStartDelayMs;
@property(nonatomic) __weak id <TPPictureInPictureDelegate> delegate; // @synthesize delegate=_delegate;
- (void)pictureInPictureController:(id)arg1 restoreUserInterfaceForPictureInPictureStopWithCompletionHandler:(CDUnknownBlockType)arg2;
- (void)pictureInPictureControllerDidStopPictureInPicture:(id)arg1;
- (void)pictureInPictureControllerWillStopPictureInPicture:(id)arg1;
- (void)pictureInPictureController:(id)arg1 failedToStartPictureInPictureWithError:(id)arg2;
- (void)pictureInPictureControllerDidStartPictureInPicture:(id)arg1;
- (void)pictureInPictureControllerWillStartPictureInPicture:(id)arg1;
- (id)makePipStateName:(long long)arg1;
- (void)resetPipController;
- (void)stopPictureInPictureNotifyStopAsync:(_Bool)arg1;
- (void)startPictureInPicture;
@property(readonly, nonatomic, getter=isPictureInPictureSuspended) _Bool pictureInPictureSuspended;
@property(readonly, nonatomic, getter=isPictureInPictureActive) _Bool pictureInPictureActive;
@property(readonly, nonatomic, getter=isPictureInPicturePossible) _Bool pictureInPicturePossible;
- (void)dealloc;
- (id)initWithPlayerLayer:(id)arg1 preloadAVPIPController:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

