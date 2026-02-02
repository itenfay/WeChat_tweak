//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WAAppProfileViewModel
{
    NSString *_sessionId;
}

+ (_Bool)canCreateMessageViewModelWithMessageWrap:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
- (id)reportAppMessageItem:(unsigned int)arg1;
- (void)onReportClickWithUserInfo:(id)arg1;
- (void)onReportExposureWithInterval:(long long)arg1 userInfo:(id)arg2;
- (id)additionalAccessibilityDescription;
- (id)scoreLabelText;
- (_Bool)shouldShowFlagshipFlag;
- (_Bool)shouldShowEasyBuyFlag;
- (id)tagsArray;
- (id)profileTitle;
- (id)profileIconUrl;
- (id)sourceIcon;
- (id)sourceTitle;
- (struct CGSize)measureContentViewSize:(struct CGSize)arg1;
- (id)cellIdentifier;
- (id)cellViewClassName;

@end

