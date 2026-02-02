//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCPayOfflinePayBlockLayer : NSObject
{
    unsigned int _view_id;
    unsigned int _is_show_block_layer;
    unsigned int _waiting_time;
    NSString *_main_wording;
    NSString *_reminder_content;
    NSString *_repayment_tiny_app_username;
    NSString *_repayment_tiny_app_path;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *repayment_tiny_app_path; // @synthesize repayment_tiny_app_path=_repayment_tiny_app_path;
@property(retain, nonatomic) NSString *repayment_tiny_app_username; // @synthesize repayment_tiny_app_username=_repayment_tiny_app_username;
@property(retain, nonatomic) NSString *reminder_content; // @synthesize reminder_content=_reminder_content;
@property(retain, nonatomic) NSString *main_wording; // @synthesize main_wording=_main_wording;
@property(nonatomic) unsigned int waiting_time; // @synthesize waiting_time=_waiting_time;
@property(nonatomic) unsigned int is_show_block_layer; // @synthesize is_show_block_layer=_is_show_block_layer;
@property(nonatomic) unsigned int view_id; // @synthesize view_id=_view_id;

@end

