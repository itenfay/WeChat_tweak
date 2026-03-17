//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

typedef void (^CDUnknownBlockType)(void);

@class MMWebOptimJSContextTaskConfig;

@interface MMWebOptimJSContextTaskLoaderContext : NSObject
{
    MMWebOptimJSContextTaskConfig *_config;
    CDUnknownBlockType _successBlock;
    CDUnknownBlockType _failedBlock;
}

@property(copy, nonatomic) CDUnknownBlockType failedBlock; // @synthesize failedBlock=_failedBlock;
@property(copy, nonatomic) CDUnknownBlockType successBlock; // @synthesize successBlock=_successBlock;
@property(retain, nonatomic) MMWebOptimJSContextTaskConfig *config; // @synthesize config=_config;

@end
