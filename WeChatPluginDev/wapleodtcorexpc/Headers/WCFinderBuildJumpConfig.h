//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCFinderBuildJumpConfig : NSObject
{
    int _business_type;
    NSString *_wording;
    NSString *_recommend_reason;
    NSString *_report_info;
    NSString *_icon_url;
    NSString *_ext_buff_string;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *ext_buff_string; // @synthesize ext_buff_string=_ext_buff_string;
@property(nonatomic) int business_type; // @synthesize business_type=_business_type;
@property(copy, nonatomic) NSString *icon_url; // @synthesize icon_url=_icon_url;
@property(copy, nonatomic) NSString *report_info; // @synthesize report_info=_report_info;
@property(copy, nonatomic) NSString *recommend_reason; // @synthesize recommend_reason=_recommend_reason;
@property(copy, nonatomic) NSString *wording; // @synthesize wording=_wording;
- (id)description;
- (id)initWithJSONString:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)toJsonStr;

@end

