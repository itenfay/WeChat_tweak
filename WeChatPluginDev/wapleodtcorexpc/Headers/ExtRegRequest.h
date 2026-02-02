//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSString;

@interface ExtRegRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSString *bindMobile; // @dynamic bindMobile;
@property(retain, nonatomic) NSString *extRegUrl; // @dynamic extRegUrl;
@property(nonatomic) unsigned int hasHeadImg; // @dynamic hasHeadImg;
@property(retain, nonatomic) NSString *headImgAesKey; // @dynamic headImgAesKey;
@property(retain, nonatomic) NSString *headImgFileId; // @dynamic headImgFileId;
@property(retain, nonatomic) NSString *nickName; // @dynamic nickName;
@property(retain, nonatomic) NSString *privacyPolicyCountry; // @dynamic privacyPolicyCountry;
@property(nonatomic) unsigned int regMode; // @dynamic regMode;
@property(retain, nonatomic) NSString *regSessionId; // @dynamic regSessionId;

@end

