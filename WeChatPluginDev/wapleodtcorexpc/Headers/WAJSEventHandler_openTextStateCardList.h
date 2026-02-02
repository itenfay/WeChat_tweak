//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUINavigationController, NSArray, NSString, TextStateCardListSlidingWindowRefreshTask, TextStateCardListViewController;

@interface WAJSEventHandler_openTextStateCardList
{
    _Bool _enableExpose;
    _Bool _shouldShowLocationDistance;
    unsigned int _likeSource;
    unsigned long long _beginIndex;
    NSArray *_textStateList;
    NSString *_currentTextStateId;
    TextStateCardListSlidingWindowRefreshTask *_task;
    TextStateCardListViewController *_cardListViewController;
    MMUINavigationController *_navigationController;
    unsigned long long _requestId;
    NSString *_sceneSessionId;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *sceneSessionId; // @synthesize sceneSessionId=_sceneSessionId;
@property(nonatomic) unsigned long long requestId; // @synthesize requestId=_requestId;
@property(nonatomic) unsigned int likeSource; // @synthesize likeSource=_likeSource;
@property(nonatomic) _Bool shouldShowLocationDistance; // @synthesize shouldShowLocationDistance=_shouldShowLocationDistance;
@property(nonatomic) _Bool enableExpose; // @synthesize enableExpose=_enableExpose;
@property(retain, nonatomic) MMUINavigationController *navigationController; // @synthesize navigationController=_navigationController;
@property(retain, nonatomic) TextStateCardListViewController *cardListViewController; // @synthesize cardListViewController=_cardListViewController;
@property(retain, nonatomic) TextStateCardListSlidingWindowRefreshTask *task; // @synthesize task=_task;
@property(retain, nonatomic) NSString *currentTextStateId; // @synthesize currentTextStateId=_currentTextStateId;
@property(retain, nonatomic) NSArray *textStateList; // @synthesize textStateList=_textStateList;
@property(nonatomic) unsigned long long beginIndex; // @synthesize beginIndex=_beginIndex;
- (void)onNewTextStateSquareRefreshCardListSlidingWindow:(id)arg1;
- (void)configureSingleCardView:(id)arg1 forMultipleCardView:(id)arg2;
- (void)onChangeToCardAtIndex:(unsigned long long)arg1;
- (void)configureCardView:(id)arg1 atIndex:(unsigned long long)arg2;
- (unsigned long long)count;
- (void)handleJSEvent:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

