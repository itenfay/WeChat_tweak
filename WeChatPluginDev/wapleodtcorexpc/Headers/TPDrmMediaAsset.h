//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSDictionary, NSString, TPMediaAssetExtraParam;

@interface TPDrmMediaAsset : NSObject
{
    TPMediaAssetExtraParam *extraParams;
    NSDictionary *httpHeader;
    long long _drmType;
    NSString *_videoUrl;
    NSString *_certificateUrl;
    NSString *_contentKeyUrl;
    NSString *_cacheDir;
    NSString *_drmPropertyUseL1;
    NSString *_drmPropertyGuid;
    NSString *_drmPropertyPlatform;
    NSString *_drmPropertyAppVersion;
    NSString *_drmPropertyCookie;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *drmPropertyCookie; // @synthesize drmPropertyCookie=_drmPropertyCookie;
@property(retain, nonatomic) NSString *drmPropertyAppVersion; // @synthesize drmPropertyAppVersion=_drmPropertyAppVersion;
@property(retain, nonatomic) NSString *drmPropertyPlatform; // @synthesize drmPropertyPlatform=_drmPropertyPlatform;
@property(retain, nonatomic) NSString *drmPropertyGuid; // @synthesize drmPropertyGuid=_drmPropertyGuid;
@property(retain, nonatomic) NSString *drmPropertyUseL1; // @synthesize drmPropertyUseL1=_drmPropertyUseL1;
@property(retain, nonatomic) NSString *cacheDir; // @synthesize cacheDir=_cacheDir;
@property(retain, nonatomic) NSString *contentKeyUrl; // @synthesize contentKeyUrl=_contentKeyUrl;
@property(retain, nonatomic) NSString *certificateUrl; // @synthesize certificateUrl=_certificateUrl;
@property(retain, nonatomic) NSString *videoUrl; // @synthesize videoUrl=_videoUrl;
@property(nonatomic) long long drmType; // @synthesize drmType=_drmType;
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

