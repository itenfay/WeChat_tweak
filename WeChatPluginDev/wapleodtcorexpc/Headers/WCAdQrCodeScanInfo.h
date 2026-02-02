//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCAdQrCodeScanInfo : NSObject
{
    _Bool _needUpdateQrUrl;
    NSString *_qrUrl;
    NSString *_qrExtInfo;
    unsigned long long _qrResultType;
}

+ (id)fromXML:(struct XmlReaderNode_t *)arg1;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long qrResultType; // @synthesize qrResultType=_qrResultType;
@property(nonatomic) _Bool needUpdateQrUrl; // @synthesize needUpdateQrUrl=_needUpdateQrUrl;
@property(retain, nonatomic) NSString *qrExtInfo; // @synthesize qrExtInfo=_qrExtInfo;
@property(retain, nonatomic) NSString *qrUrl; // @synthesize qrUrl=_qrUrl;
- (_Bool)isValidForWeWork;
- (_Bool)isValid;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

