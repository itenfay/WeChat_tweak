//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMListenCategoryItem, NSArray, NSString;

@interface WCFinderProfileOverviewMusicCache : NSObject
{
    NSArray *_playList;
    MMListenCategoryItem *_musicCategory;
    NSArray *_musicList;
    long long _musicCnt;
}

+ (void)initialize;
+ (void)PBArrayAdd_musicCnt;
+ (void)PBArrayAdd_musicList;
+ (void)PBArrayAdd_musicCategory;
+ (void)PBArrayAdd_playList;
- (void).cxx_destruct;
@property(nonatomic) long long musicCnt; // @synthesize musicCnt=_musicCnt;
@property(retain, nonatomic) NSArray *musicList; // @synthesize musicList=_musicList;
@property(retain, nonatomic) MMListenCategoryItem *musicCategory; // @synthesize musicCategory=_musicCategory;
@property(retain, nonatomic) NSArray *playList; // @synthesize playList=_playList;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

