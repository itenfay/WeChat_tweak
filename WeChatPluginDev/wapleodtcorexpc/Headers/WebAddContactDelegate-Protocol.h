//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class JSEvent, NSString, UIViewController;

@protocol WebAddContactDelegate
- (UIViewController *)currentViewController;
- (void)OnWebAddContactReturn;
- (void)OnWebAddContact:(int)arg1 Msg:(NSString *)arg2 CallBack:(JSEvent *)arg3;
@end

