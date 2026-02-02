//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, MMListenAudioBaseResponse, MMListenMusicBaseResponse, NSMutableArray;

@interface MMListenCategoryFeedResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) MMListenAudioBaseResponse *audioBaseResponse; // @dynamic audioBaseResponse;
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) NSMutableArray *lines; // @dynamic lines;
@property(retain, nonatomic) MMListenMusicBaseResponse *musicBaseResponse; // @dynamic musicBaseResponse;

@end

