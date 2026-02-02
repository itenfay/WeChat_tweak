//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, FinderLiveInfo, FinderLiveReplayMicInfo;

@interface FinderGetReplayLiveInfoResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) FinderLiveInfo *liveInfo; // @dynamic liveInfo;
@property(retain, nonatomic) FinderLiveReplayMicInfo *replayMicInfo; // @dynamic replayMicInfo;

@end

