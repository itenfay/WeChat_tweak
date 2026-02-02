//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface MMFinderLiveGenericPaymentItem : NSObject
{
    unsigned int _type;
    unsigned long long _price;
    NSString *_name;
    NSString *_desc;
    NSString *_additionalDesc;
    NSString *_payButtonTitle;
}

+ (id)paymentItemWithName:(id)arg1 price:(unsigned long long)arg2 type:(unsigned int)arg3 desc:(id)arg4 additionalDesc:(id)arg5 payTitle:(id)arg6;
- (void).cxx_destruct;
@property(nonatomic) unsigned int type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *payButtonTitle; // @synthesize payButtonTitle=_payButtonTitle;
@property(retain, nonatomic) NSString *additionalDesc; // @synthesize additionalDesc=_additionalDesc;
@property(retain, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) unsigned long long price; // @synthesize price=_price;

@end

