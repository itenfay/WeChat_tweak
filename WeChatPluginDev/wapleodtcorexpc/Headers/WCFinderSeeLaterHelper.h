//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WCFinderSeeLaterHelper : NSObject
{
}

+ (void)reportAllSeeLaterHeaderEventType:(long long)arg1 commentScene:(int)arg2;
+ (void)reportSeeLaterCardEventType:(long long)arg1 contentVM:(id)arg2 commentScene:(int)arg3 showWord:(id)arg4;
+ (void)reportSeeLaterDeleteConfirmElementWithEventType:(long long)arg1 feedID:(id)arg2 commentScene:(int)arg3;
+ (void)confirmToDeleteSeeLaterFeed:(id)arg1 view:(id)arg2 commentScene:(int)arg3;
+ (void)didDelete:(id)arg1 commentScene:(int)arg2;

@end

