//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, WCPayOfflinePayGuideData;

@interface WCPayOfflinePayGuideBar : NSObject
{
    unsigned int _guide_type;
    unsigned int _is_show_guide;
    unsigned int _btn_jump_mode;
    WCPayOfflinePayGuideData *_guide_data;
    NSString *_guide_content;
    NSString *_guide_content_color;
    NSString *_guide_btn_text;
    NSString *_guide_btn_text_color;
    NSString *_guide_btn_bg_color;
    NSString *_guide_logo;
    NSString *_background_color;
    NSString *_attach_info_left_wording;
    NSString *_attach_info_right_wording;
    NSString *_btn_jump_h5;
    NSString *_btn_jump_tinyapp_username;
    NSString *_btn_jump_tinyapp_path;
    NSString *_dark_guide_btn_text_color;
    NSString *_dark_guide_btn_bg_color;
    NSString *_dark_background_color;
}

+ (void)removeOfflinePayGuideBarData;
+ (_Bool)saveOfflinePayGuideBarData:(id)arg1;
+ (id)getLocalOfflinePayGuideBarData;
+ (void)initialize;
+ (void)PBArrayAdd_dark_background_color;
+ (void)PBArrayAdd_dark_guide_btn_bg_color;
+ (void)PBArrayAdd_dark_guide_btn_text_color;
+ (void)PBArrayAdd_btn_jump_tinyapp_path;
+ (void)PBArrayAdd_btn_jump_tinyapp_username;
+ (void)PBArrayAdd_btn_jump_h5;
+ (void)PBArrayAdd_btn_jump_mode;
+ (void)PBArrayAdd_attach_info_right_wording;
+ (void)PBArrayAdd_attach_info_left_wording;
+ (void)PBArrayAdd_background_color;
+ (void)PBArrayAdd_guide_logo;
+ (void)PBArrayAdd_guide_btn_bg_color;
+ (void)PBArrayAdd_guide_btn_text_color;
+ (void)PBArrayAdd_guide_btn_text;
+ (void)PBArrayAdd_guide_content_color;
+ (void)PBArrayAdd_guide_content;
+ (void)PBArrayAdd_is_show_guide;
+ (void)PBArrayAdd_guide_data;
+ (void)PBArrayAdd_guide_type;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *dark_background_color; // @synthesize dark_background_color=_dark_background_color;
@property(retain, nonatomic) NSString *dark_guide_btn_bg_color; // @synthesize dark_guide_btn_bg_color=_dark_guide_btn_bg_color;
@property(retain, nonatomic) NSString *dark_guide_btn_text_color; // @synthesize dark_guide_btn_text_color=_dark_guide_btn_text_color;
@property(retain, nonatomic) NSString *btn_jump_tinyapp_path; // @synthesize btn_jump_tinyapp_path=_btn_jump_tinyapp_path;
@property(retain, nonatomic) NSString *btn_jump_tinyapp_username; // @synthesize btn_jump_tinyapp_username=_btn_jump_tinyapp_username;
@property(retain, nonatomic) NSString *btn_jump_h5; // @synthesize btn_jump_h5=_btn_jump_h5;
@property(nonatomic) unsigned int btn_jump_mode; // @synthesize btn_jump_mode=_btn_jump_mode;
@property(retain, nonatomic) NSString *attach_info_right_wording; // @synthesize attach_info_right_wording=_attach_info_right_wording;
@property(retain, nonatomic) NSString *attach_info_left_wording; // @synthesize attach_info_left_wording=_attach_info_left_wording;
@property(retain, nonatomic) NSString *background_color; // @synthesize background_color=_background_color;
@property(retain, nonatomic) NSString *guide_logo; // @synthesize guide_logo=_guide_logo;
@property(retain, nonatomic) NSString *guide_btn_bg_color; // @synthesize guide_btn_bg_color=_guide_btn_bg_color;
@property(retain, nonatomic) NSString *guide_btn_text_color; // @synthesize guide_btn_text_color=_guide_btn_text_color;
@property(retain, nonatomic) NSString *guide_btn_text; // @synthesize guide_btn_text=_guide_btn_text;
@property(retain, nonatomic) NSString *guide_content_color; // @synthesize guide_content_color=_guide_content_color;
@property(retain, nonatomic) NSString *guide_content; // @synthesize guide_content=_guide_content;
@property(nonatomic) unsigned int is_show_guide; // @synthesize is_show_guide=_is_show_guide;
@property(retain, nonatomic) WCPayOfflinePayGuideData *guide_data; // @synthesize guide_data=_guide_data;
@property(nonatomic) unsigned int guide_type; // @synthesize guide_type=_guide_type;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

