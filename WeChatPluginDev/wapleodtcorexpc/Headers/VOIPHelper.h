//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface VOIPHelper : NSObject
{
}

+ (void)checkIfUInt64RoomIDOutOfInt32:(unsigned long long)arg1;
+ (void)NotifyWithData:(id)arg1;
+ (void)HandleExtNotifydata:(id)arg1 andRoomId:(unsigned long long)arg2 andRoomKey:(unsigned long long)arg3;
+ (void)DataNotifyWithData:(id)arg1;
+ (void)APNSPushWithUsrInfo:(id)arg1 requestID:(id)arg2;
+ (void)DisableVoIPComLog;
+ (void)EnableVoIPComLog;

@end

