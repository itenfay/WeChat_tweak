//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, NSMutableArray, NSString;

@interface GetShowSourceResp : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(nonatomic) unsigned int candelete; // @dynamic candelete;
@property(nonatomic) unsigned int hasmore; // @dynamic hasmore;
@property(retain, nonatomic) NSMutableArray *illegalMaterialIds; // @dynamic illegalMaterialIds;
@property(retain, nonatomic) NSString *illegalMsg; // @dynamic illegalMsg;
@property(nonatomic) unsigned int isShowExpiredEntry; // @dynamic isShowExpiredEntry;
@property(nonatomic) unsigned long long lastOptainTime; // @dynamic lastOptainTime;
@property(retain, nonatomic) NSString *maxInvalidWording; // @dynamic maxInvalidWording;
@property(retain, nonatomic) NSString *pagedata; // @dynamic pagedata;
@property(nonatomic) unsigned int retcode; // @dynamic retcode;
@property(retain, nonatomic) NSString *retmsg; // @dynamic retmsg;
@property(retain, nonatomic) NSMutableArray *sourcelist; // @dynamic sourcelist;

@end

