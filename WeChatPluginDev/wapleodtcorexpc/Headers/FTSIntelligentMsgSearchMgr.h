//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FTSIntelligentMessageDB, NSMutableDictionary;

@interface FTSIntelligentMsgSearchMgr : NSObject
{
    NSMutableDictionary *m_searchHandler;
    NSMutableDictionary *m_searchResult;
    NSMutableDictionary *m_searchStatus;
    FTSIntelligentMessageDB *_ftsDB;
}

- (void).cxx_destruct;
@property(retain, nonatomic) FTSIntelligentMessageDB *ftsDB; // @synthesize ftsDB=_ftsDB;
- (void)cancelSearch:(id)arg1 withHandlerKey:(id)arg2;
- (void)callSearchFinish:(id)arg1;
- (id)getSearchKeyWithQuery:(id)arg1 limitSession:(id)arg2 searchType:(unsigned int)arg3;
- (id)getAllSearchQueryText:(id)arg1 limitUsername:(id)arg2 searchType:(unsigned int)arg3;
- (id)memSearch:(id)arg1 queryText:(id)arg2 limitUsername:(id)arg3;
- (void)internalStartSearch:(id)arg1 limitUsername:(id)arg2 searchType:(unsigned int)arg3;
- (id)startSearch:(id)arg1 limitUsername:(id)arg2 searchType:(unsigned int)arg3 searchFinishTarget:(id)arg4;
- (id)initWithDB:(id)arg1;

@end

