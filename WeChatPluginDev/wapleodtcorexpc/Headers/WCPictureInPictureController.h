//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class AVPictureInPictureController, AVPlayerLayer, NSString;
@protocol WCPictureInPictureDelegate;

@interface WCPictureInPictureController : NSObject
{
    _Bool _enablePictureInPictureSeekButton;
    int _taskId;
    AVPictureInPictureController *_pictureInPictureController;
    id <WCPictureInPictureDelegate> _delegate;
    long long _state;
    AVPlayerLayer *_playerLayer;
    long long _initTimeMs;
}

+ (_Bool)isPictureInPictureSupported;
- (void).cxx_destruct;
@property(nonatomic) long long initTimeMs; // @synthesize initTimeMs=_initTimeMs;
@property(nonatomic) __weak AVPlayerLayer *playerLayer; // @synthesize playerLayer=_playerLayer;
@property(nonatomic) int taskId; // @synthesize taskId=_taskId;
@property(nonatomic) _Bool enablePictureInPictureSeekButton; // @synthesize enablePictureInPictureSeekButton=_enablePictureInPictureSeekButton;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(nonatomic) __weak id <WCPictureInPictureDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) AVPictureInPictureController *pictureInPictureController; // @synthesize pictureInPictureController=_pictureInPictureController;
- (void)pictureInPictureController:(id)arg1 restoreUserInterfaceForPictureInPictureStopWithCompletionHandler:(CDUnknownBlockType)arg2;
- (void)pictureInPictureControllerDidStopPictureInPicture:(id)arg1;
- (void)pictureInPictureControllerWillStopPictureInPicture:(id)arg1;
- (void)pictureInPictureController:(id)arg1 failedToStartPictureInPictureWithError:(id)arg2;
- (void)pictureInPictureControllerDidStartPictureInPicture:(id)arg1;
- (void)pictureInPictureControllerWillStartPictureInPicture:(id)arg1;
- (id)makePipStateName:(long long)arg1;
- (void)resetPipController;
- (void)stopPictureInPicture;
- (void)startPictureInPicture;
@property(readonly, nonatomic, getter=isPictureInPictureActive) _Bool pictureInPictureActive;
@property(readonly, nonatomic, getter=isPictureInPicturePossible) _Bool pictureInPicturePossible;
- (void)observePipState;
- (void)changePipContentSource:(id)arg1;
- (void)dealloc;
- (void)initResource;
- (id)initWithPlayerLayer:(id)arg1;
- (id)initWithPipContentSource:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

