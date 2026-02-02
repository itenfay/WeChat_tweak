//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface MJMovieComposingDraftManager : NSObject
{
    NSMutableDictionary *_finderDraftsByID;
    NSMutableDictionary *_weGameDraftsByID;
}

+ (id)defaultMMKV;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *weGameDraftsByID; // @synthesize weGameDraftsByID=_weGameDraftsByID;
@property(retain, nonatomic) NSMutableDictionary *finderDraftsByID; // @synthesize finderDraftsByID=_finderDraftsByID;
- (id)_draftsByIDWithEntryScene:(long long)arg1;
- (void)removeAllDraftsWithEntryScene:(long long)arg1 excludeDraftID:(id)arg2;
- (void)removeAllDraftsWithEntryScene:(long long)arg1;
- (void)removeDraftWithID:(id)arg1;
- (void)clearOutdatedDraftsWithEntryScene:(long long)arg1;
- (id)latestDraftWithEntryScene:(long long)arg1;
- (void)loadAllDrafts;
- (_Bool)saveDraft:(id)arg1 withEntryScene:(long long)arg2;
- (void)setupDraftsByIDs;
- (id)init;

@end

