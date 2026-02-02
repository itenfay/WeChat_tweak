//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class WCTDatabase, WCTTable;

@interface AdPushMsgDBMgr : NSObject
{
    WCTDatabase *_db;
    WCTTable *_pushMsgTable;
}

+ (id)MagicPushMsgDBPath;
- (void).cxx_destruct;
@property(retain, nonatomic) WCTTable *pushMsgTable; // @synthesize pushMsgTable=_pushMsgTable;
@property(retain, nonatomic) WCTDatabase *db; // @synthesize db=_db;
- (void)dealloc;
- (void)clearOverTimeMsg;
- (void)insertNewPushMsg:(id)arg1;
- (_Bool)clearSpecificSlotMsg:(id)arg1;
- (id)getSpecificSlotMsg:(id)arg1;
- (id)setupTableWithName:(id)arg1 tableClass:(Class)arg2;
- (void)initDB;
- (id)init;

@end

