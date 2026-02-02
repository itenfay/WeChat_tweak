//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMWebviewPrefetchResult, NSString;

@interface MMWebOptimizationCheckResult
{
    _Bool _hasAllowanceAsyncA8Key;
    _Bool _hasCacheDnsResult;
    NSString *_a8KeyRespUrl;
    MMWebviewPrefetchResult *_prefetchResult;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMWebviewPrefetchResult *prefetchResult; // @synthesize prefetchResult=_prefetchResult;
@property(nonatomic) _Bool hasCacheDnsResult; // @synthesize hasCacheDnsResult=_hasCacheDnsResult;
@property(copy, nonatomic) NSString *a8KeyRespUrl; // @synthesize a8KeyRespUrl=_a8KeyRespUrl;
@property(nonatomic) _Bool hasAllowanceAsyncA8Key; // @synthesize hasAllowanceAsyncA8Key=_hasAllowanceAsyncA8Key;

@end

