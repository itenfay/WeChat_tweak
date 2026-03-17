//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WeVisModelReporter : NSObject
{
}

+ (void)reportDeleteUnusedFile:(id)arg1;
+ (void)reportModelInfo:(id)arg1 invalidModelInfo:(id)arg2 cgiModelInfo:(id)arg3;
+ (void)reportModelInvalid:(id)arg1;
+ (void)reportAction:(int)arg1 type:(int)arg2 subtyp:(int)arg3;
+ (void)reportSysMsgCgi;
+ (void)reportCgiFail;
+ (void)reportWithInfo:(id)arg1 invalidModelInfo:(id)arg2 action:(int)arg3 cgiModelInfo:(id)arg4;

@end

