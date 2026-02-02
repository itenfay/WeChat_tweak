//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class JSC2CodeCacheDetail, NSString, NSURL;

@interface WALocalCacheEvaluateResult : NSObject
{
    unsigned int _scriptLength;
    unsigned int _ret;
    unsigned int _costTimeInMs;
    NSString *_fileName;
    NSURL *_sourceUrl;
    unsigned long long _startInjectTimeInMs;
    unsigned long long _endInjectTimeInMs;
    JSC2CodeCacheDetail *_codeCacheDetail;
}

- (void).cxx_destruct;
@property(retain, nonatomic) JSC2CodeCacheDetail *codeCacheDetail; // @synthesize codeCacheDetail=_codeCacheDetail;
@property(nonatomic) unsigned int costTimeInMs; // @synthesize costTimeInMs=_costTimeInMs;
@property(nonatomic) unsigned long long endInjectTimeInMs; // @synthesize endInjectTimeInMs=_endInjectTimeInMs;
@property(nonatomic) unsigned long long startInjectTimeInMs; // @synthesize startInjectTimeInMs=_startInjectTimeInMs;
@property(nonatomic) unsigned int ret; // @synthesize ret=_ret;
@property(nonatomic) unsigned int scriptLength; // @synthesize scriptLength=_scriptLength;
@property(retain, nonatomic) NSURL *sourceUrl; // @synthesize sourceUrl=_sourceUrl;
@property(copy, nonatomic) NSString *fileName; // @synthesize fileName=_fileName;

@end

