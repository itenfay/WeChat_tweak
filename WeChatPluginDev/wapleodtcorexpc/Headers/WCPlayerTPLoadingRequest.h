//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, TPAssetResourceLoadingRequest;

@interface WCPlayerTPLoadingRequest
{
    _Bool _bUseNotifyMode;
    NSString *_filePath;
    TPAssetResourceLoadingRequest *_loadingRequest;
}

- (void).cxx_destruct;
@property(retain, nonatomic) TPAssetResourceLoadingRequest *loadingRequest; // @synthesize loadingRequest=_loadingRequest;
@property(nonatomic) _Bool bUseNotifyMode; // @synthesize bUseNotifyMode=_bUseNotifyMode;
@property(retain, nonatomic) NSString *filePath; // @synthesize filePath=_filePath;
- (id)contentInformationRequest;
- (id)getFileName;
- (void)finishLoading;
- (void)finishLoadingWithError:(id)arg1;
- (void)notifyDataReady:(long long)arg1 length:(long long)arg2;
- (void)respondWithData:(id)arg1;
- (_Bool)fillInformationWithMimeType:(id)arg1 length:(unsigned long long)arg2;
- (id)getLoadingRequest;
- (_Bool)isFinished;
- (_Bool)requestsAllDataToEndOfResource;
- (unsigned long long)currentOffset;
- (unsigned long long)requestedLength;
- (unsigned long long)requestedOffset;
- (id)initWithResourceLoadingRequest:(id)arg1;

@end

