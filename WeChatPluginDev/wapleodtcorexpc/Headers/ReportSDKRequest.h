//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSMutableArray, NSString, ReportTime;

@interface ReportSDKRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(nonatomic) unsigned int businessId; // @dynamic businessId;
@property(retain, nonatomic) NSMutableArray *itemDataList; // @dynamic itemDataList;
@property(nonatomic) unsigned int networkType; // @dynamic networkType;
@property(retain, nonatomic) ReportTime *reportTime; // @dynamic reportTime;
@property(nonatomic) unsigned long long userModeFlag; // @dynamic userModeFlag;
@property(retain, nonatomic) NSString *version; // @dynamic version;

@end

