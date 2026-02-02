//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MJMovieComposingASRProcessor;

@interface MJOSTAnalyzer
{
    MJMovieComposingASRProcessor *_asrProcessor;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MJMovieComposingASRProcessor *asrProcessor; // @synthesize asrProcessor=_asrProcessor;
- (void)analyzeWithContext:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)init;

@end

