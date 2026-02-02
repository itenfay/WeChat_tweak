//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class CContact, FTSMsgSearchMgr, FTSMsgSearchResultHandler, NSArray, NSMutableArray, NSMutableDictionary, NSString, SearchMatchTip;
@protocol FTSMsgSearchTaskDelegate;

@interface FTSMsgSearchTask : NSObject
{
    FTSMsgSearchMgr *_ftsSearchMgr;
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
    _Bool _isSessionRestrictFirst;
    _Bool _isFirstSearch;
    NSString *_taskKey;
    id <FTSMsgSearchTaskDelegate> _delegate;
    unsigned long long _resultType;
    NSString *_newestQueryText;
    NSString *_lastQueryText;
    NSMutableArray *_arrLastQueryTerm;
    NSString *_parsedTalkerFromQuery;
    NSString *_parsedQueryFromQuery;
    NSString *_restrictSessionUsrname;
    NSString *_restrictTalkerUsrname;
    NSString *_restrictTalkerSearchText;
    NSString *_restrictContextRealSearchText;
    SearchMatchTip *_restrictTalkerMatchTip;
    FTSMsgSearchResultHandler *_searchResultHandler;
}

- (void).cxx_destruct;
@property(retain, nonatomic) FTSMsgSearchResultHandler *searchResultHandler; // @synthesize searchResultHandler=_searchResultHandler;
@property(nonatomic) _Bool isFirstSearch; // @synthesize isFirstSearch=_isFirstSearch;
@property(retain, nonatomic) SearchMatchTip *restrictTalkerMatchTip; // @synthesize restrictTalkerMatchTip=_restrictTalkerMatchTip;
@property(retain, nonatomic) NSString *restrictContextRealSearchText; // @synthesize restrictContextRealSearchText=_restrictContextRealSearchText;
@property(retain, nonatomic) NSString *restrictTalkerSearchText; // @synthesize restrictTalkerSearchText=_restrictTalkerSearchText;
@property(retain, nonatomic) NSString *restrictTalkerUsrname; // @synthesize restrictTalkerUsrname=_restrictTalkerUsrname;
@property(retain, nonatomic) NSString *restrictSessionUsrname; // @synthesize restrictSessionUsrname=_restrictSessionUsrname;
@property(nonatomic) _Bool isSessionRestrictFirst; // @synthesize isSessionRestrictFirst=_isSessionRestrictFirst;
@property(retain, nonatomic) NSString *parsedQueryFromQuery; // @synthesize parsedQueryFromQuery=_parsedQueryFromQuery;
@property(retain, nonatomic) NSString *parsedTalkerFromQuery; // @synthesize parsedTalkerFromQuery=_parsedTalkerFromQuery;
@property(nonatomic) _Bool hasMemMsgResult; // @synthesize hasMemMsgResult=_hasMemMsgResult;
@property(nonatomic) _Bool hasIndexMsgResult; // @synthesize hasIndexMsgResult=_hasIndexMsgResult;
@property(nonatomic) _Bool isRunning; // @synthesize isRunning=_isRunning;
@property(nonatomic) _Bool hasFinishDBSearch; // @synthesize hasFinishDBSearch=_hasFinishDBSearch;
@property(nonatomic) _Bool hasSearchDone; // @synthesize hasSearchDone=_hasSearchDone;
@property(readonly, nonatomic) NSMutableArray *arrLastQueryTerm; // @synthesize arrLastQueryTerm=_arrLastQueryTerm;
@property(retain, nonatomic) NSString *lastQueryText; // @synthesize lastQueryText=_lastQueryText;
@property(retain, nonatomic) NSString *newestQueryText; // @synthesize newestQueryText=_newestQueryText;
@property(nonatomic) unsigned long long resultType; // @synthesize resultType=_resultType;
@property(nonatomic) __weak id <FTSMsgSearchTaskDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSString *taskKey; // @synthesize taskKey=_taskKey;
- (id)classifyMsgItems:(id)arg1;
- (void)appendResult:(id)arg1;
- (id)genResultWrapIn:(id)arg1;
- (void)searchContactIfNeed;
- (void)searchMoreContent;
- (void)onDBSearchFinish;
- (void)prepareRestrictSearchContent:(id)arg1;
- (void)updateResultType;
- (void)asynSearch:(id)arg1;
- (_Bool)checkValid:(id)arg1;
- (int)getMsgSearchOneBatchCount;
- (unsigned long long)convertPageType;
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

