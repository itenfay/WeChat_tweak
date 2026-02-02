//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, NSMutableArray, NSString;

@interface AAQueryListRes : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) NSString *h5RecordUrl; // @dynamic h5RecordUrl;
@property(retain, nonatomic) NSString *lastBillId; // @dynamic lastBillId;
@property(nonatomic) int lastBillType; // @dynamic lastBillType;
@property(nonatomic) unsigned int lastCreateTime; // @dynamic lastCreateTime;
@property(retain, nonatomic) NSString *lastTransId; // @dynamic lastTransId;
@property(retain, nonatomic) NSMutableArray *record; // @dynamic record;
@property(nonatomic) unsigned int retcode; // @dynamic retcode;
@property(retain, nonatomic) NSString *retmsg; // @dynamic retmsg;

@end

