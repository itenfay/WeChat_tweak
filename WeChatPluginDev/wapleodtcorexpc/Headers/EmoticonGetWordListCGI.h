//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface EmoticonGetWordListCGI
{
    unsigned int _startTime;
    CDUnknownBlockType _completion;
    CDUnknownBlockType _failed;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int startTime; // @synthesize startTime=_startTime;
@property(copy, nonatomic) CDUnknownBlockType failed; // @synthesize failed=_failed;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
- (void)doReportResult:(_Bool)arg1 wordSize:(unsigned long long)arg2 version:(unsigned long long)arg3;
- (void)didFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (void)createRequest;
- (id)initWithCompletionBlock:(CDUnknownBlockType)arg1 failed:(CDUnknownBlockType)arg2;

@end

