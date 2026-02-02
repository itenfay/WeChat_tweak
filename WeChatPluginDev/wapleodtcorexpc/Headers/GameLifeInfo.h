//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class GameLifeInfoChatRoom;

@interface GameLifeInfo : NSObject
{
    _Bool _replaceNotice;
    GameLifeInfoChatRoom *_chatRoomInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) GameLifeInfoChatRoom *chatRoomInfo; // @synthesize chatRoomInfo=_chatRoomInfo;
@property(nonatomic) _Bool replaceNotice; // @synthesize replaceNotice=_replaceNotice;

@end

