//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MVPlayerTimeRange;

@interface MVPlayerConfiguration : NSObject
{
    _Bool _shouldShowAlbumImage;
    _Bool _resetWhileEpisodeIndexChanged;
    long long _initailTimeInSeconds;
    unsigned long long _actionAfterDurationAvailable;
    MVPlayerTimeRange *_loopTimeRange;
    double _initalTime;
    unsigned long long _minimizationWindowUIStyle;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long minimizationWindowUIStyle; // @synthesize minimizationWindowUIStyle=_minimizationWindowUIStyle;
@property(nonatomic) double initalTime; // @synthesize initalTime=_initalTime;
@property(retain, nonatomic) MVPlayerTimeRange *loopTimeRange; // @synthesize loopTimeRange=_loopTimeRange;
@property(nonatomic) _Bool resetWhileEpisodeIndexChanged; // @synthesize resetWhileEpisodeIndexChanged=_resetWhileEpisodeIndexChanged;
@property(nonatomic) _Bool shouldShowAlbumImage; // @synthesize shouldShowAlbumImage=_shouldShowAlbumImage;
@property(nonatomic) unsigned long long actionAfterDurationAvailable; // @synthesize actionAfterDurationAvailable=_actionAfterDurationAvailable;
@property(nonatomic) long long initailTimeInSeconds; // @synthesize initailTimeInSeconds=_initailTimeInSeconds;
- (id)init;

@end

