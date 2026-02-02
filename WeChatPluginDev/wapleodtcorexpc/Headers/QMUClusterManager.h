//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableSet, NSString, QMUPointQuadTree, QMUUnivisalClusterAlgorithm, QMapView;
@protocol QMUClusterProtocol;

@interface QMUClusterManager : NSObject
{
    double _distance;
    id <QMUClusterProtocol> _delegate;
    QMapView *_map;
    QMUPointQuadTree *_tree;
    NSMutableSet *_items;
    QMUUnivisalClusterAlgorithm *_clusterStrategy;
}

- (void).cxx_destruct;
@property(retain, nonatomic) QMUUnivisalClusterAlgorithm *clusterStrategy; // @synthesize clusterStrategy=_clusterStrategy;
@property(retain, nonatomic) NSMutableSet *items; // @synthesize items=_items;
@property(retain, nonatomic) QMUPointQuadTree *tree; // @synthesize tree=_tree;
@property(nonatomic) __weak QMapView *map; // @synthesize map=_map;
@property(nonatomic) __weak id <QMUClusterProtocol> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) double distance; // @synthesize distance=_distance;
- (void)doRemove:(id)arg1;
- (void)doAdd:(id)arg1;
- (void)clearAnnotations;
- (void)addAnnotations:(id)arg1;
- (void)removeAnnotaion:(id)arg1;
- (void)removeAnnotations:(id)arg1;
- (void)addAnnotaion:(id)arg1;
- (_Bool)algorithm:(id)arg1 clusterAnnotation:(id)arg2 withAnnotation:(id)arg3;
- (void)refreshCluster;
- (void)onRegionChanged:(id)arg1;
@property(nonatomic) int thresholdZoomlevel;
- (void)dealloc;
- (id)initWithMap:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

