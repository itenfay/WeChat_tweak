//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//


@class BaseRequest, NSMutableArray;

@class WXPBGeneratedMessage;

@interface GetAppSettingRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int appCount; // @dynamic appCount;
@property(retain, nonatomic) NSMutableArray *appSettingReqList; // @dynamic appSettingReqList;
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;

@end

