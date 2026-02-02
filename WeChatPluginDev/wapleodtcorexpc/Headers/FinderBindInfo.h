//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class FinderBizInfo, FinderQQMusicInfo, FinderSticker, FinderWecomInfo;

@interface FinderBindInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;
+ (unsigned long long)columnTypeForWCDB;
+ (id)unarchiveWithWCTValue:(id)arg1;
- (id)archivedWCTValue;

// Remaining properties
@property(nonatomic) unsigned int bindType; // @dynamic bindType;
@property(retain, nonatomic) FinderBizInfo *bizInfo; // @dynamic bizInfo;
@property(retain, nonatomic) FinderBizInfo *profileBizInfo; // @dynamic profileBizInfo;
@property(retain, nonatomic) FinderQQMusicInfo *qqmusicInfo; // @dynamic qqmusicInfo;
@property(retain, nonatomic) FinderSticker *stickerInfo; // @dynamic stickerInfo;
@property(retain, nonatomic) FinderWecomInfo *wecomInfo; // @dynamic wecomInfo;

@end

