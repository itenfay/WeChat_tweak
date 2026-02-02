//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSData, NSMutableArray;

@interface WCStoryFetchBgmCgiObj
{
    int _businessId;
    NSMutableArray *_imageDatas;
    unsigned long long _videoDuration;
    unsigned long long _requestId;
    NSData *_classifyResultData;
    CDUnknownBlockType _completionBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(retain, nonatomic) NSData *classifyResultData; // @synthesize classifyResultData=_classifyResultData;
@property(nonatomic) unsigned long long requestId; // @synthesize requestId=_requestId;
@property(nonatomic) int businessId; // @synthesize businessId=_businessId;
@property(nonatomic) unsigned long long videoDuration; // @synthesize videoDuration=_videoDuration;
@property(retain, nonatomic) NSMutableArray *imageDatas; // @synthesize imageDatas=_imageDatas;
- (void)didFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (id)buildRequest;
- (void)start;
- (id)initWithBlock:(CDUnknownBlockType)arg1;

@end

