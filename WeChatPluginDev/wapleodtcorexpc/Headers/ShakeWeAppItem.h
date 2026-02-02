//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface ShakeWeAppItem : NSObject
{
    unsigned int _version;
    NSString *_title;
    NSString *_thumbUrl;
    NSString *_weAppUsername;
    NSString *_path;
}

+ (void)initialize;
+ (void)PBArrayAdd_version;
+ (void)PBArrayAdd_path;
+ (void)PBArrayAdd_weAppUsername;
+ (void)PBArrayAdd_thumbUrl;
+ (void)PBArrayAdd_title;
- (void).cxx_destruct;
@property(nonatomic) unsigned int version; // @synthesize version=_version;
@property(retain, nonatomic) NSString *path; // @synthesize path=_path;
@property(retain, nonatomic) NSString *weAppUsername; // @synthesize weAppUsername=_weAppUsername;
@property(retain, nonatomic) NSString *thumbUrl; // @synthesize thumbUrl=_thumbUrl;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
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

