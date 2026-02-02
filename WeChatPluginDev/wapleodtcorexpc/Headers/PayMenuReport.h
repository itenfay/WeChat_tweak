//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface PayMenuReport : NSObject
{
}

+ (void)reportReddotClick:(unsigned long long)arg1;
+ (void)reportReddotExposure:(unsigned long long)arg1;
+ (void)internalReportClickWithScene:(unsigned int)arg1 RedDot:(unsigned int)arg2 Url:(id)arg3 WeappUserName:(id)arg4 action:(unsigned int)arg5;
+ (void)reportShowWithScene:(unsigned int)arg1 RedDot:(unsigned int)arg2 Url:(id)arg3 WeappUserName:(id)arg4;
+ (void)reportClickWithScene:(unsigned int)arg1 RedDot:(unsigned int)arg2 Url:(id)arg3 WeappUserName:(id)arg4;

@end

