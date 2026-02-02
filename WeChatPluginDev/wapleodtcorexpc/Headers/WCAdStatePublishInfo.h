//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCAdStatePublishInfo : NSObject
{
    NSString *_imageUrl;
    NSString *_videoUrl;
    NSString *_videoMd5;
    NSString *_iconId;
    NSString *_sourceFooterData;
    NSString *_sourceVerifyInfo;
    NSString *_desc;
    NSString *_emoticonUrl;
    NSString *_emoticonMd5;
    long long _expiredTime;
    NSString *_expiredToast;
}

+ (id)fromXML:(struct XmlReaderNode_t *)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *expiredToast; // @synthesize expiredToast=_expiredToast;
@property(nonatomic) long long expiredTime; // @synthesize expiredTime=_expiredTime;
@property(retain, nonatomic) NSString *emoticonMd5; // @synthesize emoticonMd5=_emoticonMd5;
@property(retain, nonatomic) NSString *emoticonUrl; // @synthesize emoticonUrl=_emoticonUrl;
@property(retain, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(retain, nonatomic) NSString *sourceVerifyInfo; // @synthesize sourceVerifyInfo=_sourceVerifyInfo;
@property(retain, nonatomic) NSString *sourceFooterData; // @synthesize sourceFooterData=_sourceFooterData;
@property(retain, nonatomic) NSString *iconId; // @synthesize iconId=_iconId;
@property(retain, nonatomic) NSString *videoMd5; // @synthesize videoMd5=_videoMd5;
@property(retain, nonatomic) NSString *videoUrl; // @synthesize videoUrl=_videoUrl;
@property(retain, nonatomic) NSString *imageUrl; // @synthesize imageUrl=_imageUrl;
- (_Bool)isValid;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

