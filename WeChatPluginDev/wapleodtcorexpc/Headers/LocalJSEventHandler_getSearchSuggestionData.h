//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WSContactSearchLogic;

@interface LocalJSEventHandler_getSearchSuggestionData
{
    WSContactSearchLogic *_searchContactLogic;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WSContactSearchLogic *searchContactLogic; // @synthesize searchContactLogic=_searchContactLogic;
- (void)onReturnWSContactResult:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)onReceiveSuggestionJSON:(id)arg1;
- (void)handleSuggestionCgi:(id)arg1;
- (void)asyncSearchSuggest:(id)arg1;
- (void)handleJSEvent:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

