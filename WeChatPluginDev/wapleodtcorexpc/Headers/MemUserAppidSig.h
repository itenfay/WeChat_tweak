//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MemAppidSigManager, WloginUserInfo;

@interface MemUserAppidSig : NSObject
{
    WloginUserInfo *userInfo;
    MemAppidSigManager *userSigList;
}

@property(readonly, nonatomic) WloginUserInfo *userInfo; // @synthesize userInfo;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (int)decodeUserPwdSigData:(id)arg1 andSigAppId:(unsigned int)arg2 byKey:(id)arg3 outPwdSig:(id)arg4;
- (_Bool)encodeUserPwdSig:(id)arg1 byKey:(id)arg2 outDataBuff:(id)arg3;
- (void)printUserAndSig;
- (unsigned int)topPriorityAppid;
- (unsigned int)userUin;
- (void)setUserUin:(unsigned int)arg1;
- (_Bool)hasExpireBySigType:(unsigned int)arg1 andAppid:(unsigned int)arg2;
- (_Bool)hasExpireByAppid:(unsigned int)arg1 andAppExpTime:(unsigned int)arg2;
- (void)setPriority:(unsigned int)arg1 andTime:(unsigned int)arg2 byAppid:(unsigned int)arg3;
- (void)setSig:(id)arg1;
- (void)removeSigByAppid:(unsigned int)arg1;
- (id)sigByAppid:(unsigned int)arg1 andSigName:(id)arg2;
- (void)dealloc;
- (id)initWithBasicInfo:(unsigned int)arg1 andPubNo:(unsigned int)arg2 andClientType:(unsigned int)arg3;

@end

