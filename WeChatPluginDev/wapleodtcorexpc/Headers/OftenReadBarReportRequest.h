//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSMutableArray;

@interface OftenReadBarReportRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSMutableArray *clickList; // @dynamic clickList;
@property(nonatomic) unsigned int reportType; // @dynamic reportType;
@property(nonatomic) unsigned int sessionid; // @dynamic sessionid;
@property(retain, nonatomic) NSMutableArray *showList; // @dynamic showList;
@property(nonatomic) unsigned int source; // @dynamic source;

@end

