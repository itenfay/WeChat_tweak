//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WCCpuStackFrame : NSObject
{
    unsigned int _cpu_thread;
    float _cpu_value;
}

@property(nonatomic) float cpu_value; // @synthesize cpu_value=_cpu_value;
@property(nonatomic) unsigned int cpu_thread; // @synthesize cpu_thread=_cpu_thread;
- (id)initWithThread:(unsigned int)arg1 andCpuValue:(float)arg2;

@end

