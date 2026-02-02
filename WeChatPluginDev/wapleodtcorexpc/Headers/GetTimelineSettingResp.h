//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse;

@interface GetTimelineSettingResp : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int appmsgReadRecordSetting; // @dynamic appmsgReadRecordSetting;
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(nonatomic) unsigned int creationCenterNotify; // @dynamic creationCenterNotify;
@property(nonatomic) unsigned int finderRecommendSetting; // @dynamic finderRecommendSetting;
@property(nonatomic) _Bool personalizedRecommendSetting; // @dynamic personalizedRecommendSetting;
@property(nonatomic) _Bool showUserHeadForPay; // @dynamic showUserHeadForPay;
@property(nonatomic) unsigned int useruin; // @dynamic useruin;

@end

