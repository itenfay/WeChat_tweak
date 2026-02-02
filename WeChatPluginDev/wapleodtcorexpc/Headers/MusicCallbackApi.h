//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;
@protocol FlutterBinaryMessenger;

@interface MusicCallbackApi : NSObject
{
    NSObject<FlutterBinaryMessenger> *_binaryMessenger;
    NSString *_messageChannelSuffix;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *messageChannelSuffix; // @synthesize messageChannelSuffix=_messageChannelSuffix;
@property(retain, nonatomic) NSObject<FlutterBinaryMessenger> *binaryMessenger; // @synthesize binaryMessenger=_binaryMessenger;
- (void)onPlayProgressChangedPosition:(double)arg1 totalDuration:(double)arg2 completion:(CDUnknownBlockType)arg3;
- (void)onSeekedInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)onSeekingInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)onResumePlayInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)onStartPlayInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)onPausePlayInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)onStopPlayInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)onEndedPlayInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithBinaryMessenger:(id)arg1 messageChannelSuffix:(id)arg2;
- (id)initWithBinaryMessenger:(id)arg1;

@end

