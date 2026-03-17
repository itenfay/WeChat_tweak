//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WATaskBarReporter : NSObject
{
}

+ (id)getTaskBizKeyFromWeApp:(id)arg1 debugType:(unsigned int)arg2;
+ (unsigned long long)bizNameToItemType:(id)arg1;
+ (void)reportWATaskBarFeedAddDelete:(id)arg1;
+ (void)reportWATaskBarClick:(id)arg1;
+ (void)reportWATaskBarFeedAppear:(id)arg1;
+ (void)reportWATaskBarClose:(id)arg1;
+ (void)reportWATaskBarAppear:(id)arg1;

@end

