//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface AppMonitorImpl : NSObject
{
    struct atomic<bool> mIsAppInBackground;
}

- (_Bool)IsAppInBackground;
- (void)ApplicationDidEnterBackground;
- (void)ApplicationDidEnterForeground;
- (id)init;

@end

