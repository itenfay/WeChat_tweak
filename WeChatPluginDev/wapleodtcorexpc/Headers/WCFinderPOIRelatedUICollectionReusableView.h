//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUILabel, NSString, RichTextView, SnsPoiDetail, UIImageView, UIView, WCFinderAuthInfoIconView, WCFinderContact, WCFinderHeadImageView;
@protocol WCFinderPOIRelatedUICollectionReusableViewDelegate;

@interface WCFinderPOIRelatedUICollectionReusableView
{
    _Bool _onlyShowPoiName;
    int _addressSubType;
    id <WCFinderPOIRelatedUICollectionReusableViewDelegate> _delegate;
    SnsPoiDetail *_poiDetail;
    RichTextView *_addressMainLabel;
    RichTextView *_addressSubLabel;
    RichTextView *_addressintroductionLabel;
    RichTextView *_addressPriceTipsLabel;
    RichTextView *_addressBusinessHourLabel;
    RichTextView *_addressPhoneRichText;
    MMUILabel *_noticeWordingLabel;
    UIView *_navigateView;
    WCFinderContact *_contact;
    UIView *_bindContactContainerView;
    MMUILabel *_bindContactTipsLabel;
    UIView *_bindContactView;
    UIView *_topLineView;
    WCFinderHeadImageView *_avatarImageView;
    MMUILabel *_nickNameLabel;
    WCFinderAuthInfoIconView *_authInfoIconView;
    UIImageView *_contactArrowIconView;
    UIView *_bottomLineView;
    NSString *_noticeWording;
}

+ (double)headerViewHeightWith:(id)arg1 bindContact:(id)arg2 noticeWording:(id)arg3 isDataEmpty:(_Bool)arg4 width:(double)arg5 onlyShowPoiName:(_Bool)arg6 addressSubType:(int)arg7;
- (void).cxx_destruct;
@property(nonatomic) int addressSubType; // @synthesize addressSubType=_addressSubType;
@property(nonatomic) _Bool onlyShowPoiName; // @synthesize onlyShowPoiName=_onlyShowPoiName;
@property(retain, nonatomic) NSString *noticeWording; // @synthesize noticeWording=_noticeWording;
@property(retain, nonatomic) UIView *bottomLineView; // @synthesize bottomLineView=_bottomLineView;
@property(retain, nonatomic) UIImageView *contactArrowIconView; // @synthesize contactArrowIconView=_contactArrowIconView;
@property(retain, nonatomic) WCFinderAuthInfoIconView *authInfoIconView; // @synthesize authInfoIconView=_authInfoIconView;
@property(retain, nonatomic) MMUILabel *nickNameLabel; // @synthesize nickNameLabel=_nickNameLabel;
@property(retain, nonatomic) WCFinderHeadImageView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
@property(retain, nonatomic) UIView *topLineView; // @synthesize topLineView=_topLineView;
@property(retain, nonatomic) UIView *bindContactView; // @synthesize bindContactView=_bindContactView;
@property(retain, nonatomic) MMUILabel *bindContactTipsLabel; // @synthesize bindContactTipsLabel=_bindContactTipsLabel;
@property(retain, nonatomic) UIView *bindContactContainerView; // @synthesize bindContactContainerView=_bindContactContainerView;
@property(retain, nonatomic) WCFinderContact *contact; // @synthesize contact=_contact;
@property(retain, nonatomic) UIView *navigateView; // @synthesize navigateView=_navigateView;
@property(retain, nonatomic) MMUILabel *noticeWordingLabel; // @synthesize noticeWordingLabel=_noticeWordingLabel;
@property(retain, nonatomic) RichTextView *addressPhoneRichText; // @synthesize addressPhoneRichText=_addressPhoneRichText;
@property(retain, nonatomic) RichTextView *addressBusinessHourLabel; // @synthesize addressBusinessHourLabel=_addressBusinessHourLabel;
@property(retain, nonatomic) RichTextView *addressPriceTipsLabel; // @synthesize addressPriceTipsLabel=_addressPriceTipsLabel;
@property(retain, nonatomic) RichTextView *addressintroductionLabel; // @synthesize addressintroductionLabel=_addressintroductionLabel;
@property(retain, nonatomic) RichTextView *addressSubLabel; // @synthesize addressSubLabel=_addressSubLabel;
@property(retain, nonatomic) RichTextView *addressMainLabel; // @synthesize addressMainLabel=_addressMainLabel;
@property(retain, nonatomic) SnsPoiDetail *poiDetail; // @synthesize poiDetail=_poiDetail;
@property(nonatomic) __weak id <WCFinderPOIRelatedUICollectionReusableViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)finderHeadImageViewDidClick:(id)arg1;
- (void)onPhoneClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)onNavigateAction;
- (void)onClickNavigateView:(id)arg1;
- (void)onClickBindContactView:(id)arg1;
- (void)adjustUIMargin:(_Bool)arg1;
- (id)countInfoString:(_Bool)arg1 feedCount:(long long)arg2 friendLikeCount:(long long)arg3;
- (void)updateWith:(id)arg1 bindContact:(id)arg2 noticeWording:(id)arg3 isDataEmpty:(_Bool)arg4 onlyShowPoiName:(_Bool)arg5 totalFeedsCount:(long long)arg6 friendLikeCount:(long long)arg7 addressSubType:(int)arg8;
- (void)updateAuthInfoIconView;
- (void)renderBindContactView;
- (void)updateBindContactViewMargin;
- (void)updateBindContactContainerViewMargin;
- (void)initSubView;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

