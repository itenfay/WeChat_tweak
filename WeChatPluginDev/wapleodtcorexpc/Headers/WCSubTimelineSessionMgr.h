//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMTableView, NSString, UIWindow, WCTimelineSessionStatItem;
@protocol OS_dispatch_queue;

@interface WCSubTimelineSessionMgr : NSObject
{
    MMTableView *m_tableView;
    WCTimelineSessionStatItem *sessionStatItem;
    unsigned int pId;
    NSString *pName;
    unsigned int seq;
    NSObject<OS_dispatch_queue> *queue;
    double screenHeight;
    struct CGRect statusRect;
    UIWindow *uiWindow;
    double statusNavHeight;
    double realScreenHeight;
    unsigned long long lastEnterBackgroundTime;
    _Bool isNowInTimelinePage;
    _Bool isHasScroll;
    unsigned long long reloadTime;
    NSString *nowGroupId;
}

- (void).cxx_destruct;
- (id)findTableView:(id)arg1;
- (long long)tsTableView:(id)arg1 calcDataItemIndex:(long long)arg2;
- (long long)tsTableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tsTableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)calcFeedExposureSizeAndTime:(id)arg1 withTime:(unsigned long long)arg2;
- (void)calcFeedExposureSizeAndTime:(id)arg1 withEntered:(_Bool)arg2 withTime:(unsigned long long)arg3;
- (void)calcFeedExposureSizeAndTime:(id)arg1 withStayed:(_Bool)arg2 withTime:(unsigned long long)arg3;
- (id)getTimelineExposureFeedId:(id)arg1;
- (id)getTimelineSessionStatItem;
- (id)getTableView;
- (void)initTableViewAndHeight:(id)arg1;
- (void)onScrollViewDidScroll:(id)arg1;
- (void)onScrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)onScrollViewDidEndDecelerating:(id)arg1;
- (id)getFeedExposureDataAttr:(id)arg1;
- (id)getTimelineSessionStatItemAttr:(id)arg1 withDataArrays:(id)arg2 withSubSeq:(unsigned long long)arg3 withSubSeqSum:(unsigned long long)arg4;
- (id)getTimelineSessionStatItemAttrStr:(id)arg1;
- (id)formatJsonStr:(id)arg1;
- (void)reportSessionStatItem:(unsigned long long)arg1;
- (void)reconstructSessionStatItem:(unsigned long long)arg1;
- (void)exitTimelinePage;
- (void)enterTimelinePage;
- (void)onViewDidDisappear:(_Bool)arg1;
- (void)onViewDidAppear:(_Bool)arg1 withVC:(id)arg2;
- (void)onReloadDataWrap;
- (void)onEnterForeground;
- (void)onEnterBackground;
- (void)onSessionEnd;
- (void)onSessionStart;
- (void)onViewWillBePushed:(_Bool)arg1;
- (void)onViewWillBePoped:(_Bool)arg1;
- (void)setGroupId:(id)arg1;
- (void)dealloc;
- (id)init;

@end

