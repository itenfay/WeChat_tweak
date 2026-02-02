//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface VideoSendReporter : NSObject
{
}

+ (int)getVideoSource:(id)arg1;
+ (void)reportSelectFail:(int)arg1 deltail:(unsigned long long)arg2 chatname:(id)arg3;
+ (void)reportSendFailWithMsg:(id)arg1 reason:(int)arg2;
+ (void)reportSendWithMsg:(id)arg1 action:(int)arg2;

@end

