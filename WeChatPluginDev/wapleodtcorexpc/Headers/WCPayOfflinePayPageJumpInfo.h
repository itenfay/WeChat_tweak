//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCPayOfflinePayPageJumpInfo : NSObject
{
    int _jump_type;
    NSString *_icon_url;
    NSString *_title;
    NSString *_tiny_app_username;
    NSString *_tiny_app_path;
    NSString *_h5_url;
}

+ (void)clearJumpInfoCacheData;
+ (_Bool)saveJumpInfoCacheData:(id)arg1;
+ (id)getJumpInfoCacheData;
+ (void)initialize;
+ (void)PBArrayAdd_jump_type;
+ (void)PBArrayAdd_h5_url;
+ (void)PBArrayAdd_tiny_app_path;
+ (void)PBArrayAdd_tiny_app_username;
+ (void)PBArrayAdd_title;
+ (void)PBArrayAdd_icon_url;
- (void).cxx_destruct;
@property(nonatomic) int jump_type; // @synthesize jump_type=_jump_type;
@property(retain, nonatomic) NSString *h5_url; // @synthesize h5_url=_h5_url;
@property(retain, nonatomic) NSString *tiny_app_path; // @synthesize tiny_app_path=_tiny_app_path;
@property(retain, nonatomic) NSString *tiny_app_username; // @synthesize tiny_app_username=_tiny_app_username;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *icon_url; // @synthesize icon_url=_icon_url;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

