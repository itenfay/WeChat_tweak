//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class EcsJumpInfo, EcsKfTempleteMsgOrderInfo, NSDate, NSString, UIColor;

@interface TemplateHeaderWrap : NSObject
{
    _Bool _hideTitleAndTime;
    _Bool _showIconAndDisplayName;
    _Bool _hideIconAndDisplayNameLine;
    _Bool _showComplaintButton;
    _Bool _objIsShowShortcutIcon;
    _Bool _hideTitle;
    _Bool _hideTime;
    _Bool _isIgnoreHideTitleAndTimeFlag;
    _Bool _show_right_icon_and_desc_name;
    _Bool _show_finder_feed_entry;
    _Bool _show_header_background_img;
    unsigned int _businessType;
    unsigned int _weappVersion;
    unsigned int _weappState;
    unsigned int _paymsgStyle;
    NSString *_title;
    UIColor *_titleColor;
    NSDate *_pubTime;
    NSString *_first;
    UIColor *_firstColor;
    NSString *_iconUrl;
    NSString *_displayName;
    NSString *_templateMsgId;
    NSString *_objShortcutIconURL;
    NSString *_objH5Url;
    NSString *_objWeAppUserName;
    NSString *_objWeAppPath;
    unsigned long long _header_jump_type;
    NSString *_display_name_desc;
    NSString *_right_icon_url;
    NSString *_right_desc_name;
    NSString *_finder_user_name;
    NSString *_finder_feedid;
    NSString *_finder_nonceid;
    NSString *_finder_feed_thumnail;
    NSString *_transaction_id;
    NSString *_header_background_img_url;
    NSString *_header_background_img_url_darkmode;
    NSString *_header_background_color;
    NSString *_header_background_color_darkmode;
    EcsKfTempleteMsgOrderInfo *_ecsKfTempleteMsgOrderInfo;
    EcsJumpInfo *_ecsJumpInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) EcsJumpInfo *ecsJumpInfo; // @synthesize ecsJumpInfo=_ecsJumpInfo;
@property(retain, nonatomic) EcsKfTempleteMsgOrderInfo *ecsKfTempleteMsgOrderInfo; // @synthesize ecsKfTempleteMsgOrderInfo=_ecsKfTempleteMsgOrderInfo;
@property(retain, nonatomic) NSString *header_background_color_darkmode; // @synthesize header_background_color_darkmode=_header_background_color_darkmode;
@property(retain, nonatomic) NSString *header_background_color; // @synthesize header_background_color=_header_background_color;
@property(retain, nonatomic) NSString *header_background_img_url_darkmode; // @synthesize header_background_img_url_darkmode=_header_background_img_url_darkmode;
@property(retain, nonatomic) NSString *header_background_img_url; // @synthesize header_background_img_url=_header_background_img_url;
@property(nonatomic) _Bool show_header_background_img; // @synthesize show_header_background_img=_show_header_background_img;
@property(retain, nonatomic) NSString *transaction_id; // @synthesize transaction_id=_transaction_id;
@property(retain, nonatomic) NSString *finder_feed_thumnail; // @synthesize finder_feed_thumnail=_finder_feed_thumnail;
@property(retain, nonatomic) NSString *finder_nonceid; // @synthesize finder_nonceid=_finder_nonceid;
@property(retain, nonatomic) NSString *finder_feedid; // @synthesize finder_feedid=_finder_feedid;
@property(nonatomic) _Bool show_finder_feed_entry; // @synthesize show_finder_feed_entry=_show_finder_feed_entry;
@property(retain, nonatomic) NSString *finder_user_name; // @synthesize finder_user_name=_finder_user_name;
@property(retain, nonatomic) NSString *right_desc_name; // @synthesize right_desc_name=_right_desc_name;
@property(retain, nonatomic) NSString *right_icon_url; // @synthesize right_icon_url=_right_icon_url;
@property(nonatomic) _Bool show_right_icon_and_desc_name; // @synthesize show_right_icon_and_desc_name=_show_right_icon_and_desc_name;
@property(retain, nonatomic) NSString *display_name_desc; // @synthesize display_name_desc=_display_name_desc;
@property(nonatomic) unsigned long long header_jump_type; // @synthesize header_jump_type=_header_jump_type;
@property(nonatomic) unsigned int paymsgStyle; // @synthesize paymsgStyle=_paymsgStyle;
@property(nonatomic) _Bool isIgnoreHideTitleAndTimeFlag; // @synthesize isIgnoreHideTitleAndTimeFlag=_isIgnoreHideTitleAndTimeFlag;
@property(nonatomic) _Bool hideTime; // @synthesize hideTime=_hideTime;
@property(nonatomic) _Bool hideTitle; // @synthesize hideTitle=_hideTitle;
@property(nonatomic) unsigned int weappState; // @synthesize weappState=_weappState;
@property(nonatomic) unsigned int weappVersion; // @synthesize weappVersion=_weappVersion;
@property(retain, nonatomic) NSString *objWeAppPath; // @synthesize objWeAppPath=_objWeAppPath;
@property(retain, nonatomic) NSString *objWeAppUserName; // @synthesize objWeAppUserName=_objWeAppUserName;
@property(retain, nonatomic) NSString *objH5Url; // @synthesize objH5Url=_objH5Url;
@property(retain, nonatomic) NSString *objShortcutIconURL; // @synthesize objShortcutIconURL=_objShortcutIconURL;
@property(nonatomic) _Bool objIsShowShortcutIcon; // @synthesize objIsShowShortcutIcon=_objIsShowShortcutIcon;
@property(nonatomic) unsigned int businessType; // @synthesize businessType=_businessType;
@property(retain, nonatomic) NSString *templateMsgId; // @synthesize templateMsgId=_templateMsgId;
@property(nonatomic) _Bool showComplaintButton; // @synthesize showComplaintButton=_showComplaintButton;
@property(nonatomic) _Bool hideIconAndDisplayNameLine; // @synthesize hideIconAndDisplayNameLine=_hideIconAndDisplayNameLine;
@property(nonatomic) _Bool showIconAndDisplayName; // @synthesize showIconAndDisplayName=_showIconAndDisplayName;
@property(nonatomic) _Bool hideTitleAndTime; // @synthesize hideTitleAndTime=_hideTitleAndTime;
@property(retain, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(retain, nonatomic) NSString *iconUrl; // @synthesize iconUrl=_iconUrl;
@property(retain, nonatomic) UIColor *firstColor; // @synthesize firstColor=_firstColor;
@property(retain, nonatomic) NSString *first; // @synthesize first=_first;
@property(retain, nonatomic) NSDate *pubTime; // @synthesize pubTime=_pubTime;
@property(retain, nonatomic) UIColor *titleColor; // @synthesize titleColor=_titleColor;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;

@end

