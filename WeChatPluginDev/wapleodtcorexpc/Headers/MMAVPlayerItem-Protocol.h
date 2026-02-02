//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol MMAVPlayerItem <NSObject>
- (void)onResume;
- (void)willStack;
- (void)silentPlayImmediately;
- (_Bool)performClear;
- (_Bool)performFullPlayWithMute:(_Bool)arg1;
- (_Bool)performFullPlay;
- (_Bool)performFullLoad;
- (void)performSilentPlay;
- (void)performPauseForce:(_Bool)arg1;
- (void)performLoadItem:(NSString *)arg1;
@end

