//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface FQFCardInfo : NSObject
{
    unsigned long long _fqf_avail_quota;
    unsigned long long _fqf_interest_rate;
    double _fqf_interest_amount;
    NSString *_fqf_pay_desk_title;
    NSString *_fqf_title;
    NSString *_fqf_sub_title;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *fqf_sub_title; // @synthesize fqf_sub_title=_fqf_sub_title;
@property(retain, nonatomic) NSString *fqf_title; // @synthesize fqf_title=_fqf_title;
@property(retain, nonatomic) NSString *fqf_pay_desk_title; // @synthesize fqf_pay_desk_title=_fqf_pay_desk_title;
@property(nonatomic) double fqf_interest_amount; // @synthesize fqf_interest_amount=_fqf_interest_amount;
@property(nonatomic) unsigned long long fqf_interest_rate; // @synthesize fqf_interest_rate=_fqf_interest_rate;
@property(nonatomic) unsigned long long fqf_avail_quota; // @synthesize fqf_avail_quota=_fqf_avail_quota;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

