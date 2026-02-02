//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class GCChatRoomServer;

@interface GCMessageRequestServer : NSObject
{
    GCChatRoomServer *_chatRoomServer;
    long long _channelId;
    long long _requestSeq;
}

- (void).cxx_destruct;
@property(nonatomic) long long requestSeq; // @synthesize requestSeq=_requestSeq;
@property(nonatomic) long long channelId; // @synthesize channelId=_channelId;
@property(retain, nonatomic) GCChatRoomServer *chatRoomServer; // @synthesize chatRoomServer=_chatRoomServer;
- (void)clearMinAndMaxMsgSeq;
- (void)getChatRoomMsg:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)loadMessageGtSeq:(unsigned long long)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)loadMessageLtSeq:(unsigned long long)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)invalidatePreviousRequest;
- (id)initWithChatRoomServer:(id)arg1;

@end

