//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//


@class BaseResponse, NSString, RedEnvelopesLiteappJumpInfo;

@class WXPBGeneratedMessage;

@interface GetRedPacketFissionResp : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) RedEnvelopesLiteappJumpInfo *coverSetLiteappInfo; // @dynamic coverSetLiteappInfo;
@property(retain, nonatomic) NSString *logoMd5; // @dynamic logoMd5;
@property(retain, nonatomic) NSString *logoUrl; // @dynamic logoUrl;
@property(nonatomic) _Bool showFission; // @dynamic showFission;
@property(nonatomic) _Bool showUserWant; // @dynamic showUserWant;
@property(retain, nonatomic) NSString *text; // @dynamic text;
@property(retain, nonatomic) NSString *url; // @dynamic url;
@property(retain, nonatomic) NSString *userWantSign; // @dynamic userWantSign;

@end

