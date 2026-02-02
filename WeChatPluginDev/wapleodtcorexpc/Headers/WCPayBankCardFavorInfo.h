//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, WCPayNewBindCardFavorInfo;

@interface WCPayBankCardFavorInfo : NSObject
{
    NSArray *_bind_serial_favor_info_list;
    WCPayNewBindCardFavorInfo *_wcpay_new_bind_card_info;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCPayNewBindCardFavorInfo *wcpay_new_bind_card_info; // @synthesize wcpay_new_bind_card_info=_wcpay_new_bind_card_info;
@property(retain, nonatomic) NSArray *bind_serial_favor_info_list; // @synthesize bind_serial_favor_info_list=_bind_serial_favor_info_list;

@end

