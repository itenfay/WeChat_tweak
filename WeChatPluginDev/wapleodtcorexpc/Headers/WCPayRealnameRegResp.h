//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCPayRealnameRegResp : NSObject
{
    int _passport_page_style;
    NSString *_title;
    NSString *_desc;
    NSString *_page;
    NSString *_err_jump_page;
    NSString *_confirm_btn_title;
    NSString *_confirm_btn_url;
    NSString *_cancel_btn_title;
    NSString *_bottom_wording;
    NSString *_bottom_url;
    NSString *_bottom_username;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *bottom_username; // @synthesize bottom_username=_bottom_username;
@property(retain, nonatomic) NSString *bottom_url; // @synthesize bottom_url=_bottom_url;
@property(retain, nonatomic) NSString *bottom_wording; // @synthesize bottom_wording=_bottom_wording;
@property(retain, nonatomic) NSString *cancel_btn_title; // @synthesize cancel_btn_title=_cancel_btn_title;
@property(retain, nonatomic) NSString *confirm_btn_url; // @synthesize confirm_btn_url=_confirm_btn_url;
@property(retain, nonatomic) NSString *confirm_btn_title; // @synthesize confirm_btn_title=_confirm_btn_title;
@property(nonatomic) int passport_page_style; // @synthesize passport_page_style=_passport_page_style;
@property(retain) NSString *err_jump_page; // @synthesize err_jump_page=_err_jump_page;
@property(retain) NSString *page; // @synthesize page=_page;
@property(retain) NSString *desc; // @synthesize desc=_desc;
@property(retain) NSString *title; // @synthesize title=_title;

@end

