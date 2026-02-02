//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray, NSMutableDictionary;

@interface WAJSEventHandler_addMapMarkers
{
    NSMutableArray *_markersAddMap;
    NSMutableArray *_markersAddCluster;
    NSMutableArray *_markersId;
    NSMutableDictionary *_imageCache;
}

+ (id)makeIconImage:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *imageCache; // @synthesize imageCache=_imageCache;
@property(retain, nonatomic) NSMutableArray *markersId; // @synthesize markersId=_markersId;
@property(retain, nonatomic) NSMutableArray *markersAddCluster; // @synthesize markersAddCluster=_markersAddCluster;
@property(retain, nonatomic) NSMutableArray *markersAddMap; // @synthesize markersAddMap=_markersAddMap;
- (unsigned long long)parseCollisionType:(id)arg1 isCluster:(_Bool)arg2;
- (void)addMapMarker:(id)arg1 marker:(id)arg2;
- (void)handleJSEvent:(id)arg1;

@end

