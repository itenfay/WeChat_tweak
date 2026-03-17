//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WCLanTransferPersisent : NSObject
{
}

+ (_Bool)removeServerLanTransferTaskInfo;
+ (_Bool)saveServerLanTransferTaskInfo:(id)arg1;
+ (id)getServerLanTransferTaskInfo;
+ (id)getPathOfServerTaskInfo;
+ (_Bool)removeClientLanTransferTaskInfo;
+ (_Bool)saveClientLanTransferTaskInfo:(id)arg1;
+ (id)getClientLanTransferTaskInfo;
+ (id)getPathOfClientTaskInfo;
+ (id)getClientTmpFilePathWithMsgID:(id)arg1;
+ (id)getLanTransferClientDir;
+ (id)getServerTmpFilePathWithMsgID:(id)arg1;
+ (id)getLanTransferServerDir;
+ (id)getLanTransferDir;
+ (id)getLanClientMsgID:(id)arg1;

@end

