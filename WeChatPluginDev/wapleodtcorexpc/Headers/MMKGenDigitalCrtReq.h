//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface MMKGenDigitalCrtReq : NSObject
{
    int _type;
    int _idType;
    int _certEncryptType;
    NSString *_idNo;
    NSString *_reqKey;
    NSString *_verifyCode;
    NSString *_token;
    NSString *_creTail;
}

+ (id)KGenDigitalCrtReqWithType:(int)arg1 idType:(int)arg2 idNo:(id)arg3 reqKey:(id)arg4 verifyCode:(id)arg5 token:(id)arg6 creTail:(id)arg7 certEncryptType:(int)arg8;
- (void).cxx_destruct;
@property(readonly, nonatomic) int certEncryptType; // @synthesize certEncryptType=_certEncryptType;
@property(readonly, nonatomic) NSString *creTail; // @synthesize creTail=_creTail;
@property(readonly, nonatomic) NSString *token; // @synthesize token=_token;
@property(readonly, nonatomic) NSString *verifyCode; // @synthesize verifyCode=_verifyCode;
@property(readonly, nonatomic) NSString *reqKey; // @synthesize reqKey=_reqKey;
@property(readonly, nonatomic) NSString *idNo; // @synthesize idNo=_idNo;
@property(readonly, nonatomic) int idType; // @synthesize idType=_idType;
@property(readonly, nonatomic) int type; // @synthesize type=_type;
- (id)description;
- (id)initWithType:(int)arg1 idType:(int)arg2 idNo:(id)arg3 reqKey:(id)arg4 verifyCode:(id)arg5 token:(id)arg6 creTail:(id)arg7 certEncryptType:(int)arg8;

@end

