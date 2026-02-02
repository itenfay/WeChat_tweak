//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WCGroup;

@protocol WCGroupMgrExt

@optional
- (void)onWCGroupRemoveMemberReturn:(_Bool)arg1 group:(WCGroup *)arg2;
- (void)onWCGroupAddMemberReturn:(_Bool)arg1 group:(WCGroup *)arg2;
- (void)onWCDeleteGroupReturn:(_Bool)arg1 groupID:(NSString *)arg2;
- (void)onWCGroupUpdatedReturn:(_Bool)arg1;
- (void)onWCGroupUpdated;
@end

