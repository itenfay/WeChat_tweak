//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableDictionary, NSString, QDataLayerConfigData, QVisCacheManager, QVisualLayerDataDownloader;

@interface QVisualLayerManager
{
    _Bool _isAuthened;
    NSString *_apiKey;
    NSString *_configPath;
    QDataLayerConfigData *_config;
    NSMutableDictionary *_glOverlayDict;
    QVisualLayerDataDownloader *_engine;
    QVisCacheManager *_cacheManager;
}

- (void).cxx_destruct;
@property(retain, nonatomic) QVisCacheManager *cacheManager; // @synthesize cacheManager=_cacheManager;
@property(retain, nonatomic) QVisualLayerDataDownloader *engine; // @synthesize engine=_engine;
@property(retain, nonatomic) NSMutableDictionary *glOverlayDict; // @synthesize glOverlayDict=_glOverlayDict;
@property(nonatomic) _Bool isAuthened; // @synthesize isAuthened=_isAuthened;
@property(retain, nonatomic) QDataLayerConfigData *config; // @synthesize config=_config;
- (id)configPath;
- (id)apiKey;
- (id)layerForID:(id)arg1;
- (id)executeCommandOnLayer:(id)arg1 mapView:(id)arg2 commandJson:(id)arg3;
- (_Bool)checkLayerUpdateNeeded:(id)arg1;
- (void)processVisLayerData:(id)arg1 layer:(id)arg2;
- (id)generateLayerURL:(id)arg1;
- (void)requestVisualLayerData:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)notifyLoadLayer:(id)arg1 withError:(id)arg2;
- (void)compareModelDataID:(id)arg1 withNewData:(id)arg2;
- (_Bool)isConfigContainsLayer:(id)arg1;
- (void)resetVisLayers;
- (void)startVerCheck:(id)arg1 configItem:(id)arg2;
- (void)updateAuthenticationConfig:(id)arg1;
- (void)notifyVisualLog:(id)arg1 withLog:(id)arg2 andLevel:(int)arg3;
- (id)convertIntColor:(int)arg1;
- (void)updateGlOverlayViewProperties:(id)arg1 property:(id)arg2;
- (void)updateVisLayerProperty:(id)arg1 properties:(id)arg2;
- (void)loadCommonControls:(id)arg1 dict:(id)arg2;
- (id)loadVisArcLineData:(id)arg1;
- (id)loadVisLayerPointData:(id)arg1;
- (id)getPairedDataAndStyle:(id)arg1;
- (void)constructModelLayer:(id)arg1 layer:(id)arg2;
- (void)constructArcLineLayer:(id)arg1 layer:(id)arg2;
- (void)constructHeatLayer:(id)arg1 layer:(id)arg2;
- (void)constructHoneyCombLayer:(id)arg1 layer:(id)arg2;
- (void)loadLocalCacheData:(id)arg1;
- (void)upDateGLOverlay:(id)arg1 info:(id)arg2;
- (void)addGLOverlay:(id)arg1 withView:(id)arg2 info:(id)arg3 andLayer:(id)arg4;
- (void)remove:(id)arg1;
- (void)add:(id)arg1 layer:(id)arg2;
- (void)addLayer:(id)arg1;
- (void)setLayerZIndex:(id)arg1;
- (void)setLayerVisibility:(id)arg1;
- (void)setLayerOpacity:(id)arg1;
- (void)setApiKey:(id)arg1;
- (void)setConfigPath:(id)arg1;
- (id)init;
- (void)updateArcLineLayer:(id)arg1 param:(id)arg2;
- (void)updateArcLayer:(id)arg1 withDataAndStyle:(id)arg2;
- (void)loadArcLineDataAndStyle:(id)arg1 payload:(id)arg2;
- (void)setArcLineControls:(id)arg1 controls:(id)arg2;
- (void)resetPedestal;
- (int)updatePedestal:(id)arg1;
- (CDStruct_02837cd9)pedestalMapRectForVisualLayer:(id)arg1;
- (void)updatePedestal;
- (void)setModelPath:(id)arg1 withPaylaod:(id)arg2 andLayer:(id)arg3;
- (void)updateModelLayerControls:(id)arg1 withPayload:(id)arg2;
- (void)updateModelRenderMode:(id)arg1 withInfo:(id)arg2;
- (void)updateModelLayerParams:(id)arg1 withPayload:(id)arg2;
- (id)createModelLayer:(id)arg1;
- (void)updateAllModelLayersForSameOriginalLayerId:(id)arg1;
- (void)updateModelLayer:(id)arg1;
- (void)saveModelFiles:(id)arg1 withLayer:(id)arg2;
- (void)downloadModelLayerData:(id)arg1 withUrl:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)setModleLayerRotation:(id)arg1 withPayload:(id)arg2;
- (void)setModleLayerPosition:(id)arg1 withPayload:(id)arg2;
- (_Bool)checkCacheExist:(id)arg1 withPayload:(id)arg2;
- (id)getModelLayerDownloadURL:(id)arg1;
- (void)fillModelStyleFromInfo:(id)arg1 payload:(id)arg2;
- (void)fillModelDataFromInfo:(id)arg1 payload:(id)arg2;
- (void)loadModelData:(id)arg1 withPayload:(id)arg2;
- (void)setModelLayerDataAndStyle:(id)arg1 payload:(id)arg2;
- (void)setModelLayerControls:(id)arg1 withPayload:(id)arg2;
- (void)createHoneyCombLayerOption:(id)arg1 param:(id)arg2;
- (void)updateHoneyCombLayerParam:(id)arg1 param:(id)arg2;
- (void)updateHoneyCombLayer:(id)arg1;
- (void)loadHoneyCombThemeStyle:(id)arg1 styleDict:(id)arg2;
- (void)loadHoneyCombDataAndStyle:(id)arg1 payload:(id)arg2;
- (void)setHoneyCombControls:(id)arg1 controls:(id)arg2;
- (void)loadHeatThemeStyle:(id)arg1 styleDict:(id)arg2;
- (void)loadHeatDataAndStyle:(id)arg1 payload:(id)arg2;
- (void)setHeatControls:(id)arg1 controls:(id)arg2;
- (void)updateHeatLayerParam:(id)arg1 param:(id)arg2;
- (void)updateHeatLayer:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

