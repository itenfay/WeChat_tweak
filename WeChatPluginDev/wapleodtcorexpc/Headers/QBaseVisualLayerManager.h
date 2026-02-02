//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSString, QBasicMapView, QLayerManager;

@interface QBaseVisualLayerManager : NSObject
{
    NSMutableArray *_layers;
    NSMutableDictionary *_visualayerDict;
    QBasicMapView *_basicMapView;
    QLayerManager *_internalLayerManager;
    NSString *_apiKey;
    NSString *_configPath;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *configPath; // @synthesize configPath=_configPath;
@property(copy, nonatomic) NSString *apiKey; // @synthesize apiKey=_apiKey;
@property(nonatomic) __weak QLayerManager *internalLayerManager; // @synthesize internalLayerManager=_internalLayerManager;
@property(nonatomic) __weak QBasicMapView *basicMapView; // @synthesize basicMapView=_basicMapView;
@property(retain, nonatomic) NSMutableDictionary *visualayerDict; // @synthesize visualayerDict=_visualayerDict;
@property(retain, nonatomic) NSMutableArray *layers; // @synthesize layers=_layers;
- (void)requestVisualLayerData:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)updateAuthenticationConfig:(id)arg1;
- (void)remove:(id)arg1;
- (void)addLayer:(id)arg1;

@end

