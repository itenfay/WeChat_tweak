//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest;

@interface SetTimelineSettingReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int appmsgReadRecordSetting; // @dynamic appmsgReadRecordSetting;
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(nonatomic) unsigned int creationCenterNotify; // @dynamic creationCenterNotify;
@property(nonatomic) unsigned int finderRecommendSetting; // @dynamic finderRecommendSetting;
@property(nonatomic) _Bool personalizedRecommendSetting; // @dynamic personalizedRecommendSetting;
@property(nonatomic) _Bool showUserHeadForPay; // @dynamic showUserHeadForPay;

@end

