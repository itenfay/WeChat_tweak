//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface SecurityDialogButtonInfo : NSObject
{
    int _jump_type;
    NSString *_button_wording;
    NSString *_jump_h5_url;
    NSString *_tinyapp_username;
    NSString *_tinyapp_path;
}

- (void).cxx_destruct;
@property(retain) NSString *tinyapp_path; // @synthesize tinyapp_path=_tinyapp_path;
@property(retain) NSString *tinyapp_username; // @synthesize tinyapp_username=_tinyapp_username;
@property(retain) NSString *jump_h5_url; // @synthesize jump_h5_url=_jump_h5_url;
@property int jump_type; // @synthesize jump_type=_jump_type;
@property(retain) NSString *button_wording; // @synthesize button_wording=_button_wording;

@end

