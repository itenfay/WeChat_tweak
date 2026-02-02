//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, EntranceReportSwitch, NSData, NSMutableArray, SKBuiltinBuffer_t;

@interface FinderCommonReddotSyncResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) NSMutableArray *cmdList; // @dynamic cmdList;
@property(nonatomic) unsigned int continueFlag; // @dynamic continueFlag;
@property(retain, nonatomic) EntranceReportSwitch *entranceExposeSwitch; // @dynamic entranceExposeSwitch;
@property(retain, nonatomic) SKBuiltinBuffer_t *keyBuf; // @dynamic keyBuf;
@property(retain, nonatomic) NSData *lastBuffer; // @dynamic lastBuffer;

@end

