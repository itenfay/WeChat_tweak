//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, ReceiveChatroomMsgResponse;

@interface GCRoomMessageResponse : NSObject
{
    _Bool _isFromCache;
    NSArray *_messageArray;
    ReceiveChatroomMsgResponse *_roomResponse;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isFromCache; // @synthesize isFromCache=_isFromCache;
@property(retain, nonatomic) ReceiveChatroomMsgResponse *roomResponse; // @synthesize roomResponse=_roomResponse;
@property(retain, nonatomic) NSArray *messageArray; // @synthesize messageArray=_messageArray;

@end

