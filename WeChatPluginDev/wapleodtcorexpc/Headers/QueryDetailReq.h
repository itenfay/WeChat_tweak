//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSString;

@interface QueryDetailReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(nonatomic) _Bool enterFromHistoryRecord; // @dynamic enterFromHistoryRecord;
@property(nonatomic) unsigned int historyRecordState; // @dynamic historyRecordState;
@property(retain, nonatomic) NSString *transferBillId; // @dynamic transferBillId;

@end

