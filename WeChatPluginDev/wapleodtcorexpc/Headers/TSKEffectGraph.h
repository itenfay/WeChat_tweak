//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class EffectGraph, EffectSpec;

@interface TSKEffectGraph : NSObject
{
    EffectSpec *_spec;
    EffectGraph *_graph;
}

- (void).cxx_destruct;
@property(retain, nonatomic) EffectGraph *graph; // @synthesize graph=_graph;
@property(retain, nonatomic) EffectSpec *spec; // @synthesize spec=_spec;
- (void)reset;
- (_Bool)processData:(char *)arg1 dataSize:(int)arg2 stage:(unsigned long long)arg3;
- (_Bool)setEffectType:(unsigned long long)arg1;
- (id)initWithSampleRate:(int)arg1 channels:(int)arg2;

@end

