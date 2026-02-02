//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, WCPayJumpInfo;

@interface WCPayExposureInfo : NSObject
{
    unsigned int _is_show_btn;
    NSString *_icon;
    NSString *_name;
    NSString *_wording;
    NSString *_btn_wording;
    WCPayJumpInfo *_jump_info;
}

+ (id)genFromUnion:(id)arg1;
- (void).cxx_destruct;
@property(retain) WCPayJumpInfo *jump_info; // @synthesize jump_info=_jump_info;
@property(retain) NSString *btn_wording; // @synthesize btn_wording=_btn_wording;
@property unsigned int is_show_btn; // @synthesize is_show_btn=_is_show_btn;
@property(retain) NSString *wording; // @synthesize wording=_wording;
@property(retain) NSString *name; // @synthesize name=_name;
@property(retain) NSString *icon; // @synthesize icon=_icon;

@end

