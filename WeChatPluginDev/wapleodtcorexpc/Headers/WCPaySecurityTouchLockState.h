//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WCPaySecurityTouchLockState : NSObject
{
}

+ (_Bool)isNotSupportTouchLock;
+ (void)setTouchLockOpen:(_Bool)arg1;
+ (_Bool)isTouchLockOpen;
+ (_Bool)isOldState:(id)arg1;
+ (void)setStateWithData:(id)arg1;
+ (void)setStateWithBase64String:(id)arg1;

@end

