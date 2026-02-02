//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface EffectAnalysisChain : NSObject
{
    struct EffectContext _context;
    struct EffectAnalysisChain _chain;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (_Bool)calculateLoudness:(double *)arg1;
- (_Bool)processWithBuffer:(char *)arg1 bufferLen:(unsigned long long *)arg2;
- (_Bool)loadEffectConfigParser:(id)arg1 effectSpec:(id)arg2;
- (_Bool)initWithffectSpec:(id)arg1;

@end

