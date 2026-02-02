//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSRecursiveLock, NSString;

@interface WAFileStorageInfo : NSObject
{
    _Bool _isScannedStoreFile;
    unsigned int _storeFileCount;
    NSString *_appID;
    unsigned long long _storeFileSize;
    unsigned long long _configMaxStoreFileSize;
    NSRecursiveLock *_lock;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSRecursiveLock *lock; // @synthesize lock=_lock;
@property(nonatomic) unsigned long long configMaxStoreFileSize; // @synthesize configMaxStoreFileSize=_configMaxStoreFileSize;
@property(nonatomic) _Bool isScannedStoreFile; // @synthesize isScannedStoreFile=_isScannedStoreFile;
@property(nonatomic) unsigned long long storeFileSize; // @synthesize storeFileSize=_storeFileSize;
@property(nonatomic) unsigned int storeFileCount; // @synthesize storeFileCount=_storeFileCount;
@property(retain, nonatomic) NSString *appID; // @synthesize appID=_appID;
- (void)scanStoreFile;
- (void)checkScanStoreFile;
- (void)removeFileWithSize:(unsigned long long)arg1;
- (void)addFileWithSize:(unsigned long long)arg1;
- (void)setStoreFileCount:(unsigned int)arg1 fileSize:(unsigned long long)arg2;
- (void)updateConfigMaxStoreFileSize;
- (id)initWithAppID:(id)arg1;

@end

