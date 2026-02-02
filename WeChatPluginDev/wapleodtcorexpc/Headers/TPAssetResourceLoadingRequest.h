//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableSet, NSString, TPAssetResourceLoadingContentInformationRequest, TPAssetResourceLoadingDataRequest;
@protocol TPAssetResourceLoadingRequestDelegate;

@interface TPAssetResourceLoadingRequest : NSObject
{
    _Bool _finished;
    _Bool _cancelled;
    int _requestNum;
    TPAssetResourceLoadingDataRequest *_dataRequest;
    TPAssetResourceLoadingContentInformationRequest *_contentInformationRequest;
    id <TPAssetResourceLoadingRequestDelegate> _delegate;
    NSMutableSet *_mergeRequestNumSet;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableSet *mergeRequestNumSet; // @synthesize mergeRequestNumSet=_mergeRequestNumSet;
@property(nonatomic) __weak id <TPAssetResourceLoadingRequestDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic, getter=isCancelled) _Bool cancelled; // @synthesize cancelled=_cancelled;
@property(readonly, nonatomic, getter=isFinished) _Bool finished; // @synthesize finished=_finished;
@property(retain, nonatomic) TPAssetResourceLoadingContentInformationRequest *contentInformationRequest; // @synthesize contentInformationRequest=_contentInformationRequest;
@property(retain, nonatomic) TPAssetResourceLoadingDataRequest *dataRequest; // @synthesize dataRequest=_dataRequest;
@property(nonatomic) int requestNum; // @synthesize requestNum=_requestNum;
@property(readonly, nonatomic) NSString *fileName;
- (void)onFillContentInformation:(id)arg1;
- (void)finishLoading;
@property(readonly, copy) NSString *description;
- (_Bool)isEmptyLoadingRequest;
- (void)removeRequestWithNum:(unsigned int)arg1;
- (_Bool)isRequestMerged:(unsigned int)arg1;
- (void)addRequestNum:(unsigned int)arg1;
- (id)initWithOffset:(long long)arg1 length:(long long)arg2 num:(int)arg3 endOfResource:(_Bool)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

