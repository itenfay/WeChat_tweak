//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class GroupNoticeItem, NSString;

@protocol IMsgRevokeExt

@optional
- (void)OnRoomHistoryRevoked:(NSString *)arg1 n64MsgId:(long long)arg2 historyId:(unsigned long long)arg3;
- (void)OnGroupNoticeMsgRevoked:(NSString *)arg1 n64MsgId:(long long)arg2 item:(GroupNoticeItem *)arg3;
- (void)OnMsgRevoked:(NSString *)arg1 n64MsgId:(long long)arg2 pushContent:(NSString *)arg3;
- (void)OnMsgRevoked:(NSString *)arg1 n64MsgId:(long long)arg2;
@end

