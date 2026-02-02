//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WCEventTrackingSystem : NSObject
{
}

+ (void)onSendAction:(SEL)arg1 to:(id)arg2 from:(id)arg3 forEvent:(id)arg4;
+ (void)onSendEvent:(id)arg1;
+ (id)currentConfig;
+ (_Bool)openTrackingSystem;
+ (id)getCellLog:(id)arg1;
+ (_Bool)isPrivacy:(id)arg1;
+ (void)trackSwitch:(id)arg1 action:(SEL)arg2 to:(id)arg3 from:(id)arg4;
+ (void)trackCell:(id)arg1;
+ (void)trackRichTextView:(id)arg1;
+ (void)trackUIButton:(id)arg1;
+ (void)trackSendAction:(SEL)arg1 to:(id)arg2 from:(id)arg3 forEvent:(id)arg4;
+ (void)trackEvent:(id)arg1;

@end

