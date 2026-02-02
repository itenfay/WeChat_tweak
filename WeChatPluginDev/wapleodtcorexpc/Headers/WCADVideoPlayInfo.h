//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WCADVideoPlayInfo : NSObject
{
    int playCount;
    unsigned long long startPlayTime;
    unsigned long long endPlayTime;
    unsigned long long playTotalTime;
    unsigned long long videoTotalTime;
    long long playMode;
    long long playOrientation;
    unsigned long long _currentPlaybackTime;
    unsigned long long _totalPlaybackTime;
}

@property(nonatomic) unsigned long long totalPlaybackTime; // @synthesize totalPlaybackTime=_totalPlaybackTime;
@property(nonatomic) unsigned long long currentPlaybackTime; // @synthesize currentPlaybackTime=_currentPlaybackTime;
@property(nonatomic) long long playOrientation; // @synthesize playOrientation;
@property(nonatomic) long long playMode; // @synthesize playMode;
@property(nonatomic) unsigned long long videoTotalTime; // @synthesize videoTotalTime;
@property(nonatomic) unsigned long long playTotalTime; // @synthesize playTotalTime;
@property(nonatomic) unsigned long long endPlayTime; // @synthesize endPlayTime;
@property(nonatomic) unsigned long long startPlayTime; // @synthesize startPlayTime;
@property(nonatomic) int playCount; // @synthesize playCount;
- (unsigned long long)fetchTotalPlaybackTime;
- (void)mergeTotalPlaybackTime;
- (id)init;

@end

