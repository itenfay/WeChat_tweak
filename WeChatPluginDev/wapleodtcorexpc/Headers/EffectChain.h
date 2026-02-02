//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface EffectChain : NSObject
{
    struct EffectContext _context;
    struct EffectChain _chain;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (float)latencyMs;
- (void)reset;
- (_Bool)processWithBuffer:(char *)arg1 bufferLen:(unsigned long long *)arg2;
- (_Bool)loadEffectConfigString:(id)arg1 withEffectSpec:(id)arg2;

@end

