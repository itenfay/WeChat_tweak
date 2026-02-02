//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, MMListenAudioBaseRequest, MMListenFormatDesc, MMListenItem, NSString;

@interface MMListenAddToPlaylistRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) MMListenAudioBaseRequest *audioBaseRequest; // @dynamic audioBaseRequest;
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSString *categoryId; // @dynamic categoryId;
@property(retain, nonatomic) MMListenFormatDesc *fromDesc; // @dynamic fromDesc;
@property(nonatomic) _Bool isCancel; // @dynamic isCancel;
@property(retain, nonatomic) MMListenItem *listenCtx; // @dynamic listenCtx;
@property(retain, nonatomic) NSString *listenId; // @dynamic listenId;
@property(nonatomic) int opType; // @dynamic opType;
@property(nonatomic) unsigned long long scene; // @dynamic scene;

@end

