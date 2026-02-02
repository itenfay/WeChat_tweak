//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableSet;

@interface WCSmartGroupCore : NSObject
{
    NSMutableArray *_arrSourceGroup;
    NSMutableSet *_setMMUsername;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableSet *setMMUsername; // @synthesize setMMUsername=_setMMUsername;
@property(retain, nonatomic) NSMutableArray *arrSourceGroup; // @synthesize arrSourceGroup=_arrSourceGroup;
- (id)getRelatedChatRoom:(id)arg1 containMembers:(id)arg2;
- (void)addUsr:(id)arg1 runInfo:(id)arg2 groupContact:(id)arg3 toDic:(id)arg4 andScore:(id)arg5;
- (id)findTopUsrsInGroups:(id)arg1 mmUsrSet:(id)arg2 runInfo:(id)arg3;
- (_Bool)strictMemberMatch:(id)arg1 withMember:(id)arg2;
- (id)searchGroupContacts:(id)arg1 strictByGroupMember:(id)arg2;
- (id)getAllMMSingleContactUsername;
- (id)getAllGroup;
- (void)dispatchMainFinish:(id)arg1 runInfo:(id)arg2 completeBlock:(CDUnknownBlockType)arg3;
- (void)taskRecursive:(id)arg1 restrictMemberList:(id)arg2 mmUsrSet:(id)arg3 runInfo:(id)arg4 completeBlock:(CDUnknownBlockType)arg5;
- (void)asyncGetRelatedChatRoomWithInfo:(id)arg1 completeBlock:(CDUnknownBlockType)arg2;

@end

