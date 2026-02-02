//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class CMMDB;

@interface CGroupDB : NSObject
{
    CMMDB *m_oMMDB;
}

- (void).cxx_destruct;
- (_Bool)isUserName:(id)arg1 ExistInList:(id)arg2;
- (id)GetMMDB;
- (_Bool)AddGroupAdmin:(id)arg1 withAdminList:(id)arg2;
- (_Bool)DeleteGroupAdmin:(id)arg1 withAdminList:(id)arg2;
- (id)GetGroupMember:(id)arg1;
- (_Bool)QuitGroup:(id)arg1 withUsrName:(id)arg2;
- (_Bool)SetGroupTopic:(id)arg1 withTopic:(id)arg2;
- (_Bool)DeleteGroupMember:(id)arg1 withMemberList:(id)arg2;
- (_Bool)AddGroupMember:(id)arg1 withMemberList:(id)arg2 needReload:(_Bool)arg3;
- (_Bool)AddGroupMember:(id)arg1 withMemberList:(id)arg2;
- (void)initDB:(id)arg1;
- (id)init;

@end

