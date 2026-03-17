//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//


@class BaseResponse, NSMutableArray, NSString;

@class WXPBGeneratedMessage;

@interface GetSportDeviceListResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) NSString *dataSourceFaqUrl; // @dynamic dataSourceFaqUrl;
@property(retain, nonatomic) NSMutableArray *deviceList; // @dynamic deviceList;
@property(retain, nonatomic) NSString *watchDataSourceFaqUrl; // @dynamic watchDataSourceFaqUrl;

@end

