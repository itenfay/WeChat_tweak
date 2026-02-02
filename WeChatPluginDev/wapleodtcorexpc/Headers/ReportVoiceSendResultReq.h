//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSMutableArray, SKBuiltinString_t;

@interface ReportVoiceSendResultReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(nonatomic) int scene; // @dynamic scene;
@property(retain, nonatomic) SKBuiltinString_t *vadVersion; // @dynamic vadVersion;
@property(nonatomic) unsigned int voiceIdCount; // @dynamic voiceIdCount;
@property(retain, nonatomic) NSMutableArray *voiceIdList; // @dynamic voiceIdList;
@property(retain, nonatomic) SKBuiltinString_t *voiceResult; // @dynamic voiceResult;

@end

