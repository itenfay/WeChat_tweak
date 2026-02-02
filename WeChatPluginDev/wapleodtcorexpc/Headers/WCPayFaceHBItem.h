//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCPayFaceHBItem : NSObject
{
    _Bool _isLucky;
    unsigned int _createTime;
    unsigned int _uniqueID;
    NSString *_msg;
    long long _svrID;
    NSString *_userName;
    NSString *_sendId;
    NSString *_nativeurl;
    unsigned long long _money;
    NSString *_externMess;
    NSString *_sendHeadImage;
    NSString *_sendNickName;
}

+ (void)initialize;
+ (void)PBArrayAdd_svrID;
+ (void)PBArrayAdd_createTime;
+ (void)PBArrayAdd_msg;
- (void).cxx_destruct;
@property(retain) NSString *sendNickName; // @synthesize sendNickName=_sendNickName;
@property(retain) NSString *sendHeadImage; // @synthesize sendHeadImage=_sendHeadImage;
@property(nonatomic) _Bool isLucky; // @synthesize isLucky=_isLucky;
@property(retain, nonatomic) NSString *externMess; // @synthesize externMess=_externMess;
@property(nonatomic) unsigned long long money; // @synthesize money=_money;
@property(retain, nonatomic) NSString *nativeurl; // @synthesize nativeurl=_nativeurl;
@property(retain, nonatomic) NSString *sendId; // @synthesize sendId=_sendId;
@property(retain, nonatomic) NSString *userName; // @synthesize userName=_userName;
@property(nonatomic) unsigned int uniqueID; // @synthesize uniqueID=_uniqueID;
@property(nonatomic) long long svrID; // @synthesize svrID=_svrID;
@property(nonatomic) unsigned int createTime; // @synthesize createTime=_createTime;
@property(retain, nonatomic) NSString *msg; // @synthesize msg=_msg;
- (void)parse;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

