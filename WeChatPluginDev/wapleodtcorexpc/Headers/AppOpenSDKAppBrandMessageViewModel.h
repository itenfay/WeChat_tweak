//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, UIImage;

@interface AppOpenSDKAppBrandMessageViewModel
{
    double _cacheTitleHeight;
    double _cacheDescHeight;
    _Bool _updatedWaContact;
    double m_titleHeight;
    NSString *_sessionId;
}

+ (_Bool)canCreateMessageViewModelWithMessageWrap:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) _Bool updatedWaContact; // @synthesize updatedWaContact=_updatedWaContact;
@property(retain, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
- (id)reportAppMessageItem:(unsigned int)arg1;
- (void)onReportClickWithUserInfo:(id)arg1;
- (void)onReportExposureWithInterval:(long long)arg1 userInfo:(id)arg2;
- (void)onMessageDownloadThumbImageOK;
- (id)additionalAccessibilityDescription;
- (id)getReferImage;
- (_Bool)hasReferImage;
- (double)imageViewHieghtScale;
- (_Bool)shouldShowFlagshipFlag;
- (_Bool)shouldShowEasyBuyFlag;
- (id)tagsArray;
- (id)getWAAppName;
@property(readonly, nonatomic) NSString *pagePath;
@property(readonly, nonatomic) NSString *appId;
@property(readonly, nonatomic) NSString *appIconUrl;
@property(readonly, nonatomic) UIImage *thumbImage;
@property(readonly, nonatomic) double imageHeight;
@property(readonly, nonatomic) double titleHeight; // @synthesize titleHeight=m_titleHeight;
- (id)sourceIcon;
- (id)sourceTitle;
- (_Bool)isShowSourceView;
- (void)tryUpdateWaContact;
- (struct CGSize)measureContentViewSize:(struct CGSize)arg1;
- (id)cellViewClassName;

@end

