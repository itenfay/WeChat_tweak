//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSData, NSString;

@interface QRCodeOAuthData
{
    unsigned int _lpTimeout;
    unsigned int _lpInterval;
    NSString *_uuid;
    NSString *_appId;
    NSString *_appName;
    NSString *_appDesc;
    NSString *_appIconUrl;
    NSData *_qrCodeData;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int lpInterval; // @synthesize lpInterval=_lpInterval;
@property(nonatomic) unsigned int lpTimeout; // @synthesize lpTimeout=_lpTimeout;
@property(copy, nonatomic) NSData *qrCodeData; // @synthesize qrCodeData=_qrCodeData;
@property(copy, nonatomic) NSString *appIconUrl; // @synthesize appIconUrl=_appIconUrl;
@property(copy, nonatomic) NSString *appDesc; // @synthesize appDesc=_appDesc;
@property(copy, nonatomic) NSString *appName; // @synthesize appName=_appName;
@property(copy, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(copy, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;
- (id)description;

@end

