//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, ExptAppDeviceType, NSMutableArray;

@interface ReportExptAppInfoRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) ExptAppDeviceType *exptAppDeviceType; // @dynamic exptAppDeviceType;
@property(nonatomic) unsigned long long opBeginMs; // @dynamic opBeginMs;
@property(nonatomic) unsigned long long opEndMs; // @dynamic opEndMs;
@property(retain, nonatomic) NSMutableArray *reportItems; // @dynamic reportItems;

@end

