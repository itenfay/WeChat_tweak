//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class QHandDrawTileOverlayDataProvider;

@interface QHandDrawTileOverlay
{
    QHandDrawTileOverlayDataProvider *_provider;
}

- (void).cxx_destruct;
@property(retain, nonatomic) QHandDrawTileOverlayDataProvider *provider; // @synthesize provider=_provider;
- (id)init;
- (void)dealloc;
- (void)onHandDrawMapVesionCheck:(id)arg1;
- (void)loadTileAtPath:(CDStruct_7e23819f)arg1 result:(CDUnknownBlockType)arg2;
- (id)URLForTilePath:(CDStruct_7e23819f)arg1;

@end

