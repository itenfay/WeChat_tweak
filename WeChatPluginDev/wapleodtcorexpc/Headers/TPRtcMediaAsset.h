//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSDictionary, NSString, TPMediaAssetExtraParam;

@interface TPRtcMediaAsset : NSObject
{
    TPMediaAssetExtraParam *extraParams;
    NSDictionary *httpHeader;
    NSString *_streamUrl;
    NSString *_serverUrl;
    unsigned long long _sdpExchangeType;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long sdpExchangeType; // @synthesize sdpExchangeType=_sdpExchangeType;
@property(copy, nonatomic) NSString *serverUrl; // @synthesize serverUrl=_serverUrl;
@property(copy, nonatomic) NSString *streamUrl; // @synthesize streamUrl=_streamUrl;
@property(copy, nonatomic) NSDictionary *httpHeader; // @synthesize httpHeader;
@property(retain, nonatomic) TPMediaAssetExtraParam *extraParams; // @synthesize extraParams;
@property(readonly, copy, nonatomic) NSString *url;
@property(readonly, nonatomic) long long mediaType;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

