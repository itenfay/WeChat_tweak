//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WCPlayerLoadingRequest : NSObject
{
    unsigned int _loadingRequestNum;
}

@property(nonatomic) unsigned int loadingRequestNum; // @synthesize loadingRequestNum=_loadingRequestNum;
- (id)contentInformationRequest;
- (id)getFileName;
- (id)getLoadingRequest;
- (id)getFormatDes;
- (_Bool)fillInformationWithMimeType:(id)arg1 length:(unsigned long long)arg2;
- (void)finishLoading;
- (void)finishLoadingWithError:(id)arg1;
- (void)notifyDataReady:(long long)arg1 length:(long long)arg2;
- (void)respondWithData:(id)arg1;
- (_Bool)requestsAllDataToEndOfResource;
- (unsigned long long)currentOffset;
- (unsigned long long)requestedLength;
- (unsigned long long)requestedOffset;
- (_Bool)isFinished;
- (id)initWithResourceLoadingRequest:(id)arg1;

@end

