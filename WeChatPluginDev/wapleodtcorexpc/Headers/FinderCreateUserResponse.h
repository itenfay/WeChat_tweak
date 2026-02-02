//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, FinderContact, FinderContactExtInfo, FinderNicknameVerifyInfo;

@interface FinderCreateUserResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) FinderContact *contact; // @dynamic contact;
@property(retain, nonatomic) FinderContactExtInfo *extInfo; // @dynamic extInfo;
@property(retain, nonatomic) FinderNicknameVerifyInfo *verifyInfo; // @dynamic verifyInfo;

@end

