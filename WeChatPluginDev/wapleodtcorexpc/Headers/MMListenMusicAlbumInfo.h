//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSMutableArray, NSString;

@interface MMListenMusicAlbumInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *albumCategoryId; // @dynamic albumCategoryId;
@property(retain, nonatomic) NSString *albumDesc; // @dynamic albumDesc;
@property(nonatomic) unsigned long long albumId; // @dynamic albumId;
@property(retain, nonatomic) NSString *albumName; // @dynamic albumName;
@property(retain, nonatomic) NSString *albumPic; // @dynamic albumPic;
@property(retain, nonatomic) NSString *companyName; // @dynamic companyName;
@property(retain, nonatomic) NSString *extH5Url; // @dynamic extH5Url;
@property(nonatomic) unsigned long long feedId; // @dynamic feedId;
@property(retain, nonatomic) NSString *genre; // @dynamic genre;
@property(nonatomic) _Bool isFromWechat; // @dynamic isFromWechat;
@property(nonatomic) _Bool isPlayable; // @dynamic isPlayable;
@property(nonatomic) int isdigitalAlbum; // @dynamic isdigitalAlbum;
@property(retain, nonatomic) NSString *language; // @dynamic language;
@property(nonatomic) unsigned int musicNum; // @dynamic musicNum;
@property(retain, nonatomic) NSString *publicTime; // @dynamic publicTime;
@property(nonatomic) unsigned long long publicTimeS; // @dynamic publicTimeS;
@property(retain, nonatomic) NSMutableArray *singerList; // @dynamic singerList;

@end

