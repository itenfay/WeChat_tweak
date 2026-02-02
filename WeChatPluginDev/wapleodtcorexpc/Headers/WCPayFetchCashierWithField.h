//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FieldAreaInfo, NSString;

@interface WCPayFetchCashierWithField : NSObject
{
    long long _is_open_field_area;
    FieldAreaInfo *_field_area_info;
    NSString *_fetch_fee;
    NSString *_fetch_fee_symbol;
}

+ (id)GenFromDic:(id)arg1;
- (void).cxx_destruct;
@property(retain) NSString *fetch_fee_symbol; // @synthesize fetch_fee_symbol=_fetch_fee_symbol;
@property(retain) NSString *fetch_fee; // @synthesize fetch_fee=_fetch_fee;
@property(retain) FieldAreaInfo *field_area_info; // @synthesize field_area_info=_field_area_info;
@property long long is_open_field_area; // @synthesize is_open_field_area=_is_open_field_area;

@end

