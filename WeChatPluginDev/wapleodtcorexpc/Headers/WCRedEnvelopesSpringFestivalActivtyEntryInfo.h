//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCRedEnvelopesSpringFestivalActivtyEntryInfo : NSObject
{
    _Bool _is_show;
    unsigned int _action_type;
    NSString *_icon_url;
    NSString *_wording;
    NSString *_action_url;
    NSString *_action_app_username;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *action_app_username; // @synthesize action_app_username=_action_app_username;
@property(retain, nonatomic) NSString *action_url; // @synthesize action_url=_action_url;
@property(nonatomic) unsigned int action_type; // @synthesize action_type=_action_type;
@property(retain, nonatomic) NSString *wording; // @synthesize wording=_wording;
@property(retain, nonatomic) NSString *icon_url; // @synthesize icon_url=_icon_url;
@property(nonatomic) _Bool is_show; // @synthesize is_show=_is_show;

@end

