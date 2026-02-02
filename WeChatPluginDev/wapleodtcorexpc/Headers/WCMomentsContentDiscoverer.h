//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSMutableDictionary, NSString, WCFacade, WCHotwordRegExpReplacer;

@interface WCMomentsContentDiscoverer : NSObject
{
    _Bool _hotwordConfigurationsChanged;
    WCFacade *_referredFacade;
    NSArray *_hotwordConfigurations;
    WCHotwordRegExpReplacer *_hotwordRegExpReplacer;
    NSMutableDictionary *_discoveryContentCacheForDataItems;
    NSMutableDictionary *_discoveryContentCacheForUserComments;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *discoveryContentCacheForUserComments; // @synthesize discoveryContentCacheForUserComments=_discoveryContentCacheForUserComments;
@property(retain, nonatomic) NSMutableDictionary *discoveryContentCacheForDataItems; // @synthesize discoveryContentCacheForDataItems=_discoveryContentCacheForDataItems;
@property(retain, nonatomic) WCHotwordRegExpReplacer *hotwordRegExpReplacer; // @synthesize hotwordRegExpReplacer=_hotwordRegExpReplacer;
@property(copy, nonatomic) NSArray *hotwordConfigurations; // @synthesize hotwordConfigurations=_hotwordConfigurations;
@property(nonatomic) _Bool hotwordConfigurationsChanged; // @synthesize hotwordConfigurationsChanged=_hotwordConfigurationsChanged;
@property(nonatomic) __weak WCFacade *referredFacade; // @synthesize referredFacade=_referredFacade;
- (void)onFinderKeywordConfigsChanged:(id)arg1;
- (id)hotwordMatchFromURLString:(id)arg1;
- (id)urlStringForHotwordMatch:(id)arg1;
- (void)_discoverHotwordsInContentForUserComment:(id)arg1 fromDataItem:(id)arg2;
- (void)_discoverHotwordsInContentDescForDataItem:(id)arg1;
- (void)discoverHotwordsForDataItem:(id)arg1;
- (void)discoverHotwordsForDataItems:(id)arg1;
- (unsigned long long)hotwordDiscoverContentTypesForDataItem:(id)arg1;
- (void)discoverInContentForUserComment:(id)arg1 fromDataItem:(id)arg2;
- (void)discoverInContentDescForDataItem:(id)arg1;
- (void)discoverInAllContentsForDataItems:(id)arg1;
- (id)hotwordRegExpReplacerFromConfigurations:(id)arg1;
- (id)hotwordConfigurationsFromFinderConfigurations:(id)arg1;
- (void)checkUpdatesForHotwords;
- (void)updateHotwordConfigurations:(id)arg1;
- (unsigned long long)matchingHotwordsMaxLength;
- (unsigned long long)matchingHotwordsMaxCount;
- (_Bool)canDisplayHotwords;
- (void)clearCache;
- (id)keyForUserComment:(id)arg1;
- (id)keyForDataItem:(id)arg1;
- (id)init;
- (id)retrieveOriginalStringFromDiscoveryString:(id)arg1 forUserComment:(id)arg2;
- (id)retrieveOriginalStringFromDiscoveryString:(id)arg1 forDataItem:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

