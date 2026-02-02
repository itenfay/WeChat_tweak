//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, NSMutableArray;

@interface KidsWatchLoginConfirmGetResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(nonatomic) unsigned int enableRegButton; // @dynamic enableRegButton;
@property(retain, nonatomic) NSMutableArray *kidsList; // @dynamic kidsList;
@property(nonatomic) _Bool needShowSyncMsgButton; // @dynamic needShowSyncMsgButton;
@property(nonatomic) unsigned int reqSessionLimit; // @dynamic reqSessionLimit;

@end

