//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMWebOptimJSContextTaskConfig;

@interface MMWebOptimJSContextTaskLoaderContext
{
    MMWebOptimJSContextTaskConfig *_config;
    CDUnknownBlockType _successBlock;
    CDUnknownBlockType _failedBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType failedBlock; // @synthesize failedBlock=_failedBlock;
@property(copy, nonatomic) CDUnknownBlockType successBlock; // @synthesize successBlock=_successBlock;
@property(retain, nonatomic) MMWebOptimJSContextTaskConfig *config; // @synthesize config=_config;

@end

