//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSString;

@interface CheckMusicRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *appId; // @dynamic appId;
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSString *coverImg; // @dynamic coverImg;
@property(retain, nonatomic) NSString *coverImgHd; // @dynamic coverImgHd;
@property(retain, nonatomic) NSString *dataUrl; // @dynamic dataUrl;
@property(retain, nonatomic) NSString *extra; // @dynamic extra;
@property(retain, nonatomic) NSString *lowBandUrl; // @dynamic lowBandUrl;
@property(retain, nonatomic) NSString *musicId; // @dynamic musicId;
@property(retain, nonatomic) NSString *requestId; // @dynamic requestId;
@property(nonatomic) unsigned int scene; // @dynamic scene;
@property(retain, nonatomic) NSString *singer; // @dynamic singer;
@property(retain, nonatomic) NSString *title; // @dynamic title;
@property(retain, nonatomic) NSString *webUrl; // @dynamic webUrl;

@end

