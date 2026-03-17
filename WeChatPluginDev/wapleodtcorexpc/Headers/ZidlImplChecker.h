//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface ZidlImplChecker : NSObject
{
}

+ (id)sharedInstance;
- (void)zidlImplIsReady:(id)arg1;
- (void)checkZidlImpl:(id)arg1 callback:(id)arg2;
- (id)init;

@end

