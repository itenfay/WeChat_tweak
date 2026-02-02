//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCPayBankCardInfo : NSObject
{
    NSString *_bank_type;
    NSString *_mobile_hint;
    NSString *_mobile_tips;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *mobile_tips; // @synthesize mobile_tips=_mobile_tips;
@property(retain, nonatomic) NSString *mobile_hint; // @synthesize mobile_hint=_mobile_hint;
@property(retain, nonatomic) NSString *bank_type; // @synthesize bank_type=_bank_type;

@end

