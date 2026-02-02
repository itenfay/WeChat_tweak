//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class DataReportSubstitutePage, NSMutableArray, NSMutableDictionary, NSString;

@interface DataReportPageContext : NSObject
{
    DataReportSubstitutePage *m_lastPage;
    DataReportSubstitutePage *m_curPage;
    NSMutableDictionary *m_subPageMaps;
    NSMutableDictionary *m_fullSubPageMap;
    unsigned long long m_pageStep;
    NSString *m_curBizId;
    NSString *m_lastBizId;
    NSString *m_lastClickViewId;
    unsigned long long m_lastClickViewTime;
    NSString *m_lastReportEventId;
    NSString *m_syncLastClickViewId;
    NSMutableArray *m_syncPageStack;
    NSMutableDictionary *m_contextIdWithBizIds;
    NSMutableDictionary *m_contextIdWithSourceSessionIds;
    NSMutableDictionary *m_sessionIdWithLastClickViewIds;
    NSMutableDictionary *m_sessionIdMap;
    NSMutableArray *m_sessionIdList;
    NSMutableDictionary *m_subSessionIdList;
    NSMutableDictionary *m_sessionParams;
    DataReportSubstitutePage *m_curBizPage;
    NSMutableDictionary *m_bizParams;
    NSMutableDictionary *m_nextBizParams;
    NSMutableDictionary *m_nextSessionParams;
}

- (void).cxx_destruct;
- (void)updatePageInfo:(id)arg1 eventId:(id)arg2;
- (void)clearPage:(id)arg1;
- (void)subPageOut:(id)arg1;
- (void)subPageIn:(id)arg1 time:(unsigned long long)arg2;
- (void)updatePage:(id)arg1 time:(unsigned long long)arg2;
- (void)subSessionOut:(id)arg1;
- (void)subSessionIn:(id)arg1;
- (void)sessionOut:(id)arg1;
- (void)sessionIn:(id)arg1 time:(unsigned long long)arg2;
- (void)bizOut:(id)arg1;
- (void)bizIn:(id)arg1 time:(unsigned long long)arg2;
- (void)viewClk:(id)arg1 time:(unsigned long long)arg2;
- (void)resetNextSessionParams:(id)arg1;
- (void)removeNextSessionParams:(id)arg1;
- (void)removeNextSessionParam:(id)arg1 key:(id)arg2;
- (void)setNextSessionParams:(id)arg1 params:(id)arg2 nextPageId:(unsigned long long)arg3;
- (void)setNextSessionParams:(id)arg1 params:(id)arg2;
- (void)setNextSessionParam:(id)arg1 key:(id)arg2 value:(id)arg3;
- (id)getNextSessionParams:(id)arg1;
- (void)resetNextBizParams:(id)arg1;
- (void)removeNextBizParams:(id)arg1;
- (void)removeNextBizParam:(id)arg1 key:(id)arg2;
- (void)setNextBizParams:(id)arg1 params:(id)arg2 nextBizGroupId:(unsigned long long)arg3;
- (void)setNextBizParams:(id)arg1 params:(id)arg2;
- (void)setNextBizParam:(id)arg1 key:(id)arg2 value:(id)arg3;
- (id)getNextBizParams:(id)arg1;
- (id)getCurSessionParams;
- (void)resetSessionParams:(id)arg1;
- (void)removeSessionParams:(id)arg1;
- (void)removeSessionParam:(id)arg1 key:(id)arg2;
- (void)setSessionParams:(id)arg1 params:(id)arg2;
- (void)setSessionParam:(id)arg1 key:(id)arg2 value:(id)arg3;
- (id)getSessionParams:(id)arg1;
- (id)getCurBizParams;
- (void)resetBizParams:(id)arg1;
- (void)removeBizParams:(id)arg1;
- (void)removeBizParam:(id)arg1 key:(id)arg2;
- (void)setBizParams:(id)arg1 params:(id)arg2;
- (void)setBizParam:(id)arg1 key:(id)arg2 value:(id)arg3;
- (id)getBizParams:(id)arg1;
- (void)setSyncLastClickViewId:(id)arg1;
- (id)getSyncLastClickViewId;
- (id)getSyncSourceViewId;
- (id)getSyncCurPageId;
- (void)syncPageResume:(unsigned long long)arg1 pageId:(id)arg2;
- (id)getCustomSessionIds;
- (id)getSessionIds;
- (void)setLastReportEventId:(id)arg1;
- (id)getLastReportEventId;
- (id)getLastClickViewId;
- (id)getLastBizId;
- (id)getCurBizId;
- (void)removeSubPage:(id)arg1 parentPage:(id)arg2;
- (void)addSubPage:(id)arg1 parentPage:(id)arg2;
- (id)getSubPages:(id)arg1;
- (id)getFullSubPage:(id)arg1;
- (id)getCurPage;
- (id)getLastPage;
- (id)getAllContextIds:(unsigned long long)arg1;
- (void)clearContextId:(unsigned long long)arg1;
- (id)getContextId:(unsigned long long)arg1 lastSessionCount:(unsigned long long)arg2;
- (void)genContextId:(unsigned long long)arg1 sourceType:(unsigned long long)arg2;
- (id)init;

@end

