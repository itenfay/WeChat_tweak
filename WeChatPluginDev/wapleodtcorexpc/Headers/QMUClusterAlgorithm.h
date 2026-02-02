//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableSet, NSMutableString, QMUPointQuadTree, QMapView;
@protocol QMUClusterAlgorithmProtocol;

@interface QMUClusterAlgorithm : NSObject
{
    double _distance;
    QMapView *_map;
    id <QMUClusterAlgorithmProtocol> _delegate;
    QMUPointQuadTree *_tree;
    NSMutableSet *_items;
    NSMutableArray *_preItems;
    NSMutableString *_preZoomlevel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableString *preZoomlevel; // @synthesize preZoomlevel=_preZoomlevel;
@property(retain, nonatomic) NSMutableArray *preItems; // @synthesize preItems=_preItems;
@property(nonatomic) __weak NSMutableSet *items; // @synthesize items=_items;
@property(nonatomic) __weak QMUPointQuadTree *tree; // @synthesize tree=_tree;
@property(nonatomic) __weak id <QMUClusterAlgorithmProtocol> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak QMapView *map; // @synthesize map=_map;
@property(nonatomic) double distance; // @synthesize distance=_distance;
- (void)resetState;
- (id)getClusters;
- (id)getItemsToBeClustered;
- (void)refreshCluster;
- (CDStruct_c519178c)getBound:(id)arg1;
- (double)distanceBetween:(id)arg1 and:(id)arg2;
- (double)meterPerCGPointAtZoom:(double)arg1;
- (id)initWithDateStorer:(id)arg1 originData:(id)arg2;

@end

