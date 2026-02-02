//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSData, NSString;

@interface MMPatternLockBufferData : NSObject
{
    unsigned int _uin;
    unsigned int _version;
    unsigned int _lockStatus;
    NSData *_svrPatternHash;
    NSData *_sign;
}

+ (void)initialize;
+ (void)PBArrayAdd_sign;
+ (void)PBArrayAdd_lockStatus;
+ (void)PBArrayAdd_svrPatternHash;
+ (void)PBArrayAdd_version;
+ (void)PBArrayAdd_uin;
- (void).cxx_destruct;
@property(retain, nonatomic) NSData *sign; // @synthesize sign=_sign;
@property(nonatomic) unsigned int lockStatus; // @synthesize lockStatus=_lockStatus;
@property(retain, nonatomic) NSData *svrPatternHash; // @synthesize svrPatternHash=_svrPatternHash;
@property(nonatomic) unsigned int version; // @synthesize version=_version;
@property(nonatomic) unsigned int uin; // @synthesize uin=_uin;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

