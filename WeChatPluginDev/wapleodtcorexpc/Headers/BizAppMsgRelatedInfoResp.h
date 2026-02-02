//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, NSMutableArray;

@interface BizAppMsgRelatedInfoResp : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(nonatomic) unsigned int maxUrlCount; // @dynamic maxUrlCount;
@property(nonatomic) unsigned int refreshIntervalSec; // @dynamic refreshIntervalSec;
@property(retain, nonatomic) NSMutableArray *relatedInfo; // @dynamic relatedInfo;

@end

