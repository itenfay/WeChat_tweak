//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FinderMusicBaikeSummary, NSString;

@interface WCFinderProfileMusicianInfo : NSObject
{
    _Bool _hasPlaylist;
    FinderMusicBaikeSummary *_summary;
}

+ (void)initialize;
+ (void)PBArrayAdd_hasPlaylist;
+ (void)PBArrayAdd_summary;
- (void).cxx_destruct;
@property(nonatomic) _Bool hasPlaylist; // @synthesize hasPlaylist=_hasPlaylist;
@property(retain, nonatomic) FinderMusicBaikeSummary *summary; // @synthesize summary=_summary;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

