//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class BrandNewXMLNotificationAccountInfo, BrandNewXMLNotificationMsgInfo, NSString;

@interface BrandNewXMLNotification : NSObject
{
    NSString *_plain;
    BrandNewXMLNotificationAccountInfo *_accountInfo;
    BrandNewXMLNotificationMsgInfo *_msgInfo;
}

@property(retain, nonatomic) BrandNewXMLNotificationMsgInfo *msgInfo; // @synthesize msgInfo=_msgInfo;
@property(retain, nonatomic) BrandNewXMLNotificationAccountInfo *accountInfo; // @synthesize accountInfo=_accountInfo;
@property(copy, nonatomic) NSString *plain; // @synthesize plain=_plain;

@end

