//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class GameLifeConversation, NSString;

@interface GameLifeConversationInfo : NSObject
{
    unsigned int _msgType;
    GameLifeConversation *_conversation;
    NSString *_externInfo;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int msgType; // @synthesize msgType=_msgType;
@property(retain, nonatomic) NSString *externInfo; // @synthesize externInfo=_externInfo;
@property(retain, nonatomic) GameLifeConversation *conversation; // @synthesize conversation=_conversation;

@end

