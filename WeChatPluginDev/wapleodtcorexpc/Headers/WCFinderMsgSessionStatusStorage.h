//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary, WCTDatabase, WCTTable;

@interface WCFinderMsgSessionStatusStorage : NSObject
{
    WCTDatabase *_sessionStatusDB;
    WCTTable *_sessionStatusTable;
    NSMutableDictionary *_sessionStatusDic;
    CDUnknownBlockType _recoverBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType recoverBlock; // @synthesize recoverBlock=_recoverBlock;
@property(retain, nonatomic) NSMutableDictionary *sessionStatusDic; // @synthesize sessionStatusDic=_sessionStatusDic;
@property(retain, nonatomic) WCTTable *sessionStatusTable; // @synthesize sessionStatusTable=_sessionStatusTable;
@property(retain, nonatomic) WCTDatabase *sessionStatusDB; // @synthesize sessionStatusDB=_sessionStatusDB;
- (void)didRecoverDatabase;
- (void)willRecoverDatabase;
- (void)setDBIsNeedRecover:(_Bool)arg1;
- (_Bool)isDBNeedRecover;
- (void)removeAllSesstionStatusWithFinderUsername:(id)arg1;
- (void)removeAllSesstionStatusWithAccountType:(unsigned int)arg1;
- (id)sessionStatusListWithFinderUsername:(id)arg1 isInNormalSession:(_Bool)arg2;
- (id)sessionStatusListWithMyAccountType:(unsigned int)arg1 isInNormalSession:(_Bool)arg2;
- (id)sessionStatusWithSessionId:(id)arg1;
- (void)addOrUpdateSessionStatus:(id)arg1;
- (unsigned long long)sessionStatusListCount;
- (void)clearSessionStatusCache;
- (void)updateLocalSessionStatusSelfUsername:(id)arg1 myAccountType:(unsigned int)arg2;
- (void)loadDB;
- (void)addDBRecoverObserver;
- (void)initDBAndSetRecoverBlock:(CDUnknownBlockType)arg1;
- (id)init;
- (void)dealloc;

@end

