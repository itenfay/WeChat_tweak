//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCPayPayMenuItem : NSObject
{
    int _paymenu_jump_type;
    NSString *_paymenu_jump_url;
    NSString *_paymenu_username;
    NSString *_paymenu_path;
    NSString *_paymenu_title;
}

+ (id)genFromDictionary:(id)arg1;
+ (void)initialize;
+ (void)PBArrayAdd_paymenu_title;
+ (void)PBArrayAdd_paymenu_path;
+ (void)PBArrayAdd_paymenu_username;
+ (void)PBArrayAdd_paymenu_jump_url;
+ (void)PBArrayAdd_paymenu_jump_type;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *paymenu_title; // @synthesize paymenu_title=_paymenu_title;
@property(retain, nonatomic) NSString *paymenu_path; // @synthesize paymenu_path=_paymenu_path;
@property(retain, nonatomic) NSString *paymenu_username; // @synthesize paymenu_username=_paymenu_username;
@property(retain, nonatomic) NSString *paymenu_jump_url; // @synthesize paymenu_jump_url=_paymenu_jump_url;
@property(nonatomic) int paymenu_jump_type; // @synthesize paymenu_jump_type=_paymenu_jump_type;
- (void)reportClick;
- (id)initFromDictionary:(id)arg1;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

