//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class AVAssetResourceLoadingRequest, NSString, TPCertificateMgr;

@interface TPFairPlayMgr : NSObject
{
    NSString *_contentKeyUrl;
    AVAssetResourceLoadingRequest *_loadingRequest;
    TPCertificateMgr *_certificateMgr;
}

- (void).cxx_destruct;
@property(retain, nonatomic) TPCertificateMgr *certificateMgr; // @synthesize certificateMgr=_certificateMgr;
@property(retain, nonatomic) AVAssetResourceLoadingRequest *loadingRequest; // @synthesize loadingRequest=_loadingRequest;
@property(retain, nonatomic) NSString *contentKeyUrl; // @synthesize contentKeyUrl=_contentKeyUrl;
- (void)requestContentKeyWithSPCData:(id)arg1 assetIDData:(id)arg2;
- (_Bool)resourceLoader:(id)arg1 shouldWaitForLoadingOfRequestedResource:(id)arg2;
- (void)setDRMAsset:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

