//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//


@class BaseRequest, GetWxaUsageRecordRequest_LocationInfo, GetWxaUsageRecordRequest_NetworkInfo, NSString;

@class WXPBGeneratedMessage;

@interface GetWxaUsageRecordRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSString *commuseAppExtraData; // @dynamic commuseAppExtraData;
@property(nonatomic) unsigned int condition; // @dynamic condition;
@property(nonatomic) unsigned int historyCount; // @dynamic historyCount;
@property(retain, nonatomic) GetWxaUsageRecordRequest_LocationInfo *locationInfo; // @dynamic locationInfo;
@property(nonatomic) unsigned int maxUpdatetime; // @dynamic maxUpdatetime;
@property(retain, nonatomic) GetWxaUsageRecordRequest_NetworkInfo *networkInfo; // @dynamic networkInfo;
@property(nonatomic) unsigned int reason; // @dynamic reason;

@end

