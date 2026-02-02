//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class QUniversalMapCounter, QWorldTileOverlayDataProvider;

@interface QWorldTileOverlay
{
    _Bool _darkEnabled;
    int _sceneType;
    long long _language;
    QUniversalMapCounter *_universalCounter;
    QWorldTileOverlayDataProvider *_worldProvider;
    QWorldTileOverlayDataProvider *_normalProvider;
    QWorldTileOverlayDataProvider *_darkProvider;
}

- (void).cxx_destruct;
@property(nonatomic) int sceneType; // @synthesize sceneType=_sceneType;
@property(retain, nonatomic) QWorldTileOverlayDataProvider *darkProvider; // @synthesize darkProvider=_darkProvider;
@property(retain, nonatomic) QWorldTileOverlayDataProvider *normalProvider; // @synthesize normalProvider=_normalProvider;
@property(retain, nonatomic) QWorldTileOverlayDataProvider *worldProvider; // @synthesize worldProvider=_worldProvider;
@property(nonatomic) __weak QUniversalMapCounter *universalCounter; // @synthesize universalCounter=_universalCounter;
@property(nonatomic) _Bool darkEnabled; // @synthesize darkEnabled=_darkEnabled;
@property(nonatomic) long long language; // @synthesize language=_language;
- (id)init;
- (void)dealloc;
- (void)onWorldVesionCheck:(id)arg1;
- (void)loadTileAtPath:(CDStruct_7e23819f)arg1 result:(CDUnknownBlockType)arg2;
- (id)URLForTilePath:(CDStruct_7e23819f)arg1;
- (id)fakeUrlForPath:(CDStruct_7e23819f)arg1;
- (id)provider;

@end

