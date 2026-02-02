//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface MyInvoiceData : NSObject
{
    long long group_id;
    NSString *title_type;
    NSString *title;
    NSString *tax_number;
    NSString *address;
    NSString *phone;
    NSString *bank_name;
    NSString *bank_number;
    NSString *email;
    NSString *invoice_url;
}

+ (id)GenJsonForSelectedInvoiceData:(id)arg1;
+ (id)GenJsonFromInvoiceData:(id)arg1 andUin:(unsigned long long)arg2;
+ (id)GetInvoiceArrFromJson:(id)arg1;
+ (_Bool)GetIsHaveInvoiceInfoFromJson:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *invoice_url; // @synthesize invoice_url;
@property(retain, nonatomic) NSString *email; // @synthesize email;
@property(retain, nonatomic) NSString *bank_number; // @synthesize bank_number;
@property(retain, nonatomic) NSString *bank_name; // @synthesize bank_name;
@property(retain, nonatomic) NSString *phone; // @synthesize phone;
@property(retain, nonatomic) NSString *address; // @synthesize address;
@property(retain, nonatomic) NSString *tax_number; // @synthesize tax_number;
@property(retain, nonatomic) NSString *title; // @synthesize title;
@property(retain, nonatomic) NSString *title_type; // @synthesize title_type;
@property(nonatomic) long long group_id; // @synthesize group_id;
- (id)NilOrStringOf:(id)arg1;
- (id)clone;

@end

