//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class CMMDB, NSMutableArray, NSRecursiveLock;

@interface OplogDataLogic : NSObject
{
    unsigned int m_oplogStartRowID;
    unsigned int m_oplogItemID;
    _Bool m_bNeedContinue;
    _Bool m_bDBEnd;
    NSMutableArray *m_arrOplogs;
    CMMDB *m_oMMDB;
    NSRecursiveLock *m_oLock;
}

- (void).cxx_destruct;
@property _Bool m_bNeedContinue; // @synthesize m_bNeedContinue;
- (unsigned int)setFailOplog:(id)arg1;
- (void)deleteOplog:(id)arg1;
- (id)loadOplogFromDBlimit:(int)arg1;
- (void)checkNeedContiue;
- (void)filterByMD5;
- (id)getFromDBOplog:(id)arg1;
- (void)loadOplogData:(unsigned int)arg1;
- (_Bool)InsertOplog:(unsigned int)arg1 Oplog:(id)arg2;
- (id)initWithDB:(id)arg1 lock:(id)arg2;

@end

