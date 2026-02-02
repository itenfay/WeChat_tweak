//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString, TagCtrlInfo;

@interface WebSearchContext : NSObject
{
    _Bool _isSubSearch;
    _Bool _isFromDiscoverSearch;
    _Bool _forbidNavCancelButton;
    _Bool _forceShowNavCancelButton;
    _Bool _forbidNavBackButton;
    _Bool _enableRestoreEducatePage;
    _Bool _enableParallelRequest;
    _Bool _enableParallelSearchGuideRequest;
    _Bool _isImageSearch;
    _Bool _isFromFinder;
    unsigned int _mpSubscene;
    unsigned long long _actionType;
    unsigned long long _searchEditState;
    unsigned long long _searchBarType;
    long long _cursorIndex;
    TagCtrlInfo *_tagCtrlInfo;
    double _delayShowTimeForWebviewDidFinishLoad;
    NSMutableDictionary *_map;
    NSMutableDictionary *_customNavBarParams;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isFromFinder; // @synthesize isFromFinder=_isFromFinder;
@property(retain, nonatomic) NSMutableDictionary *customNavBarParams; // @synthesize customNavBarParams=_customNavBarParams;
@property(retain, nonatomic) NSMutableDictionary *map; // @synthesize map=_map;
@property(nonatomic) double delayShowTimeForWebviewDidFinishLoad; // @synthesize delayShowTimeForWebviewDidFinishLoad=_delayShowTimeForWebviewDidFinishLoad;
@property(nonatomic) unsigned int mpSubscene; // @synthesize mpSubscene=_mpSubscene;
@property(retain, nonatomic) TagCtrlInfo *tagCtrlInfo; // @synthesize tagCtrlInfo=_tagCtrlInfo;
@property(nonatomic) long long cursorIndex; // @synthesize cursorIndex=_cursorIndex;
@property(nonatomic) _Bool isImageSearch; // @synthesize isImageSearch=_isImageSearch;
@property(nonatomic) _Bool enableParallelSearchGuideRequest; // @synthesize enableParallelSearchGuideRequest=_enableParallelSearchGuideRequest;
@property(nonatomic) _Bool enableParallelRequest; // @synthesize enableParallelRequest=_enableParallelRequest;
@property(nonatomic) unsigned long long searchBarType; // @synthesize searchBarType=_searchBarType;
@property(nonatomic) _Bool enableRestoreEducatePage; // @synthesize enableRestoreEducatePage=_enableRestoreEducatePage;
@property(nonatomic) _Bool forbidNavBackButton; // @synthesize forbidNavBackButton=_forbidNavBackButton;
@property(nonatomic) _Bool forceShowNavCancelButton; // @synthesize forceShowNavCancelButton=_forceShowNavCancelButton;
@property(nonatomic) _Bool forbidNavCancelButton; // @synthesize forbidNavCancelButton=_forbidNavCancelButton;
@property(nonatomic) _Bool isFromDiscoverSearch; // @synthesize isFromDiscoverSearch=_isFromDiscoverSearch;
@property(nonatomic) _Bool isSubSearch; // @synthesize isSubSearch=_isSubSearch;
@property(nonatomic) unsigned long long searchEditState; // @synthesize searchEditState=_searchEditState;
@property(nonatomic) unsigned long long actionType; // @synthesize actionType=_actionType;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)searchPlaceHolder;
@property(nonatomic) _Bool forbidLiteapp;
@property(copy, nonatomic) NSString *toViewType;
@property(copy, nonatomic) NSString *cachePageResult;
@property(copy, nonatomic) NSString *recommendSearchQuery;
@property(nonatomic) _Bool isHomePage;
@property(copy, nonatomic) NSString *extParams;
@property(copy, nonatomic) NSString *cacheImageSrc;
@property(copy, nonatomic) NSString *reqkey;
@property(nonatomic) _Bool isPreload;
@property(nonatomic) _Bool isFromVoice;
@property(copy, nonatomic) NSString *thirdExtParam;
- (void)updateSessionId;
@property(copy, nonatomic) NSString *sessionId;
@property(copy, nonatomic) NSString *query;
@property(nonatomic) unsigned long long bizType;
@property(nonatomic) unsigned long long scene;
- (_Bool)isFromTopicSearch;
- (_Bool)isImageSearchScene;
- (_Bool)isChatSearch;
- (_Bool)isEmoticonSearchController;
- (void)urlParamsSelfComplement;
- (id)init;

@end

