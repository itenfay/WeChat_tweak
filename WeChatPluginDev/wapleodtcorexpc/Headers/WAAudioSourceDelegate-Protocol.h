//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSError;
@protocol WAAudioSource;

@protocol WAAudioSourceDelegate <NSObject>
- (void)sourceDidError:(id <WAAudioSource>)arg1 error:(NSError *)arg2;
- (void)sourceDidFinishPlaying:(id <WAAudioSource>)arg1;
- (void)sourceSeeked:(id <WAAudioSource>)arg1;
- (void)sourceSeeking:(id <WAAudioSource>)arg1;
- (void)sourceStop:(id <WAAudioSource>)arg1;
- (void)sourcePaused:(id <WAAudioSource>)arg1;
- (void)sourceStartPlaying:(id <WAAudioSource>)arg1;
@end

