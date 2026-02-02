//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class AVAssetResourceLoadingRequest, AVURLAsset, NSString, WCPlayerCertificateMgr, WCPlayerFairPlayInfo, WCPlayerReporter;
@protocol WCPlayerResourceLoaderDelegate;

@interface WCPlayerFairPlayResourceLoader : NSObject
{
    WCPlayerReporter *_reporter;
    AVURLAsset *_asset;
    id <WCPlayerResourceLoaderDelegate> _delegate;
    AVAssetResourceLoadingRequest *_loadingRequest;
    WCPlayerFairPlayInfo *_fairPlayInfo;
    WCPlayerCertificateMgr *_certificateMgr;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCPlayerCertificateMgr *certificateMgr; // @synthesize certificateMgr=_certificateMgr;
@property(retain, nonatomic) WCPlayerFairPlayInfo *fairPlayInfo; // @synthesize fairPlayInfo=_fairPlayInfo;
@property(retain, nonatomic) AVAssetResourceLoadingRequest *loadingRequest; // @synthesize loadingRequest=_loadingRequest;
@property(nonatomic) __weak id <WCPlayerResourceLoaderDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) AVURLAsset *asset; // @synthesize asset=_asset;
@property(retain, nonatomic) WCPlayerReporter *reporter; // @synthesize reporter=_reporter;
- (void)resourceLoader:(id)arg1 didCancelLoadingRequest:(id)arg2;
- (void)requestContentKeyWithSPCData:(id)arg1 assetIDData:(id)arg2;
- (_Bool)resourceLoader:(id)arg1 shouldWaitForLoadingOfRequestedResource:(id)arg2;
- (void)updateFairPlayInfo:(id)arg1;
- (void)updateCertificate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

