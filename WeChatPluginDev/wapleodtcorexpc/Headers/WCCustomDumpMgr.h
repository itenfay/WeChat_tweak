//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WCCustomDumpMgr : NSObject
{
}

+ (_Bool)dumpTypeCanBeCustomDump:(unsigned long long)arg1;
+ (id)shareInstance;
- (void)onPreconditionFailure:(id)arg1;
- (void)dumpFlutter:(id)arg1;
- (void)asyncDump:(id)arg1;
- (void)syncDump:(id)arg1;
- (void)dealloc;
- (id)init;

@end

