//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class AlertPrivacyInfo, BaseResponse, NSString, UserPlateInfo, UserPrivacyProtectInfo;

@interface GetUserPlateInfoResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *authSubDesc; // @dynamic authSubDesc;
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) NSString *createSubDesc; // @dynamic createSubDesc;
@property(retain, nonatomic) UserPlateInfo *plateInfo; // @dynamic plateInfo;
@property(retain, nonatomic) AlertPrivacyInfo *privacyInfo; // @dynamic privacyInfo;
@property(retain, nonatomic) UserPrivacyProtectInfo *privacyProtectInfo; // @dynamic privacyProtectInfo;

@end

