//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSString;

@interface DeleteBizReadRecordReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int appmsgId; // @dynamic appmsgId;
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSString *bizUin; // @dynamic bizUin;
@property(nonatomic) unsigned int delType; // @dynamic delType;
@property(nonatomic) unsigned int itemId; // @dynamic itemId;
@property(nonatomic) unsigned int readTime; // @dynamic readTime;

@end

