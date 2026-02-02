//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, RealnameHalfPageDialog, UnderAgeDialog;

@interface WCPayRealnameAuthenResp : NSObject
{
    _Bool _is_need_bind;
    _Bool _is_need_face;
    _Bool _is_need_Laund;
    unsigned int _scene;
    NSString *_token;
    NSString *_laundh5;
    NSString *_error_detail_url;
    NSString *_package;
    NSString *_packagesign;
    UnderAgeDialog *_under_age_dialog;
    RealnameHalfPageDialog *_under_age_mid_dialog;
    NSString *_under_age_session_id;
    NSString *_underage_msg_preview;
    NSString *_addbankword;
}

- (void).cxx_destruct;
@property(retain) NSString *addbankword; // @synthesize addbankword=_addbankword;
@property(retain, nonatomic) NSString *underage_msg_preview; // @synthesize underage_msg_preview=_underage_msg_preview;
@property(retain, nonatomic) NSString *under_age_session_id; // @synthesize under_age_session_id=_under_age_session_id;
@property(retain, nonatomic) RealnameHalfPageDialog *under_age_mid_dialog; // @synthesize under_age_mid_dialog=_under_age_mid_dialog;
@property(retain) UnderAgeDialog *under_age_dialog; // @synthesize under_age_dialog=_under_age_dialog;
@property(retain) NSString *packagesign; // @synthesize packagesign=_packagesign;
@property(retain) NSString *package; // @synthesize package=_package;
@property unsigned int scene; // @synthesize scene=_scene;
@property(retain) NSString *error_detail_url; // @synthesize error_detail_url=_error_detail_url;
@property(retain) NSString *laundh5; // @synthesize laundh5=_laundh5;
@property _Bool is_need_Laund; // @synthesize is_need_Laund=_is_need_Laund;
@property _Bool is_need_face; // @synthesize is_need_face=_is_need_face;
@property _Bool is_need_bind; // @synthesize is_need_bind=_is_need_bind;
@property(retain) NSString *token; // @synthesize token=_token;

@end

