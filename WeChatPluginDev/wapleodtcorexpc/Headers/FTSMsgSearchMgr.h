//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FTSMessageDB, NSMutableDictionary;

@interface FTSMsgSearchMgr : NSObject
{
    NSMutableDictionary *m_searchHandler;
    NSMutableDictionary *m_searchResult;
    NSMutableDictionary *m_searchStatus;
    _Bool _bIsIgnoreCluster;
    FTSMessageDB *_ftsDB;
}

+ (id)ClusterUsernames;
- (void).cxx_destruct;
@property(retain, nonatomic) FTSMessageDB *ftsDB; // @synthesize ftsDB=_ftsDB;
@property(nonatomic) _Bool bIsIgnoreCluster; // @synthesize bIsIgnoreCluster=_bIsIgnoreCluster;
- (id)getClusterIdFor:(id)arg1;
- (_Bool)isSessionId:(id)arg1 belongsToClusterId:(id)arg2;
- (_Bool)isClusterId:(id)arg1;
- (_Bool)isFavWeAppMsgWithUsername:(id)arg1;
- (void)cancelSearch:(id)arg1 withHandlerKey:(id)arg2;
- (void)callSearchFinish:(id)arg1;
- (id)getSearchKeyWithQuery:(id)arg1 limitSession:(id)arg2;
- (id)memSearch:(id)arg1 queryText:(id)arg2 limitUsername:(id)arg3;
- (void)internalStartSearch:(id)arg1 limitUsername:(id)arg2;
- (id)startSearch:(id)arg1 limitUsername:(id)arg2 searchFinishTarget:(id)arg3;
- (id)initWithDB:(id)arg1;

@end

