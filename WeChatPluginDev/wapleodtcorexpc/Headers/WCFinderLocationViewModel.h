//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FinderLbsLocation, NSData, NSMutableArray, NSMutableSet, NSString, WCFinderGetLbsListCgi;
@protocol WCFinderLocationViewModelDelegate;

@interface WCFinderLocationViewModel : NSObject
{
    _Bool _hasTriggerNextPage;
    _Bool _isSearchAssetPOIState;
    _Bool _continueFlag;
    int _scene;
    unsigned long long _poiType;
    id <WCFinderLocationViewModelDelegate> _delegate;
    NSString *_finderUsername;
    NSString *_lastSearchWord;
    FinderLbsLocation *_materialLbsLocation;
    FinderLbsLocation *_searchMaterialLbsLocation;
    WCFinderGetLbsListCgi *_lastCgi;
    NSData *_lastBuffer;
    NSMutableArray *_configArray;
    NSMutableSet *_poiIdSet;
    NSString *_searchId;
    long long _autoQueryInterval;
    NSString *_city;
    NSString *_materialCity;
}

+ (id)convertLocationToLbsConfig:(id)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *materialCity; // @synthesize materialCity=_materialCity;
@property(copy, nonatomic) NSString *city; // @synthesize city=_city;
@property(nonatomic) long long autoQueryInterval; // @synthesize autoQueryInterval=_autoQueryInterval;
@property(copy, nonatomic) NSString *searchId; // @synthesize searchId=_searchId;
@property(retain, nonatomic) NSMutableSet *poiIdSet; // @synthesize poiIdSet=_poiIdSet;
@property(retain, nonatomic) NSMutableArray *configArray; // @synthesize configArray=_configArray;
@property(nonatomic) _Bool continueFlag; // @synthesize continueFlag=_continueFlag;
@property(retain, nonatomic) NSData *lastBuffer; // @synthesize lastBuffer=_lastBuffer;
@property(retain, nonatomic) WCFinderGetLbsListCgi *lastCgi; // @synthesize lastCgi=_lastCgi;
@property(retain, nonatomic) FinderLbsLocation *searchMaterialLbsLocation; // @synthesize searchMaterialLbsLocation=_searchMaterialLbsLocation;
@property(retain, nonatomic) FinderLbsLocation *materialLbsLocation; // @synthesize materialLbsLocation=_materialLbsLocation;
@property(copy, nonatomic) NSString *lastSearchWord; // @synthesize lastSearchWord=_lastSearchWord;
@property(copy, nonatomic) NSString *finderUsername; // @synthesize finderUsername=_finderUsername;
@property(nonatomic) _Bool isSearchAssetPOIState; // @synthesize isSearchAssetPOIState=_isSearchAssetPOIState;
@property(nonatomic) _Bool hasTriggerNextPage; // @synthesize hasTriggerNextPage=_hasTriggerNextPage;
@property(nonatomic) __weak id <WCFinderLocationViewModelDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned long long poiType; // @synthesize poiType=_poiType;
@property(nonatomic) int scene; // @synthesize scene=_scene;
- (_Bool)isOnSearchMaterialGPS;
- (_Bool)noMoreData;
- (void)resetFetchLbsRequest;
- (id)lbsLocation;
- (_Bool)poiHasSelected;
- (void)didSelectCurCellRowIndex:(long long)arg1;
- (void)_fetchLbsListCGI;
- (_Bool)enableShowExtractFromAsset;
- (_Bool)sameAsRunningCgiRequest;
- (void)triggerFetchLbsListByScene:(int)arg1 searchWord:(id)arg2;
- (void)triggerFetchLbsListByScene:(int)arg1 searchMaterialLbsLocation:(struct CLLocationCoordinate2D)arg2;
- (void)addNotShowPOI;
- (void)removeNotShowPOI;
- (id)configOfIndex:(long long)arg1;
- (long long)numberOfRows;
- (int)getCurPoiBusinessType;
- (id)getCurLbsConfig;
- (id)getSelectedLocation;
- (void)mergeWithSelectedLocation:(id)arg1;
- (id)initWithPOIType:(unsigned long long)arg1 finderUsername:(id)arg2 selectedLocation:(id)arg3 materialLbsLocation:(id)arg4;

@end

