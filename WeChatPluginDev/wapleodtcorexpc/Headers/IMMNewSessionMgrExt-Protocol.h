//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMSessionInfo, NSString;

@protocol IMMNewSessionMgrExt <NSObject>

@optional
- (void)onDidDeleteAllSession;
- (void)onWillDeleteAllSession;
- (void)onSessionUpgrade;
- (void)onDeleteSessionOfUser:(NSString *)arg1;
- (void)onSessionTopStatusChanged:(NSString *)arg1 bTop:(_Bool)arg2;
- (void)onAppIconTotalUnreadCountChange:(unsigned int)arg1;
- (void)onSessionTotalUnreadCountChange:(unsigned int)arg1;
- (void)onShowSessionWithUserName:(NSString *)arg1;
- (void)onHideSessionWithUserName:(NSString *)arg1;
- (void)onDeleteSession:(unsigned int)arg1 withUser:(NSString *)arg2;
- (void)onWillDeleteSession:(MMSessionInfo *)arg1;
- (void)onActiveUsrNameChange:(NSString *)arg1 curUsrName:(NSString *)arg2;
- (void)onNewMsgArriving:(MMSessionInfo *)arg1 NotifyFlag:(long long)arg2;
- (void)onSessionUnreadCountChanged:(MMSessionInfo *)arg1 prevUnreadCount:(long long)arg2;
- (void)onSessionChanged:(MMSessionInfo *)arg1;
- (void)onNeedRebuild;
- (void)onNeedReload;
- (void)onSessionRebuildFromContact;
- (void)onSessionRebuildEnd;
- (void)onSessionRebuildBegin;
@end

