//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary;

@interface TingLyricsManager : NSObject
{
    NSMutableDictionary *_resolverList;
    NSMutableArray *_pullingLyricsList;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *pullingLyricsList; // @synthesize pullingLyricsList=_pullingLyricsList;
@property(retain, nonatomic) NSMutableDictionary *resolverList; // @synthesize resolverList=_resolverList;
- (id)lyricsFor:(id)arg1 withCurrentTime:(double)arg2 preferCount:(unsigned long long)arg3;
- (id)lyricFor:(id)arg1 withCurrentTime:(double)arg2;
- (id)resolverFor:(id)arg1;
- (_Bool)addResolverFor:(id)arg1 withLyrics:(id)arg2;
- (void)addResolverForListenId:(id)arg1;
- (void)addResolverForListenId:(id)arg1 recommendInfo:(id)arg2 presetLyric:(id)arg3;
- (void)addResolverForListenId:(id)arg1 presetLyric:(id)arg2;
- (void)addResolverForTingItem:(id)arg1;

@end

