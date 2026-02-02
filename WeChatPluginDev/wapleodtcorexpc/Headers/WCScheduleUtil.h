//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface WCScheduleUtil
{
}

+ (id)databasePath;
+ (void)reportScheduleItemSetSuccess:(_Bool)arg1 isChatroom:(_Bool)arg2;
+ (id)preferredDateForMsgContent:(id)arg1;
+ (id)convertScheduleItemToRemind:(id)arg1;
+ (id)convertRemindToScheduleItem:(id)arg1;
+ (id)extractShowContentFromMessage:(id)arg1;
+ (id)convertMessageWrapToScheduleItem:(id)arg1;

@end

