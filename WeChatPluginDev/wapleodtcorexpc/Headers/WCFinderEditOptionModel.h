//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class RecommendedMusicInfo;

@interface WCFinderEditOptionModel : NSObject
{
    _Bool _forbiddenFinderLongVideoEntry;
    RecommendedMusicInfo *_patMusicInfo;
    unsigned long long _enterScene;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long enterScene; // @synthesize enterScene=_enterScene;
@property(nonatomic) _Bool forbiddenFinderLongVideoEntry; // @synthesize forbiddenFinderLongVideoEntry=_forbiddenFinderLongVideoEntry;
@property(retain, nonatomic) RecommendedMusicInfo *patMusicInfo; // @synthesize patMusicInfo=_patMusicInfo;

@end

