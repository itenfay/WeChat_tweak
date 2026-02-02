//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMFinderLiveKTVSongItem, NSArray;

@interface MMFinderLiveKTVResDownloadTask : NSObject
{
    _Bool _needsSongResources;
    MMFinderLiveKTVSongItem *_songItem;
    NSArray *_necessaryResources;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool needsSongResources; // @synthesize needsSongResources=_needsSongResources;
@property(retain, nonatomic) NSArray *necessaryResources; // @synthesize necessaryResources=_necessaryResources;
@property(retain, nonatomic) MMFinderLiveKTVSongItem *songItem; // @synthesize songItem=_songItem;

@end

