//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface MJMusicAnalyzer
{
    long long _queryCount;
}

@property long long queryCount; // @synthesize queryCount=_queryCount;
- (void)processAnalysisResultWithClassifyHelper:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)analyzeWithClassifyHelper:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)analyzeWithContext:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)init;

@end

