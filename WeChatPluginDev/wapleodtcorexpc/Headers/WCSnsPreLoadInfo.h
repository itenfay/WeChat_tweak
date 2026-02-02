//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WCSnsPreLoadInfo
{
    _Bool _sightAutoDownloadOn3GPlus;
    _Bool _sightAutoDownloadOnWifi;
    NSString *_layerId;
    NSString *_expId;
}

+ (void)initialize;
+ (void)PBArrayAdd_sightAutoDownloadOnWifi;
+ (void)PBArrayAdd_sightAutoDownloadOn3GPlus;
+ (void)PBArrayAdd_expId;
+ (void)PBArrayAdd_layerId;
- (void).cxx_destruct;
@property(nonatomic) _Bool sightAutoDownloadOnWifi; // @synthesize sightAutoDownloadOnWifi=_sightAutoDownloadOnWifi;
@property(nonatomic) _Bool sightAutoDownloadOn3GPlus; // @synthesize sightAutoDownloadOn3GPlus=_sightAutoDownloadOn3GPlus;
@property(retain, nonatomic) NSString *expId; // @synthesize expId=_expId;
@property(retain, nonatomic) NSString *layerId; // @synthesize layerId=_layerId;
- (_Bool)parsePreLoadInfo:(id)arg1;
- (id)init;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

