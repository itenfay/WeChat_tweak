//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMFinderLiveTaskId, NSString;

@interface WCFinderLivePresentationFileValidationCGI
{
    unsigned int _fileType;
    MMFinderLiveTaskId *_taskId;
    NSString *_finderUsername;
    unsigned long long _liveId;
    unsigned long long _finderId;
    NSString *_finderNonceId;
    NSString *_fileMD5;
    NSString *_fileCDNURL;
    CDUnknownBlockType _successBlock;
    CDUnknownBlockType _failureBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType failureBlock; // @synthesize failureBlock=_failureBlock;
@property(copy, nonatomic) CDUnknownBlockType successBlock; // @synthesize successBlock=_successBlock;
@property(copy, nonatomic) NSString *fileCDNURL; // @synthesize fileCDNURL=_fileCDNURL;
@property(copy, nonatomic) NSString *fileMD5; // @synthesize fileMD5=_fileMD5;
@property(nonatomic) unsigned int fileType; // @synthesize fileType=_fileType;
@property(copy, nonatomic) NSString *finderNonceId; // @synthesize finderNonceId=_finderNonceId;
@property(nonatomic) unsigned long long finderId; // @synthesize finderId=_finderId;
@property(nonatomic) unsigned long long liveId; // @synthesize liveId=_liveId;
@property(copy, nonatomic) NSString *finderUsername; // @synthesize finderUsername=_finderUsername;
@property(retain, nonatomic) MMFinderLiveTaskId *taskId; // @synthesize taskId=_taskId;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (void)createRequest;
- (id)initWithTaskId:(id)arg1 finderUsername:(id)arg2 liveId:(unsigned long long)arg3 finderId:(unsigned long long)arg4 finderNonceId:(id)arg5 fileType:(unsigned int)arg6 fileMD5:(id)arg7 fileCDNURL:(id)arg8 successBlock:(CDUnknownBlockType)arg9 failureBlock:(CDUnknownBlockType)arg10;

@end

