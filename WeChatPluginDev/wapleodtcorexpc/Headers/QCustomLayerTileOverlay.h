//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, QCustomLayerConfigItem;

@interface QCustomLayerTileOverlay
{
    NSString *_businessKey;
    NSString *_url;
    QCustomLayerConfigItem *_serverConfig;
}

+ (void)updateCustomLayerCaches:(id)arg1;
+ (id)getTileOverlayCachePath;
- (void).cxx_destruct;
@property(retain, nonatomic) QCustomLayerConfigItem *serverConfig; // @synthesize serverConfig=_serverConfig;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(copy, nonatomic) NSString *businessKey; // @synthesize businessKey=_businessKey;
- (void)dealloc;
- (_Bool)shouldRemoverTileOverlayCache;
- (void)onDownloadFail:(id)arg1 path:(const CDStruct_7e23819f *)arg2 callback:(CDUnknownBlockType)arg3 task:(id)arg4 tileKey:(id)arg5;
- (id)URLForTilePath:(CDStruct_7e23819f)arg1;
- (id)init;

@end

