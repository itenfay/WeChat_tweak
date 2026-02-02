//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WCPayPocketMoneyMsgCenter : NSObject
{
}

+ (void)sendSystemMessage:(id)arg1 toChat:(id)arg2;
+ (void)handleNewXmlMsg:(id)arg1;
+ (void)handleClickMessage:(id)arg1;
+ (_Bool)handleClickSysMsg:(id)arg1 chatterName:(id)arg2 nodeViewDelegate:(id)arg3;

@end

