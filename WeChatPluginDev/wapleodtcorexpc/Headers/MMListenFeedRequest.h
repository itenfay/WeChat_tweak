//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, MMListenFinderInfo, MMListenItem, MMListenMpInfo, MMListenMusicInfo, NSData, NSMutableArray, NSString;

@interface MMListenFeedRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(nonatomic) _Bool card; // @dynamic card;
@property(nonatomic) int cardCount; // @dynamic cardCount;
@property(retain, nonatomic) NSString *categoryId; // @dynamic categoryId;
@property(retain, nonatomic) MMListenFinderInfo *finderCtx; // @dynamic finderCtx;
@property(nonatomic) int itemCount; // @dynamic itemCount;
@property(retain, nonatomic) MMListenItem *listenCtx; // @dynamic listenCtx;
@property(retain, nonatomic) NSString *listenId; // @dynamic listenId;
@property(retain, nonatomic) MMListenMpInfo *mpCtx; // @dynamic mpCtx;
@property(retain, nonatomic) MMListenMusicInfo *musicCtx; // @dynamic musicCtx;
@property(retain, nonatomic) NSData *recommendBuffer; // @dynamic recommendBuffer;
@property(nonatomic) int scene; // @dynamic scene;
@property(retain, nonatomic) NSData *sessionBuffer; // @dynamic sessionBuffer;
@property(retain, nonatomic) NSString *sessionId; // @dynamic sessionId;
@property(nonatomic) int subType; // @dynamic subType;
@property(nonatomic) _Bool switchCategory; // @dynamic switchCategory;
@property(retain, nonatomic) NSString *switchText; // @dynamic switchText;
@property(retain, nonatomic) NSString *tabSessionId; // @dynamic tabSessionId;
@property(retain, nonatomic) NSMutableArray *topListenIds; // @dynamic topListenIds;
@property(nonatomic) int type; // @dynamic type;

@end

