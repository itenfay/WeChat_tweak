//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class WCSearchUIConfig, WebSearchContext;

@interface WebSearchUseCase : NSObject
{
    WebSearchContext *_context;
    WCSearchUIConfig *_uiConfig;
    CDUnknownBlockType _onSearchVCWillAppear;
    CDUnknownBlockType _searchTransitionCompletion;
}

+ (_Bool)liteAppHomePageEnaledWithHitExptReport:(_Bool)arg1;
+ (_Bool)liteAppHomePageEnaled;
+ (void)preHeartSearchH5Page;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType searchTransitionCompletion; // @synthesize searchTransitionCompletion=_searchTransitionCompletion;
@property(copy, nonatomic) CDUnknownBlockType onSearchVCWillAppear; // @synthesize onSearchVCWillAppear=_onSearchVCWillAppear;
@property(retain, nonatomic) WCSearchUIConfig *uiConfig; // @synthesize uiConfig=_uiConfig;
@property(retain, nonatomic) WebSearchContext *context; // @synthesize context=_context;
- (void)_didStartWith:(id)arg1;
- (id)h5URLParams;
- (_Bool)_jumpSearchByLiteappFrom:(id)arg1;
- (void)configSheetAdapter:(id)arg1;
- (void)__startOnPage:(id)arg1 tansitionType:(unsigned long long)arg2 fromSearchBar:(id)arg3;
- (void)startOnPage:(id)arg1 tansitionType:(unsigned long long)arg2 fromSearchBar:(id)arg3;
- (void)startOnPage:(id)arg1 tansitionType:(unsigned long long)arg2;
- (id)initWithContextMode:(CDUnknownBlockType)arg1;
- (id)initWithParams:(id)arg1 uiConfig:(id)arg2;
- (id)initWithParams:(id)arg1;

@end

