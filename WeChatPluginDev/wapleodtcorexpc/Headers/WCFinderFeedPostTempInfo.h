//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class RecommendedMusicInfo;

@interface WCFinderFeedPostTempInfo : NSObject
{
    _Bool _isOnPostLoading;
    RecommendedMusicInfo *_musicInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) RecommendedMusicInfo *musicInfo; // @synthesize musicInfo=_musicInfo;
@property(nonatomic) _Bool isOnPostLoading; // @synthesize isOnPostLoading=_isOnPostLoading;

@end

