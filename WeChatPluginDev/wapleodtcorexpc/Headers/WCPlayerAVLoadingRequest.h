//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class AVAssetResourceLoadingRequest;

@interface WCPlayerAVLoadingRequest
{
    AVAssetResourceLoadingRequest *_loadingRequest;
}

- (void).cxx_destruct;
@property(retain, nonatomic) AVAssetResourceLoadingRequest *loadingRequest; // @synthesize loadingRequest=_loadingRequest;
- (id)contentInformationRequest;
- (id)getFileName;
- (void)notifyDataReady:(long long)arg1 length:(long long)arg2;
- (void)respondWithData:(id)arg1;
- (_Bool)fillInformationWithMimeType:(id)arg1 length:(unsigned long long)arg2;
- (void)finishLoadingWithError:(id)arg1;
- (void)finishLoading;
- (id)getLoadingRequest;
- (_Bool)isFinished;
- (_Bool)requestsAllDataToEndOfResource;
- (unsigned long long)currentOffset;
- (unsigned long long)requestedLength;
- (unsigned long long)requestedOffset;
- (id)initWithResourceLoadingRequest:(id)arg1;

@end

