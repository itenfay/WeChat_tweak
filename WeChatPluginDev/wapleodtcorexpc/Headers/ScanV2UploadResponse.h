//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, NSMutableArray;

@interface ScanV2UploadResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) NSMutableArray *markResults; // @dynamic markResults;
@property(nonatomic) _Bool needPoi; // @dynamic needPoi;
@property(nonatomic) unsigned int networkLimitedTime; // @dynamic networkLimitedTime;

@end

