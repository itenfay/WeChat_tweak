//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface FlutterTingPlayerApiImplementaion : NSObject
{
    int _scene;
}

@property(nonatomic) int scene; // @synthesize scene=_scene;
- (id)canPlayMusicWithError:(id *)arg1;
- (void)clearHistoryWithError:(id *)arg1;
- (id)getHistoryWithError:(id *)arg1;
- (id)getDurationWithError:(id *)arg1;
- (id)getCurrentPositionWithError:(id *)arg1;
- (void)seekTimeMs:(id)arg1 error:(id *)arg2;
- (void)stopWithError:(id *)arg1;
- (void)resumeWithError:(id *)arg1;
- (void)pauseWithError:(id *)arg1;
- (void)playInfo:(id)arg1 error:(id *)arg2;
- (id)getCurrentMusicWithError:(id *)arg1;
- (id)player;
- (void)onAttachedToEngine:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

