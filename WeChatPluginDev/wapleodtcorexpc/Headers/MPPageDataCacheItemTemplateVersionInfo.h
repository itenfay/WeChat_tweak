//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface MPPageDataCacheItemTemplateVersionInfo : NSObject
{
    unsigned int _type;
    unsigned int _version;
    NSString *_versionGroup;
}

+ (void)initialize;
+ (void)PBArrayAdd_versionGroup;
+ (void)PBArrayAdd_version;
+ (void)PBArrayAdd_type;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *versionGroup; // @synthesize versionGroup=_versionGroup;
@property(nonatomic) unsigned int version; // @synthesize version=_version;
@property(nonatomic) unsigned int type; // @synthesize type=_type;
@property(readonly, copy) NSString *description;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

