//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CContact, NSString;

@interface WAAppPageViewModel
{
    double _cacheNameWidth;
    double _cacheTitleHeight;
    double _cacheDescHeight;
    double _cacheUpdatableContentHeight;
    CContact *_appContact;
    NSString *_sessionId;
}

+ (_Bool)canCreateMessageViewModelWithMessageWrap:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
@property(retain, nonatomic) CContact *appContact; // @synthesize appContact=_appContact;
- (void)reportEcsData:(id)arg1;
- (id)reportAppMessageItem:(unsigned int)arg1;
- (void)onReportClickWithUserInfo:(id)arg1;
- (void)onReportExposureWithInterval:(long long)arg1 userInfo:(id)arg2;
- (id)getReferImage;
- (_Bool)hasReferImage;
- (void)onUpdatableMsgEntryStateChanged:(id)arg1;
- (id)getSubscribeMsgText;
- (_Bool)shouldShowPlayButton;
- (_Bool)shouldShowSubscribeEntry;
- (id)getLatestUpdatableMsgInfo;
- (_Bool)shouldShowUpdatableContent;
- (double)waSystemTextFontSize;
- (id)getImageIfDownFail;
- (id)scaleFixOriginThumbImage;
- (id)originThumbImage;
- (unsigned int)thumbDownloadStatus;
- (_Bool)canShowFavoriteBtn;
- (struct CGSize)waSystemTextViewSize;
- (double)imageHeight;
- (double)descHeight;
- (double)updatableContentHeight;
- (double)titleHeight;
- (double)nameWidth;
- (_Bool)shouldShowFlagshipFlag;
- (_Bool)shouldShowEasyBuyFlag;
- (id)tagsArray;
- (struct CGSize)measure:(struct CGSize)arg1;
- (struct CGSize)measureContentViewSize:(struct CGSize)arg1;
- (id)cellIdentifier;
- (id)cellViewClassName;
- (id)additionalAccessibilityDescription;
- (id)initWithMessageWrap:(id)arg1 contact:(id)arg2 chatContact:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

