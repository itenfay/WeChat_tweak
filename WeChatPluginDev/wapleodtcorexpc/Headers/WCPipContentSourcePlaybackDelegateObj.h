//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;
@protocol AVPictureInPictureSampleBufferPlaybackDelegate;

@interface WCPipContentSourcePlaybackDelegateObj : NSObject
{
    NSObject<AVPictureInPictureSampleBufferPlaybackDelegate> *_delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak NSObject<AVPictureInPictureSampleBufferPlaybackDelegate> *delegate; // @synthesize delegate=_delegate;
- (CDStruct_e83c9415)pictureInPictureControllerTimeRangeForPlayback:(id)arg1;
- (_Bool)pictureInPictureControllerIsPlaybackPaused:(id)arg1;
- (void)pictureInPictureController:(id)arg1 skipByInterval:(CDStruct_1b6d18a9)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)pictureInPictureController:(id)arg1 setPlaying:(_Bool)arg2;
- (void)pictureInPictureController:(id)arg1 didTransitionToRenderSize:(CDStruct_1ef3fb1f)arg2;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

