//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString, QCustomLayerConfigData, QTileOverlayManager;

@interface QCustomLayerManager : NSObject
{
    QTileOverlayManager *_internalManager;
    NSString *_businessKey;
    NSMutableArray *_layers;
    QCustomLayerConfigData *_config;
}

- (void).cxx_destruct;
@property(retain, nonatomic) QCustomLayerConfigData *config; // @synthesize config=_config;
@property(retain, nonatomic) NSMutableArray *layers; // @synthesize layers=_layers;
@property(copy, nonatomic) NSString *businessKey; // @synthesize businessKey=_businessKey;
@property(nonatomic) __weak QTileOverlayManager *internalManager; // @synthesize internalManager=_internalManager;
- (void)doAddTileOverlay:(id)arg1;
- (void)updateAuthenticationConfig:(id)arg1;
- (void)removeCustomLayer:(id)arg1;
- (void)addCustomLayer:(id)arg1;
- (id)init;

@end

