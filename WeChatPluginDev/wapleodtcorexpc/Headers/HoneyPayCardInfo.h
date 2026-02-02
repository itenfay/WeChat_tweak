//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface HoneyPayCardInfo : NSObject
{
    unsigned long long _total_credit_line;
    unsigned long long _use_credit_line;
    unsigned long long _unuse_credit_line;
    NSString *_payer_username;
    unsigned long long _hide_credit_line;
    unsigned long long _card_type;
    NSString *_card_type_name;
    NSString *_icon_url;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *icon_url; // @synthesize icon_url=_icon_url;
@property(retain, nonatomic) NSString *card_type_name; // @synthesize card_type_name=_card_type_name;
@property(nonatomic) unsigned long long card_type; // @synthesize card_type=_card_type;
@property(nonatomic) unsigned long long hide_credit_line; // @synthesize hide_credit_line=_hide_credit_line;
@property(retain, nonatomic) NSString *payer_username; // @synthesize payer_username=_payer_username;
@property(nonatomic) unsigned long long unuse_credit_line; // @synthesize unuse_credit_line=_unuse_credit_line;
@property(nonatomic) unsigned long long use_credit_line; // @synthesize use_credit_line=_use_credit_line;
@property(nonatomic) unsigned long long total_credit_line; // @synthesize total_credit_line=_total_credit_line;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

