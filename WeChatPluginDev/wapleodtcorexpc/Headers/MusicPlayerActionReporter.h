//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMMusicInfo, NSString;

@interface MusicPlayerActionReporter : NSObject
{
    MMMusicInfo *_musicInfo;
    NSString *_sessionId;
    double _playRate;
}

- (void).cxx_destruct;
@property(nonatomic) double playRate; // @synthesize playRate=_playRate;
@property(copy, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
@property(retain, nonatomic) MMMusicInfo *musicInfo; // @synthesize musicInfo=_musicInfo;
- (id)stringFromState:(unsigned long long)arg1;
- (id)traceLogWithStateState:(unsigned long long)arg1 currentTime:(double)arg2;
- (void)reportWithState:(unsigned long long)arg1 duartion:(double)arg2 currenTime:(double)arg3;
- (id)init;

@end

