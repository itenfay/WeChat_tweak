//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CContact, CContactVerifyLogic, NSArray, NSAttributedString, NSMutableArray, NSString, UIColor;

@interface BrandDetailNotificationCellViewModel
{
    NSMutableArray *m_messageTextArr;
    CContact *m_brandContact;
    CContactVerifyLogic *m_oLogic;
    NSAttributedString *_attrTitle;
    long long _maxTitleLines;
    double _titleHeight;
    NSAttributedString *_attrDetail;
    long long _maxDetailLines;
    double _detailHeight;
    long long _followStatus;
    NSArray *_tagsList;
    CDUnknownBlockType _onFollowAction;
}

+ (_Bool)canCreateViewModelWithMsgWrap:(id)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType onFollowAction; // @synthesize onFollowAction=_onFollowAction;
@property(readonly, nonatomic) NSArray *tagsList; // @synthesize tagsList=_tagsList;
@property(readonly, nonatomic) double detailHeight; // @synthesize detailHeight=_detailHeight;
@property(readonly, nonatomic) long long maxDetailLines; // @synthesize maxDetailLines=_maxDetailLines;
@property(readonly, nonatomic) NSAttributedString *attrDetail; // @synthesize attrDetail=_attrDetail;
@property(readonly, nonatomic) double titleHeight; // @synthesize titleHeight=_titleHeight;
@property(readonly, nonatomic) long long maxTitleLines; // @synthesize maxTitleLines=_maxTitleLines;
@property(readonly, nonatomic) NSAttributedString *attrTitle; // @synthesize attrTitle=_attrTitle;
@property(readonly, nonatomic) UIColor *dateColor;
@property(readonly, nonatomic) NSString *date;
@property(readonly, nonatomic) NSString *accessibilityLabel;
- (id)__attrStringByContentList:(id)arg1;
- (_Bool)isNotFollow;
- (_Bool)showFollowButton;
@property(readonly, nonatomic) NSString *userName;
@property(readonly, nonatomic) NSString *nickname;
@property(readonly, nonatomic) double headCornerRadius;
@property(readonly, nonatomic) NSString *headUrl;
- (id)notifyMsg;
- (id)brandContact;
- (void)reloadData;
- (void)resetFollowStatus:(_Bool)arg1;
- (void)contactAddContactOk:(id)arg1;
- (void)onContactVerifyFail;
- (void)startFollow;
- (void)setFollowStatus:(long long)arg1;
@property(readonly, nonatomic) long long followStatus; // @synthesize followStatus=_followStatus;
- (void)onDarkModeStatusChanged;
- (double)viewHeight;
- (void)updateBrandContact;
- (id)cellViewClassName;
- (void)setViewWidth:(double)arg1;
- (void)setMessageWrap:(id)arg1;
- (id)initWithMessage:(id)arg1 viewWidth:(double)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

