//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class EdgeComputingJSScriptEngine;

@interface EdgeComputingScriptService
{
    EdgeComputingJSScriptEngine *scriptEngine;
}

- (void).cxx_destruct;
- (id)executePureScript:(id)arg1 andData:(id)arg2;
- (void)clear;
- (id)getScriptArgs:(unsigned int)arg1 withClientVersion:(unsigned int)arg2 withPeriodStartTime:(unsigned long long)arg3 withPeriodEndTime:(unsigned long long)arg4;
- (id)executeScript:(id)arg1 withDatas:(id)arg2 withPeriodStartTime:(unsigned long long)arg3 withPeriodEndTime:(unsigned long long)arg4;
- (id)init;

@end

