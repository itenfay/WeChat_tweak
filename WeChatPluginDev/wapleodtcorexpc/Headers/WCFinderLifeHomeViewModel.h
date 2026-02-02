//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class AnyPromise, MMTimer, NSArray, NSMutableArray, NSString, WCFinderCachedLocation, WCFinderGetLocationToken;
@protocol WCFinderLifeHomeViewModelDelegate;

@interface WCFinderLifeHomeViewModel : NSObject
{
    _Bool _showSearchBar;
    int _commentScene;
    id <WCFinderLifeHomeViewModelDelegate> _delegate;
    NSArray *_rootTags;
    unsigned long long _locationStatus;
    long long _defaultSelectedIdx;
    NSMutableArray *_mutDisplayPages;
    WCFinderCachedLocation *_cachedLocation;
    AnyPromise *_fetchLocationPromise;
    MMTimer *_locationFetchTimer;
    NSMutableArray *_postedDataItems;
    WCFinderGetLocationToken *_locToken;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderGetLocationToken *locToken; // @synthesize locToken=_locToken;
@property(retain, nonatomic) NSMutableArray *postedDataItems; // @synthesize postedDataItems=_postedDataItems;
@property(retain, nonatomic) MMTimer *locationFetchTimer; // @synthesize locationFetchTimer=_locationFetchTimer;
@property(retain, nonatomic) AnyPromise *fetchLocationPromise; // @synthesize fetchLocationPromise=_fetchLocationPromise;
@property(retain, nonatomic) WCFinderCachedLocation *cachedLocation; // @synthesize cachedLocation=_cachedLocation;
@property(retain, nonatomic) NSMutableArray *mutDisplayPages; // @synthesize mutDisplayPages=_mutDisplayPages;
@property(nonatomic) int commentScene; // @synthesize commentScene=_commentScene;
@property(nonatomic) _Bool showSearchBar; // @synthesize showSearchBar=_showSearchBar;
@property(nonatomic) long long defaultSelectedIdx; // @synthesize defaultSelectedIdx=_defaultSelectedIdx;
@property(nonatomic) unsigned long long locationStatus; // @synthesize locationStatus=_locationStatus;
@property(retain, nonatomic) NSArray *rootTags; // @synthesize rootTags=_rootTags;
@property(nonatomic) __weak id <WCFinderLifeHomeViewModelDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onFinderDataItemDelete:(id)arg1;
- (id)findRootTabPageVM:(long long *)arg1 forceCreate:(_Bool)arg2;
- (void)onFinderPostSessionUpLoadFailWithTid:(id)arg1 errorType:(long long)arg2;
- (void)onFinderPostSessionUpLoadSuccessful:(id)arg1;
- (void)onFinderPostSessionStartUpload:(id)arg1;
- (void)updateCachedLocationWithLocation:(id)arg1;
- (void)triggerTimelyLocationFetch;
- (void)invalidateLocationFetchTimer;
- (void)setupTimelyLocationFetch;
- (void)changeFilter:(id)arg1 forRootTag:(id)arg2;
- (id)displayPageForRootTag:(id)arg1;
- (void)_setupFirstPages:(id)arg1;
- (id)fetchFirstPages:(_Bool)arg1;
- (void)refetchDatasAfterAuthedLocation;
- (void)requestFirstPage;
- (id)requestLocationAuth;
- (void)cancelFetchLocation;
- (void)tryRefetchLocationAuth;
@property(readonly, nonatomic) NSArray *displayPages;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

