//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface KaraGroupMessageHistoryTable
{
}

- (id)historyOfWeComGroupChatAtSlot:(id)arg1 happenedBetween:(id)arg2 to:(id)arg3 limit:(long long)arg4 error:(id *)arg5;
- (id)historyOfWeComSenderAtSlot:(id)arg1 happenedBetween:(id)arg2 to:(id)arg3 limit:(long long)arg4 error:(id *)arg5;
- (id)historyInSession:(id)arg1 fromSender:(id)arg2 atSlot:(id)arg3 happenedBetween:(id)arg4 to:(id)arg5 limit:(long long)arg6 error:(id *)arg7;
- (id)historyInSession:(id)arg1 atSlot:(id)arg2 happenedBetween:(id)arg3 to:(id)arg4 limit:(long long)arg5 error:(id *)arg6;
- (id)initWithPath:(id)arg1 tableName:(id)arg2;

@end

