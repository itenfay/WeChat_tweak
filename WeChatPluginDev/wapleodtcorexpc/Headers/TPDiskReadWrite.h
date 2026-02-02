//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSRecursiveLock, TPLocalCache;

@interface TPDiskReadWrite : NSObject
{
    NSRecursiveLock *_lock;
    TPLocalCache *_localCache;
}

- (void).cxx_destruct;
@property(retain, nonatomic) TPLocalCache *localCache; // @synthesize localCache=_localCache;
@property(retain, nonatomic) NSRecursiveLock *lock; // @synthesize lock=_lock;
- (id)read:(id)arg1;
- (id)readAllKeys;
- (id)readReportKey;
- (void)removeAll;
- (void)remove:(id)arg1;
- (id)readAllAndRemove;
- (id)readAll;
- (void)writeToFile:(id)arg1 value:(id)arg2;
- (id)initWithName:(id)arg1;

@end

