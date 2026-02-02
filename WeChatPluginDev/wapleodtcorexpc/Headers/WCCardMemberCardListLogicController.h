//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableOrderedSet, NSString;

@interface WCCardMemberCardListLogicController
{
    NSMutableOrderedSet *_allSortedMemberCardsList;
    CDUnknownBlockType _fetchDataCompleteBlcok;
    CDUnknownBlockType _delCompleteBlcok;
    CDUnknownBlockType _giftCompleteBlcok;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType giftCompleteBlcok; // @synthesize giftCompleteBlcok=_giftCompleteBlcok;
@property(copy, nonatomic) CDUnknownBlockType delCompleteBlcok; // @synthesize delCompleteBlcok=_delCompleteBlcok;
@property(copy, nonatomic) CDUnknownBlockType fetchDataCompleteBlcok; // @synthesize fetchDataCompleteBlcok=_fetchDataCompleteBlcok;
- (void)onGetCardData:(id)arg1 ErrCode:(int)arg2;
- (void)onDeleteCardIDList:(id)arg1 ErrCode:(int)arg2;
- (void)onGiftCard:(id)arg1 ErrCode:(int)arg2;
- (id)findCard:(id)arg1 inList:(id)arg2;
- (void)loadMemberCards;
- (void)removeMemberCardDataAtRow:(long long)arg1;
- (long long)getIdxOfMemberCard:(id)arg1;
- (id)getMemberCardAtRow:(long long)arg1;
- (unsigned int)getNumberOfMemberCards;
- (void)giftMemberCardId:(id)arg1 toUsrName:(id)arg2 complete:(CDUnknownBlockType)arg3;
- (void)delMemberCard:(id)arg1 complete:(CDUnknownBlockType)arg2;
- (void)fetchData:(CDUnknownBlockType)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

