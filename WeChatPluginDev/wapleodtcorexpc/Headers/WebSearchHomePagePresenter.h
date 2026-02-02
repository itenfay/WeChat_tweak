//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMUIViewController, NSString, WebSearchContext, WebSearchUseCase;
@protocol WebSearchHomePage><WSWebViewPluginableProtocol;

@interface WebSearchHomePagePresenter : NSObject
{
    MMUIViewController<WebSearchHomePage><WSWebViewPluginableProtocol> *_homePage;
    WebSearchUseCase *_searchUseCase;
    WebSearchContext *_originalContext;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WebSearchContext *originalContext; // @synthesize originalContext=_originalContext;
@property(retain, nonatomic) WebSearchUseCase *searchUseCase; // @synthesize searchUseCase=_searchUseCase;
@property(nonatomic) __weak MMUIViewController<WebSearchHomePage><WSWebViewPluginableProtocol> *homePage; // @synthesize homePage=_homePage;
- (void)onGetTextInput:(id)arg1 isFromVoice:(_Bool)arg2;
- (void)registerDoSearchOperation;
- (void)onTapSearchBox;
- (void)goSearchPageWithModBlock:(CDUnknownBlockType)arg1;
- (id)initWithHomePage:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

