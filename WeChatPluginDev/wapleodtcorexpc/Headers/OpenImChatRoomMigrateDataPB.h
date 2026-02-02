//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSString;

@interface OpenImChatRoomMigrateDataPB : NSObject
{
    NSMutableArray *_migrateOpenImChatRoomList;
    NSMutableDictionary *_dicHadGetContactDetialMigrateAssociateChatRoom;
    NSMutableDictionary *_dicActiveUserWaitForOpenImMigrate;
}

+ (void)initialize;
+ (void)PBArrayAdd_dicHadGetContactDetialMigrateAssociateChatRoom;
+ (void)PBArrayAdd_dicActiveUserWaitForOpenImMigrate;
+ (void)PBArrayAdd_migrateOpenImChatRoomList;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *dicActiveUserWaitForOpenImMigrate; // @synthesize dicActiveUserWaitForOpenImMigrate=_dicActiveUserWaitForOpenImMigrate;
@property(retain, nonatomic) NSMutableDictionary *dicHadGetContactDetialMigrateAssociateChatRoom; // @synthesize dicHadGetContactDetialMigrateAssociateChatRoom=_dicHadGetContactDetialMigrateAssociateChatRoom;
@property(retain, nonatomic) NSMutableArray *migrateOpenImChatRoomList; // @synthesize migrateOpenImChatRoomList=_migrateOpenImChatRoomList;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

