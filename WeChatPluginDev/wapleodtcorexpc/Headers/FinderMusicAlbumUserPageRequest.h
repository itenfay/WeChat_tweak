//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, FinderBaseRequest, FinderClientStatus, NSData, NSString;

@interface FinderMusicAlbumUserPageRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int actionType; // @dynamic actionType;
@property(retain, nonatomic) NSData *albumLastBuffer; // @dynamic albumLastBuffer;
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(nonatomic) unsigned int enterType; // @dynamic enterType;
@property(retain, nonatomic) NSData *feedLastBuffer; // @dynamic feedLastBuffer;
@property(retain, nonatomic) FinderBaseRequest *finderBasereq; // @dynamic finderBasereq;
@property(retain, nonatomic) NSString *finderUsername; // @dynamic finderUsername;
@property(retain, nonatomic) NSData *lastBuffer; // @dynamic lastBuffer;
@property(retain, nonatomic) NSData *sectionBuffer; // @dynamic sectionBuffer;
@property(retain, nonatomic) NSData *songlistLastBuffer; // @dynamic songlistLastBuffer;
@property(retain, nonatomic) FinderClientStatus *status; // @dynamic status;
@property(retain, nonatomic) NSString *username; // @dynamic username;

@end

