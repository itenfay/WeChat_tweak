//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSTimer;

@interface FBSDKAccessTokenExpirer : NSObject
{
    NSTimer *_timer;
}

- (void).cxx_destruct;
- (void)_timerDidFire;
- (void)_checkAccessTokenExpirationDate;
- (void)dealloc;
- (id)init;

@end

