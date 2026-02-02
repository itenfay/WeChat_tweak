//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCPaySimpleCashierInfo : NSObject
{
    unsigned int _use_simple_cashier;
    NSString *_bank_type;
    NSString *_bind_serial;
}

- (void).cxx_destruct;
@property(retain) NSString *bind_serial; // @synthesize bind_serial=_bind_serial;
@property(retain) NSString *bank_type; // @synthesize bank_type=_bank_type;
@property unsigned int use_simple_cashier; // @synthesize use_simple_cashier=_use_simple_cashier;

@end

