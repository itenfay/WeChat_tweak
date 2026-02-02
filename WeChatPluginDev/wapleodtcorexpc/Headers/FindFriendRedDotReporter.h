//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FindFriendBussReporter, MMMainTableView, NSMutableDictionary, NSString, SessionReportInfo;

@interface FindFriendRedDotReporter : NSObject
{
    long long m_exptFlag;
    SessionReportInfo *m_reportInfo;
    FindFriendBussReporter *m_bussReporter;
    NSMutableDictionary *m_providers;
    _Bool m_init;
    MMMainTableView *m_tableView;
    void *m_mapSectionType;
    void *m_mapRowToRowTypeAlbum;
    void *m_mapRowToRowTypeSocial;
    void *m_mapRowToRowTypeMotion;
    void *m_mapRowToRowTypeSearch;
    void *m_mapRowToRowTypeOpen;
    void *m_mapRowToRowTypeWCO;
    void *m_mapRowToRowTypeAppBrand;
    void *m_mapRowToRowTypeFinder;
    NSMutableDictionary *m_cellCGRectCache;
    NSMutableDictionary *m_cellExposeFlag;
    NSMutableDictionary *m_flatMapCache;
    _Bool m_isAppearing;
    unsigned long long m_exposeType;
    unsigned long long m_checkExposeTimeMs;
}

- (void).cxx_destruct;
- (_Bool)initWCAopVc:(id)arg1;
- (id)flatAllRowData;
- (id)getAllRowDataFromCache;
- (void)checkAllEntryRowsIsExpose:(unsigned long long)arg1;
- (_Bool)checkEntryRowIsExpose:(id)arg1 andReason:(unsigned long long)arg2;
- (void)getRedDotInfo:(id)arg1;
- (id)getEntryRowType:(id)arg1;
- (void)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)onFindFriendEntryViewControllScrollViewDidScroll:(id)arg1;
- (void)onFindFriendEntryViewControllScrollViewDidEndDecelerating:(id)arg1;
- (void)onFindFriendEntryViewControllScrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)onFindFriendEntryViewControllWillDisappear;
- (void)onFindFriendEntryViewControllAppear;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)onEnterBackground;
- (void)onFindFriendEntryViewControllDidDisappear;
- (void)exitFindFriendsTopVcPage:(id)arg1 andPageId:(unsigned long long)arg2;
- (void)onEnterForeground;
- (void)onFindFriendEntryViewControllWillAppear;
- (void)enterFindFriendsTopVcPage:(id)arg1 andPageId:(unsigned long long)arg2;
- (void)setMTableView:(id)arg1 andMapRowPointer:(void *)arg2 andVC:(id)arg3;
- (void)setMapRowPointer:(void *)arg1 andSectionType:(unsigned long long)arg2;
- (void)put:(id)arg1 andEntryRowType:(unsigned long long)arg2;
- (void)putCommonProvider:(unsigned long long)arg1 andPaths:(id)arg2;
- (void)initProvider;
- (void)onExptItemListChange;
- (void)readExptConfig;
- (_Bool)needReport;
- (void)reset;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

