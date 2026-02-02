//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, NSMutableArray, NSString, PRRespNode;

@interface PRConfigResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) NSString *baseid; // @dynamic baseid;
@property(retain, nonatomic) NSString *pid; // @dynamic pid;
@property(retain, nonatomic) PRRespNode *pr; // @dynamic pr;
@property(nonatomic) unsigned int prerrcode; // @dynamic prerrcode;
@property(retain, nonatomic) NSMutableArray *resplist; // @dynamic resplist;
@property(retain, nonatomic) NSString *type; // @dynamic type;

@end

