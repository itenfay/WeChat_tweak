//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUIViewController, NSMutableArray, NSString;
@protocol WCBatchViewCardHelpDelegate;

@interface WCBatchViewCardHelper
{
    NSString *_templateMsgId;
    unsigned long long _appBrandModeType;
    NSMutableArray *_aryCardData;
    MMUIViewController *_currViewController;
    id <WCBatchViewCardHelpDelegate> _delegate;
    unsigned long long _fromScene;
    MMUIViewController *_nextViewController;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMUIViewController *nextViewController; // @synthesize nextViewController=_nextViewController;
@property(nonatomic) unsigned long long fromScene; // @synthesize fromScene=_fromScene;
@property(nonatomic) __weak id <WCBatchViewCardHelpDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) MMUIViewController *currViewController; // @synthesize currViewController=_currViewController;
@property(retain, nonatomic) NSMutableArray *aryCardData; // @synthesize aryCardData=_aryCardData;
@property(nonatomic) unsigned long long appBrandModeType; // @synthesize appBrandModeType=_appBrandModeType;
@property(retain, nonatomic) NSString *templateMsgId; // @synthesize templateMsgId=_templateMsgId;
- (void)handleGiftCardTpInfoList:(id)arg1 fromScene:(unsigned long long)arg2;
- (void)onGetCardsItemByTpInfo:(id)arg1 ErrCode:(int)arg2;
- (void)onUseCard:(id)arg1 lastIndex:(id)arg2 delayTime:(double)arg3;
- (void)onGiftCard:(id)arg1 lastIndex:(id)arg2;
- (void)onDetailDidBeCleared;
- (void)onWCCardListViewControllerDidSelected:(id)arg1 listViewController:(id)arg2;
- (void)onWCCardListDidBeCleared;
- (void)onWCCardListViewControllerCancel:(id)arg1;
- (void)handleCardTpInfoList:(id)arg1 fromScene:(unsigned long long)arg2 isPush:(_Bool)arg3;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

