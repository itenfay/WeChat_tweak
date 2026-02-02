//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface ClickCommandRequestFiller : NSObject
{
}

+ (void)fillSessionStat:(id)arg1;
+ (void)fillClickInfo:(id)arg1 reqInfo:(id)arg2;
+ (void)fillClickInfoWithEventXML:(id)arg1;
+ (void)fillClickInfo:(id)arg1 location:(id)arg2 errCode:(unsigned int)arg3;
+ (void)fillBTSessionID:(id)arg1;
+ (void)fillMsgSource:(id)arg1;

@end

