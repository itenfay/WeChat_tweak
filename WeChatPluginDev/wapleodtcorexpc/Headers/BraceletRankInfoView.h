//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class BraceletRankLikeButton, DeviceBrandJumpInfo, DeviceRankInfo, MMHeadImageView, MMUIButton, MMUIViewController, MMWebImageView, NSString, UILabel, WAContact, WAContactGetter;

@interface BraceletRankInfoView
{
    DeviceRankInfo *m_rankInfo;
    _Bool m_isBotton;
    _Bool m_isFromFocus;
    _Bool m_bShowRedDot;
    UILabel *_rankLabel;
    UILabel *_scoreLabel;
    UILabel *_rankNumber;
    UILabel *_nickNameLabel;
    MMHeadImageView *_headImageView;
    WAContact *_appContact;
    WAContactGetter *_contactGetter;
    MMWebImageView *_brandIconView;
    MMUIButton *_brandTitleBtn;
    UILabel *_resultLabel;
    BraceletRankLikeButton *_likeButton;
    MMUIViewController *_parentVC;
    DeviceBrandJumpInfo *_jumpInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) DeviceBrandJumpInfo *jumpInfo; // @synthesize jumpInfo=_jumpInfo;
@property(nonatomic) __weak MMUIViewController *parentVC; // @synthesize parentVC=_parentVC;
@property(retain, nonatomic) BraceletRankLikeButton *likeButton; // @synthesize likeButton=_likeButton;
@property(retain, nonatomic) UILabel *resultLabel; // @synthesize resultLabel=_resultLabel;
@property(retain, nonatomic) MMUIButton *brandTitleBtn; // @synthesize brandTitleBtn=_brandTitleBtn;
@property(retain, nonatomic) MMWebImageView *brandIconView; // @synthesize brandIconView=_brandIconView;
@property(retain, nonatomic) WAContactGetter *contactGetter; // @synthesize contactGetter=_contactGetter;
@property(retain, nonatomic) WAContact *appContact; // @synthesize appContact=_appContact;
@property(retain, nonatomic) MMHeadImageView *headImageView; // @synthesize headImageView=_headImageView;
@property(retain, nonatomic) UILabel *nickNameLabel; // @synthesize nickNameLabel=_nickNameLabel;
@property(retain, nonatomic) UILabel *rankNumber; // @synthesize rankNumber=_rankNumber;
@property(retain, nonatomic) UILabel *scoreLabel; // @synthesize scoreLabel=_scoreLabel;
@property(retain, nonatomic) UILabel *rankLabel; // @synthesize rankLabel=_rankLabel;
- (void)onLoadImageOK:(id)arg1;
- (_Bool)isOlympic2024;
- (_Bool)isHardware;
- (_Bool)isAppleWatch;
- (void)onClickBrandBtn;
- (void)onClickAppButton;
- (void)addLikeButtonWithTarget:(id)arg1 action:(SEL)arg2;
- (void)addSportRecordView;
- (void)addSeperateLine;
- (void)initView;
- (id)initWithDeviceRankInfo:(id)arg1 IsBottom:(_Bool)arg2 IsFromFocus:(_Bool)arg3 showRedDot:(_Bool)arg4 parentVC:(id)arg5;
- (id)initWithDeviceRankInfo:(id)arg1 IsBottom:(_Bool)arg2 IsFromFocus:(_Bool)arg3 parentVC:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

