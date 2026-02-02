//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class FinderMentionContact, FinderObject;

@interface NewLifeOpenLikeListReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) FinderObject *object; // @dynamic object;
@property(retain, nonatomic) FinderMentionContact *referredLikeContact; // @dynamic referredLikeContact;
@property(nonatomic) unsigned long long referredLikeId; // @dynamic referredLikeId;
@property(nonatomic) unsigned int scene; // @dynamic scene;

@end

