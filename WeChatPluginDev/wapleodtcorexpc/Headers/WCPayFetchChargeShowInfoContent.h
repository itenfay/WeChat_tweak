//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCPayFetchChargeShowInfoContent : NSObject
{
    NSString *_name;
    NSString *_value;
    NSString *_name_color;
    NSString *_value_color;
}

+ (id)GenFromDictionary:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *value_color; // @synthesize value_color=_value_color;
@property(retain, nonatomic) NSString *name_color; // @synthesize name_color=_name_color;
@property(retain, nonatomic) NSString *value; // @synthesize value=_value;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (void)genFromDic:(id)arg1;

@end

