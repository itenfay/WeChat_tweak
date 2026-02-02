//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSString, QMapContext, QMediator, TBTileOverlayRenderContainer;
@protocol QTileOverlayManagerDelegate;

@interface QTileOverlayManager : NSObject
{
    QMapContext *_mapContext;
    id <QTileOverlayManagerDelegate> _delegate;
    QMediator *_mediator;
    TBTileOverlayRenderContainer *_tileOverlayRenders;
}

- (void).cxx_destruct;
@property(retain, nonatomic) TBTileOverlayRenderContainer *tileOverlayRenders; // @synthesize tileOverlayRenders=_tileOverlayRenders;
@property(nonatomic) __weak QMediator *mediator; // @synthesize mediator=_mediator;
@property(nonatomic) __weak id <QTileOverlayManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak QMapContext *mapContext; // @synthesize mapContext=_mapContext;
- (void)dealloc;
- (id)init;
- (void)updateReuseMultiLevelsForTileOverlayView:(id)arg1;
- (void)setTileOverlayPriority:(int)arg1 forPayLoad:(id)arg2;
- (id)viewForOverlay:(id)arg1;
@property(readonly, nonatomic) NSArray *tileOverlays;
- (void)reloadTileOverlay:(id)arg1;
- (void)removeTileOverlay:(id)arg1;
- (id)addTileOverlay:(id)arg1;
- (void)refresh;
- (_Bool)containsTileOverlay:(id)arg1;
- (CDStruct_7e23819f)pathForInternal:(id)arg1;
- (void)mapContext:(id)arg1 cancelDownloadTile:(id)arg2;
- (void)mapContext:(id)arg1 downloadTile:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

