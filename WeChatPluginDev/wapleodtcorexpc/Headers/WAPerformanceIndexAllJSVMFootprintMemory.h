//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface WAPerformanceIndexAllJSVMFootprintMemory
{
    unsigned long long _lastIndexNum;
}

@property(nonatomic) unsigned long long lastIndexNum; // @synthesize lastIndexNum=_lastIndexNum;
- (unsigned int)getIndexType;
- (unsigned long long)getCurrentIndexNum;

@end

