//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString, SnsMusicStorage;

@interface MMMusicListMgr : NSObject
{
    SnsMusicStorage *m_snsMusicStorage;
    NSMutableArray *m_musicInfoArr;
    long long m_curMusicListSource;
    _Bool m_isSnsMusicDelMatters;
    NSString *m_curUserName;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *m_musicInfoArr; // @synthesize m_musicInfoArr;
- (long long)getMusicListSource;
- (void)onHomepageUpdate:(long long)arg1 withAdded:(id)arg2 andChanged:(id)arg3 andDeleted:(id)arg4 andTip:(id)arg5;
- (void)onDataChangedWithAdded:(id)arg1 andChanged:(id)arg2 andDeleted:(id)arg3;
- (void)updateMusicListBySource:(long long)arg1;
- (void)clearSnsMusicStorageIfNeed;
- (void)deleteSnsMusicItem:(id)arg1;
- (id)getSnsMusicStorage;
- (void)saveSnsMusicStorage;
- (void)addHomePageMusicItems;
- (void)loadSnsMusicStorage;
- (_Bool)isMusicStorageContainsItem:(id)arg1;
- (void)removeDuplicateItems;
- (void)updateMusicInfoArray;
- (id)init;

@end

