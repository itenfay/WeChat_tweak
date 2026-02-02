//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, NSString;

@interface BizAiScanImageScenePreviewResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) NSString *chatImageSearching; // @dynamic chatImageSearching;
@property(nonatomic) unsigned int seqNum; // @dynamic seqNum;
@property(nonatomic) unsigned long long sessionid64; // @dynamic sessionid64;

@end

