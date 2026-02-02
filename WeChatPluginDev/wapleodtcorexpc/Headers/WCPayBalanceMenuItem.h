//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCPayBalanceMenuItem : NSObject
{
    NSString *_title;
    long long _jump_type;
    NSString *_jump_h5_url;
    NSString *_tinyapp_username;
    NSString *_tinyapp_path;
}

+ (id)GenFromDictionary:(id)arg1;
+ (void)initialize;
+ (void)PBArrayAdd_tinyapp_path;
+ (void)PBArrayAdd_tinyapp_username;
+ (void)PBArrayAdd_jump_h5_url;
+ (void)PBArrayAdd_jump_type;
+ (void)PBArrayAdd_title;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *tinyapp_path; // @synthesize tinyapp_path=_tinyapp_path;
@property(copy, nonatomic) NSString *tinyapp_username; // @synthesize tinyapp_username=_tinyapp_username;
@property(copy, nonatomic) NSString *jump_h5_url; // @synthesize jump_h5_url=_jump_h5_url;
@property(nonatomic) long long jump_type; // @synthesize jump_type=_jump_type;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void)genFromDic:(id)arg1;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

