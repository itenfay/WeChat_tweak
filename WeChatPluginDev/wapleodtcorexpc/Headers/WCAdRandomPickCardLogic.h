//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableDictionary, NSString, WCAdRandomPickCardView, WCDataItem;

@interface WCAdRandomPickCardLogic
{
    WCDataItem *_dataItem;
    unsigned long long _contentItemScene;
    WCAdRandomPickCardView *_cardView;
    long long _logicStatus;
    NSMutableDictionary *_extraCardExtInfos;
    NSMutableDictionary *_extraPickedCardInfos;
    struct CGSize _expPickCardViewSize;
}

+ (id)getRandomPickCardLogicWithDataItem:(id)arg1 contentItemScene:(unsigned long long)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *extraPickedCardInfos; // @synthesize extraPickedCardInfos=_extraPickedCardInfos;
@property(retain, nonatomic) NSMutableDictionary *extraCardExtInfos; // @synthesize extraCardExtInfos=_extraCardExtInfos;
@property(nonatomic) long long logicStatus; // @synthesize logicStatus=_logicStatus;
@property(retain, nonatomic) WCAdRandomPickCardView *cardView; // @synthesize cardView=_cardView;
@property(nonatomic) unsigned long long contentItemScene; // @synthesize contentItemScene=_contentItemScene;
@property(retain, nonatomic) WCDataItem *dataItem; // @synthesize dataItem=_dataItem;
@property(nonatomic) struct CGSize expPickCardViewSize; // @synthesize expPickCardViewSize=_expPickCardViewSize;
- (void)onRandomPickCardViewResetCardItemsView;
- (id)getRandomPickCardExtInfoForCardId:(id)arg1;
- (long long)getRandomPickCardExpectLogicStatus;
- (_Bool)isCardPickedInCards:(id)arg1 forCardId:(id)arg2;
- (_Bool)isRandomPickCardPickedForCardId:(id)arg1;
- (id)getRandomPickComponentPickedCards;
- (void)appendExtraCardExtInfo:(id)arg1 forCardId:(id)arg2;
- (void)stop;
- (void)start;
- (void)prepare;
- (void)reset;
- (id)pageId;
- (id)cardInfo;
- (id)fetchPickCardView;
- (void)dealloc;
- (id)initWithDataItem:(id)arg1 contentItemScene:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

