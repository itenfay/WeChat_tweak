//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class ChatroomUserData, NSString;

@interface GCChatVoteModel : NSObject
{
    NSString *_userName;
    ChatroomUserData *_userData;
}

- (void).cxx_destruct;
@property(retain, nonatomic) ChatroomUserData *userData; // @synthesize userData=_userData;
@property(retain, nonatomic) NSString *userName; // @synthesize userName=_userName;

@end

