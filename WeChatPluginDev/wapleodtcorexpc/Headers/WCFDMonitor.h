//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WCFDMonitor : NSObject
{
    unsigned long long _types[2560];
    shared_ptr_896ae81e _threadInfos[2560];
}

+ (id)shareInstance;
- (id).cxx_construct;
- (void).cxx_destruct;
- (_Bool)isWCDBPath:(id)arg1;
- (_Bool)isMMKVPath:(id)arg1;
- (id)shortenPath:(const char *)arg1;
- (void)printEMFILE:(const char *)arg1;
- (void)reportTooManyOpenFiles;
- (id)threadInfo:(int)arg1;
- (void)clearInfo:(int)arg1;
- (void)recordInfo:(int)arg1 type:(unsigned long long)arg2 threadInfo:(shared_ptr_896ae81e)arg3;
- (void)updateExpt;
- (void)setup;
- (void)updateRlimit;
- (id)init;

@end

