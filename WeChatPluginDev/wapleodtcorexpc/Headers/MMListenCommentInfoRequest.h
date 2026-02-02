//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//


@class BaseRequest, MMListenMusicBaseRequest, NSMutableArray;

@class WXPBGeneratedMessage;

@interface MMListenCommentInfoRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSMutableArray *categoryIds; // @dynamic categoryIds;
@property(nonatomic) _Bool isPreload; // @dynamic isPreload;
@property(retain, nonatomic) NSMutableArray *listenIds; // @dynamic listenIds;
@property(retain, nonatomic) MMListenMusicBaseRequest *musicBaseRequest; // @dynamic musicBaseRequest;
@property(nonatomic) int scene; // @dynamic scene;

@end

