//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface TextStatePublishBrandInfo : NSObject
{
    unsigned int _createTime;
    NSString *_ticket;
    unsigned long long _brandId;
    NSString *_activityId;
    NSString *_qrCodeId;
    NSString *_openId;
    NSString *_base64BrandKeyInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *base64BrandKeyInfo; // @synthesize base64BrandKeyInfo=_base64BrandKeyInfo;
@property(nonatomic) unsigned int createTime; // @synthesize createTime=_createTime;
@property(retain, nonatomic) NSString *openId; // @synthesize openId=_openId;
@property(retain, nonatomic) NSString *qrCodeId; // @synthesize qrCodeId=_qrCodeId;
@property(retain, nonatomic) NSString *activityId; // @synthesize activityId=_activityId;
@property(nonatomic) unsigned long long brandId; // @synthesize brandId=_brandId;
@property(retain, nonatomic) NSString *ticket; // @synthesize ticket=_ticket;
- (id)initWithBase64BrandKeyInfo:(id)arg1;

@end

