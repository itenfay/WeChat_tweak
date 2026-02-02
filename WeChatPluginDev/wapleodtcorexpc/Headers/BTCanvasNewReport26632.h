//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableSet, NSString;

@interface BTCanvasNewReport26632
{
    NSMutableSet *_cardIdSet;
    NSMutableSet *_cardIdSetV2;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableSet *cardIdSetV2; // @synthesize cardIdSetV2=_cardIdSetV2;
@property(retain, nonatomic) NSMutableSet *cardIdSet; // @synthesize cardIdSet=_cardIdSet;
- (void)onServiceClearData;
- (_Bool)containsCardIdV2:(id)arg1;
- (void)setCardIdV2:(id)arg1;
- (_Bool)containsCardId:(id)arg1;
- (void)setCardId:(id)arg1;
- (void)onClearAllData;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

