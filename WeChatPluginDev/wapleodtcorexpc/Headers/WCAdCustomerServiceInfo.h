//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, WCAdCustomerServiceConfirmInfo;

@interface WCAdCustomerServiceInfo : NSObject
{
    NSString *_customerServiceUrl;
    WCAdCustomerServiceConfirmInfo *_confirmInfo;
}

+ (id)fromXML:(struct XmlReaderNode_t *)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) WCAdCustomerServiceConfirmInfo *confirmInfo; // @synthesize confirmInfo=_confirmInfo;
@property(retain, nonatomic) NSString *customerServiceUrl; // @synthesize customerServiceUrl=_customerServiceUrl;
- (_Bool)isValid;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

