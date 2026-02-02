//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WMPFManager : NSObject
{
}

+ (id)sharedManager;
- (void)onWeAppServiceClosed;
- (void)muteVideo:(_Bool)arg1;
- (void)resumeVideo;
- (void)pauseVideo;
- (void)resumeLivePush;
- (void)pauseLivePush;
- (void)resumeLivePlay;
- (void)pauseLivePlay;
- (void)audioSessionInterruptionEnd;
- (void)audioSessionInterruptionBegan;
- (void)innerAppAudioInterruptionEnd;
- (void)innerAppAudioInterruptionBegan;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

