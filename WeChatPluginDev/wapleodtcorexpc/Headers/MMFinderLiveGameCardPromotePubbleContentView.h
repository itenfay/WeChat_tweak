//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class GameDynamicBubbleContent, MMUIView, MagicSclFrameSetView, NSString;

@interface MMFinderLiveGameCardPromotePubbleContentView
{
    MMUIView *_dynamicCardContainer;
    GameDynamicBubbleContent *_gamePlayTogetherDynamicContent;
    NSString *_dynamicCardRootId;
    MagicSclFrameSetView *_frameSetView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MagicSclFrameSetView *frameSetView; // @synthesize frameSetView=_frameSetView;
@property(retain, nonatomic) NSString *dynamicCardRootId; // @synthesize dynamicCardRootId=_dynamicCardRootId;
@property(retain, nonatomic) GameDynamicBubbleContent *gamePlayTogetherDynamicContent; // @synthesize gamePlayTogetherDynamicContent=_gamePlayTogetherDynamicContent;
@property(retain, nonatomic) MMUIView *dynamicCardContainer; // @synthesize dynamicCardContainer=_dynamicCardContainer;
- (void)onFirstFrameRendered:(id)arg1;
- (void)onClosePlayTogetherActionSheet:(id)arg1;
- (void)layoutDynamicCard;
- (void)layoutDynamicCardContainer;
- (_Bool)disableTapGesture;
- (void)updatepromoteBuffer:(id)arg1;
- (void)updateFromSyncPromoteResp:(id)arg1;
- (id)currentPromoteItem;
- (void)updatePromoteItem:(id)arg1;
- (_Bool)isCurrentPromoteItem:(id)arg1;
- (void)onDismissed;
- (void)refreshData;
- (void)layoutUI;
- (void)convertPromoteMsgInfo:(id)arg1;
- (void)setupDynamicCardEnv;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

