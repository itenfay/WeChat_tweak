//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

typedef void (^CDUnknownBlockType)(void);

@interface MMLiveMagicEngineMemoryMonitorTask : NSObject
{
    CDUnknownBlockType _finalCheckEnableFreeMemoryCallback;
}

@property(copy, nonatomic) CDUnknownBlockType finalCheckEnableFreeMemoryCallback; // @synthesize finalCheckEnableFreeMemoryCallback=_finalCheckEnableFreeMemoryCallback;
- (void)checkMemory;

@end
