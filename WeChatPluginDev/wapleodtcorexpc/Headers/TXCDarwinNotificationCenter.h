//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;

@interface TXCDarwinNotificationCenter : NSObject
{
    NSMutableDictionary *_observerDic;
    NSString *_mainBundleID;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *mainBundleID; // @synthesize mainBundleID=_mainBundleID;
@property(retain, nonatomic) NSMutableDictionary *observerDic; // @synthesize observerDic=_observerDic;
- (void)unregisterForNotificationsWithName:(id)arg1;
- (void)registerForNotificationsWithName:(id)arg1;
- (void)postNotificationName:(id)arg1;
- (void)removeObserverWithName:(id)arg1;
- (void)addObserverWithName:(id)arg1 callback:(CDUnknownBlockType)arg2 timeout:(double)arg3;
- (void)addObserverWithName:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)handleNotification:(id)arg1;
- (void)dealloc;
- (id)init;

@end

