//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMFinderLiveContentVM, MMFinderLiveRelatedLiveParams, MMLiveAdsParams, NSArray, NSMutableDictionary, NSString, UIViewController;

@interface MMFinderLiveRouterParams : NSObject
{
    _Bool _fromNotFinder;
    _Bool _disableInteractiveToMinimizeWindow;
    int _commentScene;
    unsigned long long _routerType;
    UIViewController *_fromVC;
    MMFinderLiveContentVM *_contactVM;
    NSArray *_allContentVMs;
    long long _tabType;
    NSMutableDictionary *_customParams;
    unsigned long long _entryScene;
    unsigned long long _entryCardType;
    unsigned long long _selectIndex;
    NSArray *_exportIds;
    MMFinderLiveRelatedLiveParams *_relatedLiveParams;
    MMLiveAdsParams *_liveAdsParams;
    NSString *_replayEntryType;
    NSString *_feedID;
    NSString *_gameClientParams;
}

+ (id)defaultParamsFromVC:(id)arg1 contentVM:(id)arg2;
+ (id)defaultParamsFromVC:(id)arg1 dataItem:(id)arg2 sessionExtraKey:(id)arg3;
+ (id)defaultParamsFromVC:(id)arg1 dataItem:(id)arg2;
+ (id)defaultParamsFromVC:(id)arg1 contactVM:(id)arg2;
+ (id)defaultParamsFromVC:(id)arg1 contact:(id)arg2;
- (void).cxx_destruct;
@property(nonatomic) _Bool disableInteractiveToMinimizeWindow; // @synthesize disableInteractiveToMinimizeWindow=_disableInteractiveToMinimizeWindow;
@property(retain, nonatomic) NSString *gameClientParams; // @synthesize gameClientParams=_gameClientParams;
@property(retain, nonatomic) NSString *feedID; // @synthesize feedID=_feedID;
@property(retain, nonatomic) NSString *replayEntryType; // @synthesize replayEntryType=_replayEntryType;
@property(retain, nonatomic) MMLiveAdsParams *liveAdsParams; // @synthesize liveAdsParams=_liveAdsParams;
@property(retain, nonatomic) MMFinderLiveRelatedLiveParams *relatedLiveParams; // @synthesize relatedLiveParams=_relatedLiveParams;
@property(retain, nonatomic) NSArray *exportIds; // @synthesize exportIds=_exportIds;
@property(nonatomic) _Bool fromNotFinder; // @synthesize fromNotFinder=_fromNotFinder;
@property(nonatomic) unsigned long long selectIndex; // @synthesize selectIndex=_selectIndex;
@property(nonatomic) unsigned long long entryCardType; // @synthesize entryCardType=_entryCardType;
@property(nonatomic) unsigned long long entryScene; // @synthesize entryScene=_entryScene;
@property(nonatomic) int commentScene; // @synthesize commentScene=_commentScene;
@property(retain, nonatomic) NSMutableDictionary *customParams; // @synthesize customParams=_customParams;
@property(nonatomic) long long tabType; // @synthesize tabType=_tabType;
@property(retain, nonatomic) NSArray *allContentVMs; // @synthesize allContentVMs=_allContentVMs;
@property(retain, nonatomic) MMFinderLiveContentVM *contactVM; // @synthesize contactVM=_contactVM;
@property(retain, nonatomic) UIViewController *fromVC; // @synthesize fromVC=_fromVC;
@property(nonatomic) unsigned long long routerType; // @synthesize routerType=_routerType;
- (_Bool)haveExtraParams;
- (id)initWithFromVC:(id)arg1 allContentVMs:(id)arg2 selectIndex:(unsigned long long)arg3 tabType:(long long)arg4 fromNotFinder:(_Bool)arg5 commentScene:(int)arg6 entryScene:(unsigned long long)arg7 entryCardType:(unsigned long long)arg8 replayEntryType:(id)arg9 withByPass:(_Bool)arg10 enableScroll:(_Bool)arg11 exportIds:(id)arg12;
- (id)initWithFromVC:(id)arg1 contactVM:(id)arg2 customParams:(id)arg3 tabType:(long long)arg4 fromNotFinder:(_Bool)arg5 commentScene:(int)arg6 entryScene:(unsigned long long)arg7 entryCardType:(unsigned long long)arg8;
- (id)init;
- (id)description;

@end

