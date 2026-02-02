//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class CContact, FTSIntelligentMsgSearchMgr, FTSIntelligentMsgSearchResultHandler, NSArray, NSMutableArray, NSMutableDictionary, NSString;
@protocol FTSIntelligentMsgSearchTaskDelegate;

@interface FTSIntelligentMsgSearchTask : NSObject
{
    FTSIntelligentMsgSearchMgr *_ftsSearchMgr;
    NSMutableArray *_arrResultWrap;
    _Bool _isCancelled;
    NSString *_toParseTalker;
    NSString *_toParseRealQuery;
    NSArray *_arrSourceContact;
    CContact *_restrictSessionContact;
    CContact *_restrictTalkerContact;
    NSArray *_arrTalkerMatchContact;
    NSMutableDictionary *_dicMatchTip;
    unsigned long long _startSearchTime;
    _Bool _hasSearchDone;
    _Bool _hasFinishDBSearch;
    _Bool _isRunning;
    _Bool _hasIndexMsgResult;
    _Bool _hasMemMsgResult;
    int _resultType;
    unsigned int _newestSearchType;
    NSString *_taskKey;
    id <FTSIntelligentMsgSearchTaskDelegate> _delegate;
    NSString *_newestQueryText;
    NSString *_lastQueryText;
    NSMutableArray *_arrLastQueryTerm;
    NSString *_restrictSessionUsrname;
    FTSIntelligentMsgSearchResultHandler *_searchResultHandler;
}

- (void).cxx_destruct;
@property(retain, nonatomic) FTSIntelligentMsgSearchResultHandler *searchResultHandler; // @synthesize searchResultHandler=_searchResultHandler;
@property(retain, nonatomic) NSString *restrictSessionUsrname; // @synthesize restrictSessionUsrname=_restrictSessionUsrname;
@property(nonatomic) unsigned int newestSearchType; // @synthesize newestSearchType=_newestSearchType;
@property(nonatomic) _Bool hasMemMsgResult; // @synthesize hasMemMsgResult=_hasMemMsgResult;
@property(nonatomic) _Bool hasIndexMsgResult; // @synthesize hasIndexMsgResult=_hasIndexMsgResult;
@property(nonatomic) _Bool isRunning; // @synthesize isRunning=_isRunning;
@property(nonatomic) _Bool hasFinishDBSearch; // @synthesize hasFinishDBSearch=_hasFinishDBSearch;
@property(nonatomic) _Bool hasSearchDone; // @synthesize hasSearchDone=_hasSearchDone;
@property(readonly, nonatomic) NSMutableArray *arrLastQueryTerm; // @synthesize arrLastQueryTerm=_arrLastQueryTerm;
@property(retain, nonatomic) NSString *lastQueryText; // @synthesize lastQueryText=_lastQueryText;
@property(retain, nonatomic) NSString *newestQueryText; // @synthesize newestQueryText=_newestQueryText;
@property(nonatomic) int resultType; // @synthesize resultType=_resultType;
@property(nonatomic) __weak id <FTSIntelligentMsgSearchTaskDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSString *taskKey; // @synthesize taskKey=_taskKey;
- (void)appendResult:(id)arg1;
- (id)genResultWrapIn:(id)arg1;
- (void)searchMoreContent;
- (void)onDBSearchFinish;
- (void)prepareRestrictSearchContent:(id)arg1;
- (void)updateResultType;
- (void)asynSearch:(id)arg1 searchType:(unsigned int)arg2;
- (_Bool)checkValid:(id)arg1;
- (id)getSessionArrFaceClusterItem;
- (id)getSessionTotalMsgItem;
- (unsigned int)getTotalMsgItemCount;
- (unsigned int)getTotalSessionCount;
- (id)getArrSearchResultWrap;
- (id)getSessionUserNameForindex:(unsigned long long)arg1;
- (id)getSessionMsgItemsForindex:(unsigned long long)arg1;
- (id)getSessionDic;
- (id)getMsgItem;
- (id)getSearchResult;
- (void)cancel;
- (id)initWithSearchMgr:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

