//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface WCPatternCacheMgr : NSObject
{
    NSMutableDictionary *m_cache;
    _Bool m_needWriteBack;
    _Bool m_needLoadData;
}

- (void).cxx_destruct;
- (void)tryGetWCDataItemPattern:(id)arg1;
- (unsigned long long)onServiceCleanCache;
- (void)onServiceMemoryWarning;
- (void)onServiceTerminate;
- (void)onServiceEnterBackground;
- (void)dealloc;
- (id)init;
- (void)trySaveData;
- (void)tryLoadData;
- (id)pathForData;

@end

