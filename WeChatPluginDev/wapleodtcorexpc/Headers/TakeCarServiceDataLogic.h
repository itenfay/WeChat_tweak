//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface TakeCarServiceDataLogic : NSObject
{
}

- (void)onUpdateAppPkgComplete:(_Bool)arg1 withAppInfoData:(id)arg2 errorCode:(unsigned int)arg3 errorMsg:(id)arg4;
- (void)resetPrefetchTime;
- (_Bool)isCurrentTimePrefetchAvaliable;
- (void)preloadTecentCarWeApp;
- (void)openTecentCarWeApp:(id)arg1;
- (id)init;

@end

