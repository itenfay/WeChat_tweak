//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCPayECardRealNameInfo : NSObject
{
    _Bool _show_check_box;
    _Bool _check_box_selected;
    _Bool _is_upload_credid;
    NSString *_ecard_open_scene;
    NSString *_ecard_type;
    NSString *_check_box_left_wording;
    NSString *_check_box_right_wording;
    NSString *_check_box_url;
    NSString *_upload_credit_url;
}

+ (id)GenFromDictionary:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *upload_credit_url; // @synthesize upload_credit_url=_upload_credit_url;
@property(nonatomic) _Bool is_upload_credid; // @synthesize is_upload_credid=_is_upload_credid;
@property(retain, nonatomic) NSString *check_box_url; // @synthesize check_box_url=_check_box_url;
@property(retain, nonatomic) NSString *check_box_right_wording; // @synthesize check_box_right_wording=_check_box_right_wording;
@property(retain, nonatomic) NSString *check_box_left_wording; // @synthesize check_box_left_wording=_check_box_left_wording;
@property(nonatomic) _Bool check_box_selected; // @synthesize check_box_selected=_check_box_selected;
@property(nonatomic) _Bool show_check_box; // @synthesize show_check_box=_show_check_box;
@property(retain, nonatomic) NSString *ecard_type; // @synthesize ecard_type=_ecard_type;
@property(retain, nonatomic) NSString *ecard_open_scene; // @synthesize ecard_open_scene=_ecard_open_scene;
- (void)genFromDic:(id)arg1;

@end

