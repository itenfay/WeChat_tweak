//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface FlutterMusicPlayerApiImplementaion : NSObject
{
    unsigned long long _uiStyle;
}

+ (long long)flutterValueFromState:(unsigned long long)arg1;
@property(nonatomic) unsigned long long uiStyle; // @synthesize uiStyle=_uiStyle;
- (id)getCurrentStateWithError:(id *)arg1;
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
- (id)playerManager;
- (void)onAttachedToEngine:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

