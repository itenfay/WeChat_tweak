//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString, QAOILayerPolygonView, QAOIMarkerManager;

@interface QAOILayer : NSObject
{
    NSString *_uid;
    double _minZoom;
    double _maxZoom;
    double _internalMinZoom;
    double _internalMaxZoom;
    NSMutableArray *_markers;
    QAOILayerPolygonView *_polygonView;
    QAOIMarkerManager *_manager;
}

- (void).cxx_destruct;
@property(nonatomic) __weak QAOIMarkerManager *manager; // @synthesize manager=_manager;
@property(retain, nonatomic) QAOILayerPolygonView *polygonView; // @synthesize polygonView=_polygonView;
@property(retain, nonatomic) NSMutableArray *markers; // @synthesize markers=_markers;
@property(nonatomic) double internalMaxZoom; // @synthesize internalMaxZoom=_internalMaxZoom;
@property(nonatomic) double internalMinZoom; // @synthesize internalMinZoom=_internalMinZoom;
@property(nonatomic) double maxZoom; // @synthesize maxZoom=_maxZoom;
@property(nonatomic) double minZoom; // @synthesize minZoom=_minZoom;
@property(retain, nonatomic) NSString *uid; // @synthesize uid=_uid;
- (void)showSubPois:(_Bool)arg1;
- (id)initWithUID:(id)arg1;

@end

