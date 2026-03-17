//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol IWAAudioService <NSObject>
+ (void)resumeOtherAppPlayingIfNeeded;
+ (_Bool)isPhoneCalling;
+ (_Bool)isInterrupting;
+ (void)syncWebViewAudioEvent:(NSString *)arg1;
+ (void)resumeBackgroundAudio;
+ (_Bool)pauseBackgroundAudio;
+ (_Bool)isBackgroundAudioPlayingOrWaiting;
+ (void)showInnerAppAudioConflictAlert;
+ (_Bool)isInnerAppAudioActive;
@end

