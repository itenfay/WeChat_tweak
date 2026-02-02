//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCPayBindCardListApplyNewCardInfo : NSObject
{
    long long _menu_jump_type;
    NSString *_menu_jump_url;
    NSString *_menu_username;
    NSString *_menu_path;
    NSString *_menu_title;
    NSString *_menu_icon_url;
}

+ (id)loadFromFileWithScene:(int)arg1;
+ (void)saveFromDictionary:(id)arg1 withScene:(int)arg2;
+ (id)genFromDictionary:(id)arg1;
+ (void)initialize;
+ (void)PBArrayAdd_menu_icon_url;
+ (void)PBArrayAdd_menu_title;
+ (void)PBArrayAdd_menu_path;
+ (void)PBArrayAdd_menu_username;
+ (void)PBArrayAdd_menu_jump_url;
+ (void)PBArrayAdd_menu_jump_type;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *menu_icon_url; // @synthesize menu_icon_url=_menu_icon_url;
@property(retain, nonatomic) NSString *menu_title; // @synthesize menu_title=_menu_title;
@property(retain, nonatomic) NSString *menu_path; // @synthesize menu_path=_menu_path;
@property(retain, nonatomic) NSString *menu_username; // @synthesize menu_username=_menu_username;
@property(retain, nonatomic) NSString *menu_jump_url; // @synthesize menu_jump_url=_menu_jump_url;
@property(nonatomic) long long menu_jump_type; // @synthesize menu_jump_type=_menu_jump_type;
- (id)init;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

