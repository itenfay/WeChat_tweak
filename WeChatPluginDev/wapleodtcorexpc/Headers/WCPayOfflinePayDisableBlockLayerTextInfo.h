//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCPayOfflinePayDisableBlockLayerTextInfo : NSObject
{
    NSString *_main_wording;
    NSString *_reminder_content;
    NSString *_action_btn_text;
    NSString *_language;
}

+ (void)initialize;
+ (void)PBArrayAdd_language;
+ (void)PBArrayAdd_action_btn_text;
+ (void)PBArrayAdd_reminder_content;
+ (void)PBArrayAdd_main_wording;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *language; // @synthesize language=_language;
@property(retain, nonatomic) NSString *action_btn_text; // @synthesize action_btn_text=_action_btn_text;
@property(retain, nonatomic) NSString *reminder_content; // @synthesize reminder_content=_reminder_content;
@property(retain, nonatomic) NSString *main_wording; // @synthesize main_wording=_main_wording;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

