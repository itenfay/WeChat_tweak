//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, UIButton, UrlLabel, WCCardDataCardInfo, WCCardDataCardTPInfo;
@protocol WCCardDataSource, WCShareCardBaseCardHeaderDelegate;

@interface WCShareCardBaseHeaderView
{
    _Bool _bIsShareCard;
    _Bool _bIsNeedHideAcceptBtn;
    int _cardStatus;
    id <WCShareCardBaseCardHeaderDelegate> _baseDelegate;
    WCCardDataCardInfo *_cardInfo;
    WCCardDataCardTPInfo *_cardTPInfo;
    NSString *_cardStatusTitle;
    UIButton *_acceptCardBtn;
    UrlLabel *_guidanceLabel;
    id <WCCardDataSource> _cardDataSource;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <WCCardDataSource> cardDataSource; // @synthesize cardDataSource=_cardDataSource;
@property(retain, nonatomic) UrlLabel *guidanceLabel; // @synthesize guidanceLabel=_guidanceLabel;
@property(retain, nonatomic) UIButton *acceptCardBtn; // @synthesize acceptCardBtn=_acceptCardBtn;
@property(nonatomic) _Bool bIsNeedHideAcceptBtn; // @synthesize bIsNeedHideAcceptBtn=_bIsNeedHideAcceptBtn;
@property(nonatomic) _Bool bIsShareCard; // @synthesize bIsShareCard=_bIsShareCard;
@property(retain, nonatomic) NSString *cardStatusTitle; // @synthesize cardStatusTitle=_cardStatusTitle;
@property(nonatomic) int cardStatus; // @synthesize cardStatus=_cardStatus;
@property(retain, nonatomic) WCCardDataCardTPInfo *cardTPInfo; // @synthesize cardTPInfo=_cardTPInfo;
@property(retain, nonatomic) WCCardDataCardInfo *cardInfo; // @synthesize cardInfo=_cardInfo;
@property(nonatomic) __weak id <WCShareCardBaseCardHeaderDelegate> baseDelegate; // @synthesize baseDelegate=_baseDelegate;
- (void)onLinkClicked:(id)arg1 backupUrl:(id)arg2 withRect:(struct CGRect)arg3;
- (void)acceptMyCard:(id)arg1;
- (void)onShareCardAction;
- (double)getRealHeight;
- (struct CGRect)getApplyBtnFrame;
- (_Bool)isHasAcceptedBtn;
- (void)genAcceptBtnAreaWithCardContentBottm:(double)arg1;
- (id)getInvalidAcceptBtnTitleIfExist;
- (id)genCardStatusNotNormalBtnView;
- (void)initBaseData;
- (id)initWithCardSourceData:(id)arg1 isShareCard:(_Bool)arg2 cardStatus:(int)arg3 isNeedHideAccecptBtn:(_Bool)arg4 delegate:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

