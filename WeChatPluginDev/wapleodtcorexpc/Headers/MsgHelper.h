//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface MsgHelper : NSObject
{
}

+ (_Bool)IsShowPush:(_Bool)arg1 Des:(unsigned int)arg2 Msg:(id)arg3;
+ (_Bool)AddExtMsgInfo:(id)arg1 withHandle:(id)arg2;
+ (_Bool)AddMsgInfo:(id)arg1 withHandle:(id)arg2;
+ (_Bool)ProcessOnAddNewMsg:(id)arg1 ChatName:(id)arg2 Lock:(id)arg3;
+ (_Bool)AddMessageToWCPayMsgBizExt:(id)arg1 DB:(id)arg2;
+ (_Bool)AddMessageToNewWCPayBizExt:(id)arg1 DB:(id)arg2 type:(int)arg3;
+ (void)ClearDownloadData:(id)arg1 ChatName:(id)arg2;
+ (_Bool)HandleThumb:(id)arg1 Message:(id)arg2 Lock:(id)arg3;
+ (_Bool)IsNotifyOnNotAddDB:(id)arg1 ChatName:(id)arg2;
+ (_Bool)CanNotAddToDB:(id)arg1 ChatName:(id)arg2;
+ (_Bool)isCannotAddToDBWithVideoMsg:(id)arg1;
+ (_Bool)AppMsgCannotAddToDB:(id)arg1;
+ (_Bool)newXMLCannotAddToDB:(id)arg1;
+ (_Bool)InternalCanNotAddDB:(id)arg1 ChatName:(id)arg2;
+ (id)GetChatName:(id)arg1 Des:(unsigned int *)arg2;

@end

