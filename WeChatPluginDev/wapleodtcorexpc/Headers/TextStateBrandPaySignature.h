//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface TextStateBrandPaySignature
{
    NSString *_payTransactionId;
    NSString *_paySignature;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *paySignature; // @synthesize paySignature=_paySignature;
@property(retain, nonatomic) NSString *payTransactionId; // @synthesize payTransactionId=_payTransactionId;
- (id)description;
- (_Bool)isValid;
- (id)businessInfo;

@end

