//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, BypSyncKeyBuff, NSMutableArray;

@interface BypSyncResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) NSMutableArray *respContinueFlag; // @dynamic respContinueFlag;
@property(retain, nonatomic) BypSyncKeyBuff *respSyncKeyBuff; // @dynamic respSyncKeyBuff;
@property(retain, nonatomic) NSMutableArray *syncItemList; // @dynamic syncItemList;

@end

