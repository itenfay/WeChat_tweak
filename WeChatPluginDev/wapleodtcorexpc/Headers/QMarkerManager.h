//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, QMapContext, QMediator;

@interface QMarkerManager : NSObject
{
    QMediator *_mediator;
    QMapContext *_mapContext;
    NSMutableArray *_markerStorage;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *markerStorage; // @synthesize markerStorage=_markerStorage;
@property(nonatomic) __weak QMapContext *mapContext; // @synthesize mapContext=_mapContext;
@property(nonatomic) __weak QMediator *mediator; // @synthesize mediator=_mediator;
- (void)updateMarkerStatus:(id)arg1;
- (id)processMarkerImage:(id)arg1 fromPreviousImage:(id)arg2;
- (id)getmarkerFromID:(int)arg1;
- (id)handlerForNativeMarker:(id)arg1;
- (struct CGPoint)getMarkerAnchor:(struct CGPoint)arg1 imageFrame:(struct CGSize)arg2;
- (id)generateNativeMarkerPayload:(id)arg1;
- (void)removeNativeMarker:(id)arg1;
- (void)addNativeMarker:(id)arg1;
- (void)setDisplayLevel:(id)arg1 level:(long long)arg2;
- (void)updateMarkerAlpha:(id)arg1;
- (void)updateMarkerCoordinate:(id)arg1;
- (void)updateMarkerCenterOffset:(id)arg1;
- (void)updateMarkerIsEnable:(id)arg1;
- (void)updateMarkerIsHidden:(id)arg1;
- (void)updateMarkerZIndex:(id)arg1;
- (void)updateMarkerImage:(id)arg1 fromPreviousImage:(id)arg2;
@property(readonly, nonatomic) NSArray *markers;
- (id)init;

@end

