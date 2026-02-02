//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface MemAppidSigManager : NSObject
{
    NSMutableDictionary *appidSigDic;
}

- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)printAppidSigAll;
- (unsigned int)topPriorityAppid;
- (unsigned int)sigTimeByAppid:(unsigned int)arg1;
- (unsigned int)expireTimeByAppid:(unsigned int)arg1 andAppExpTime:(unsigned int)arg2;
- (void)setMemPriority:(unsigned int)arg1 andTime:(unsigned int)arg2 byAppid:(unsigned int)arg3;
- (void)removeMemSigByAppid:(unsigned int)arg1;
- (id)memSigByAppid:(unsigned int)arg1 andName:(id)arg2;
- (void)setMemSig:(id)arg1;
- (void)dealloc;
- (id)init;

@end

