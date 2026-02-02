//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class FinderContact, FinderLiteAppParam, FinderMusicFriendData, NSString;

@interface FinderSingerInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) FinderContact *contact; // @dynamic contact;
@property(nonatomic) unsigned int enableClickAuthor; // @dynamic enableClickAuthor;
@property(retain, nonatomic) FinderMusicFriendData *friendData; // @dynamic friendData;
@property(retain, nonatomic) NSString *h5Url; // @dynamic h5Url;
@property(retain, nonatomic) FinderLiteAppParam *liteAppParam; // @dynamic liteAppParam;

@end

