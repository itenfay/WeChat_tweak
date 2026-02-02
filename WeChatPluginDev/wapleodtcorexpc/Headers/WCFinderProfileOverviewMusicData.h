//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMListenCategoryItem, NSArray;

@interface WCFinderProfileOverviewMusicData : NSObject
{
    NSArray *_playList;
    MMListenCategoryItem *_musicCategory;
    NSArray *_musicList;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *musicList; // @synthesize musicList=_musicList;
@property(retain, nonatomic) MMListenCategoryItem *musicCategory; // @synthesize musicCategory=_musicCategory;
@property(retain, nonatomic) NSArray *playList; // @synthesize playList=_playList;

@end

