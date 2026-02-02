//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface HoneyPayMsgCenter : NSObject
{
}

+ (id)summayText:(id)arg1;
+ (_Bool)hanldeClickSysMsg:(id)arg1 chatterName:(id)arg2 nodeViewDelegate:(id)arg3;
+ (id)getMsg:(id)arg1 chatterName:(id)arg2;
+ (void)handleClickMessage:(id)arg1;
+ (void)addDataSysMessage:(id)arg1 chatName:(id)arg2;
+ (void)updateMessageWithBizId:(id)arg1 chatName:(id)arg2 content:(id)arg3;
+ (void)handleUpdate:(id)arg1;
+ (_Bool)isHoneyPayMessageForNewWCPayBizExt:(id)arg1;

@end

