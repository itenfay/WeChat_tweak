//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMBaseSessionStorage, MMEnterpriseMainUsrData, NSMutableDictionary, NSString;

@interface MMEnterpriseSubSessionCacher : NSObject
{
    MMEnterpriseMainUsrData *_mainUsrData;
    NSString *_mainUsrName;
    NSString *_sessionType;
    MMBaseSessionStorage *_sessionStorage;
    NSMutableDictionary *_dictUsrname2CellData;
    _Bool _showRedDot;
}

+ (long long)compareEnterpriseSubSession:(id)arg1 right:(id)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *mainUsrName; // @synthesize mainUsrName=_mainUsrName;
- (void)checkSessionInfo:(id)arg1;
- (void)performCleanUpNoMsgSessions:(id)arg1;
- (id)getPathForOldSessionCache;
- (void)deleteOldVersionSessionCache;
- (long long)compareSession:(id)arg1 rightSession:(id)arg2;
- (id)importSessions;
- (void)clearSessionCache;
- (void)deleteAllSessions;
- (void)deleteSessionWithUsrName:(id)arg1;
- (void)deleteSessionAtIndex:(long long)arg1;
- (void)addOrUpdateSessionList:(id)arg1;
- (void)addOrUpdateSessionInfo:(id)arg1;
- (id)sessionInfoList;
- (id)sessionCellDataAtIndex:(long long)arg1;
- (id)sessionInfoWithUsrName:(id)arg1;
- (id)sessionInfoAtIndex:(long long)arg1;
- (unsigned int)sessionCount;
- (void)clearMainUsrRedDot;
- (_Bool)getMainUsrShowRedDot;
- (void)setMainUsrShowRedDot;
- (_Bool)hasNewArrivalCountWithSubSessionUsrName:(id)arg1;
- (void)clearNewArrivalCountWithSubSessionUsrName:(id)arg1;
- (void)deleteNewArrivalCountWithSubSessionUsrName:(id)arg1;
- (void)setNewArrivalCount:(unsigned int)arg1 withSubSessionUsrName:(id)arg2;
- (unsigned int)getNewArrivalCountWithSubSessionUsrName:(id)arg1;
- (unsigned int)getMainUsrUnreadCount;
- (void)clearMainUsrUnreadCount;
- (void)deleteMainUsrData;
- (void)saveMainUsrData;
- (void)loadMainUsrData;
- (id)getMainUsrDataPath;
- (id)initWithMainUsrName:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

