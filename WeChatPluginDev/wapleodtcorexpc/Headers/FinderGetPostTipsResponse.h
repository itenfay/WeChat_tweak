//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, MusicPostTipsDetail, NSData, NSString;

@interface FinderGetPostTipsResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) NSString *coverUrl; // @dynamic coverUrl;
@property(nonatomic) _Bool isPreloading; // @dynamic isPreloading;
@property(retain, nonatomic) MusicPostTipsDetail *musicPostTipsDetail; // @dynamic musicPostTipsDetail;
@property(retain, nonatomic) NSString *operationName; // @dynamic operationName;
@property(retain, nonatomic) NSData *postTipsStreamByPass; // @dynamic postTipsStreamByPass;
@property(nonatomic) unsigned int scene; // @dynamic scene;
@property(retain, nonatomic) NSString *title; // @dynamic title;
@property(retain, nonatomic) NSString *words; // @dynamic words;

@end

