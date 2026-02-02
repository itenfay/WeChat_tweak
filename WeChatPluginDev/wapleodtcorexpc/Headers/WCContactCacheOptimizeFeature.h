//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCContactCacheOptimizeFeature : NSObject
{
    unsigned int _groupLastActiveTimeCount;
    unsigned int _groupMySelfLastActiveTimeCount;
    unsigned int _groupMemberCount;
    unsigned int _groupUnReadMsgCount;
    unsigned int _groupFriendsCount;
    unsigned int _myRecentMsgCount;
    unsigned int _isMute;
}

+ (void)initialize;
+ (void)PBArrayAdd_isMute;
+ (void)PBArrayAdd_myRecentMsgCount;
+ (void)PBArrayAdd_groupFriendsCount;
+ (void)PBArrayAdd_groupUnReadMsgCount;
+ (void)PBArrayAdd_groupMemberCount;
+ (void)PBArrayAdd_groupMySelfLastActiveTimeCount;
+ (void)PBArrayAdd_groupLastActiveTimeCount;
@property(nonatomic) unsigned int isMute; // @synthesize isMute=_isMute;
@property(nonatomic) unsigned int myRecentMsgCount; // @synthesize myRecentMsgCount=_myRecentMsgCount;
@property(nonatomic) unsigned int groupFriendsCount; // @synthesize groupFriendsCount=_groupFriendsCount;
@property(nonatomic) unsigned int groupUnReadMsgCount; // @synthesize groupUnReadMsgCount=_groupUnReadMsgCount;
@property(nonatomic) unsigned int groupMemberCount; // @synthesize groupMemberCount=_groupMemberCount;
@property(nonatomic) unsigned int groupMySelfLastActiveTimeCount; // @synthesize groupMySelfLastActiveTimeCount=_groupMySelfLastActiveTimeCount;
@property(nonatomic) unsigned int groupLastActiveTimeCount; // @synthesize groupLastActiveTimeCount=_groupLastActiveTimeCount;
@property(readonly, copy) NSString *description;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

