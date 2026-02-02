//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class BrandNewXMLNotification, NSString;

@interface BrandNewXmlNotificationCellViewModel
{
    BrandNewXMLNotification *_notification;
}

+ (_Bool)canCreateViewModelWithMsgWrap:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) BrandNewXMLNotification *notification; // @synthesize notification=_notification;
@property(readonly, nonatomic) NSString *webPageUrl;
- (id)messageText;
- (id)brandContact;
- (void)internalInitWithMsg:(id)arg1;
- (id)initWithMessage:(id)arg1 viewWidth:(double)arg2;
- (id)cellViewClassName;

@end

