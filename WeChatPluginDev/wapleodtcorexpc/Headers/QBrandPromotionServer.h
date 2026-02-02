//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSMutableSet, NSRecursiveLock, NSString, QBrandPromotionContext, QMapLRUCache;
@protocol QBrandPromotionImageDownloader;

@interface QBrandPromotionServer : NSObject
{
    QBrandPromotionContext *_brandPromotionContext;
    QMapLRUCache *_gridCache;
    NSRecursiveLock *_lock;
    NSMutableDictionary *_viewItemMap;
    NSMutableSet *_latestVisibleGridModels;
    id <QBrandPromotionImageDownloader> _imageDownloader;
    CDStruct_02837cd9 _latestVisibleRect;
}

- (void).cxx_destruct;
@property(nonatomic) CDStruct_02837cd9 latestVisibleRect; // @synthesize latestVisibleRect=_latestVisibleRect;
@property(retain, nonatomic) id <QBrandPromotionImageDownloader> imageDownloader; // @synthesize imageDownloader=_imageDownloader;
@property(retain, nonatomic) NSMutableSet *latestVisibleGridModels; // @synthesize latestVisibleGridModels=_latestVisibleGridModels;
@property(retain, nonatomic) NSMutableDictionary *viewItemMap; // @synthesize viewItemMap=_viewItemMap;
@property(retain, nonatomic) NSRecursiveLock *lock; // @synthesize lock=_lock;
@property(retain, nonatomic) QMapLRUCache *gridCache; // @synthesize gridCache=_gridCache;
@property(retain, nonatomic) QBrandPromotionContext *brandPromotionContext; // @synthesize brandPromotionContext=_brandPromotionContext;
- (void)cache:(id)arg1 willEvictObject:(id)arg2;
- (void)brandPromotionGridModel:(id)arg1 updateItems:(id)arg2;
- (id)createGridModelsInRect:(CDStruct_02837cd9)arg1 scale:(unsigned int)arg2;
- (void)clearMarkerWithViewItem:(id)arg1;
- (void)clearMarkersWithGridModel:(id)arg1;
- (void)updateVisiableGridModels:(CDStruct_02837cd9)arg1 currenOverScale:(unsigned int)arg2 force:(_Bool)arg3;
- (id)promoteConfig;
- (id)mediator;
- (void)destroy;
- (void)updateVisiableRegion:(_Bool)arg1;
- (void)updateConfig:(id)arg1;
- (void)setup;
- (id)initWithContext:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

