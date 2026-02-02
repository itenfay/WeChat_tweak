//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, SessionFoldCache, SessionSortCache;

@interface SessionSortLogic : NSObject
{
    SessionSortCache *_oSessionSortCache;
    SessionFoldCache *_oSessionFoldCache;
    NSString *_oldCachePath;
    NSString *_newCachePath;
    NSString *_foldCachePath;
}

- (void).cxx_destruct;
- (_Bool)isFolded;
- (long long)foldSessionCount;
- (_Bool)isSessionFold:(id)arg1;
- (void)unfoldAllSessions;
- (void)unfoldSessions:(id)arg1;
- (void)unfoldSession:(id)arg1;
- (void)foldSessionByName:(id)arg1;
- (void)setFoldWithSessions:(id)arg1;
- (void)setMergeFlag;
- (_Bool)hasMergeFlag;
- (unsigned long long)getTopSessionCount;
- (_Bool)isTopSessionCountExceed;
- (_Bool)isTopSession:(id)arg1;
- (void)updateSortTimeForUser:(id)arg1;
- (id)getSortTimeForUser:(id)arg1;
- (id)getUntopTime:(id)arg1;
- (id)getTopTime:(id)arg1;
- (void)RemoveUntopSession;
- (void)UntopSession:(id)arg1;
- (void)TopSession:(id)arg1;
- (id)getCurrentDate;
- (void)SaveCache;
- (void)LoadCache;
- (void)loadFoldDataInternal;
- (void)loadSortDataInternal;
- (void)saveFoldDataInternal;
- (void)saveSortDataInternal;
- (id)init;

@end

