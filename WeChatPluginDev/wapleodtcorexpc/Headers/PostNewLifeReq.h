//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class FinderJumpInfo, FinderObjectDesc, FinderPostNewLifeInfo, NSMutableArray, NSString;

@interface PostNewLifeReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int enterScene; // @dynamic enterScene;
@property(retain, nonatomic) FinderPostNewLifeInfo *info; // @dynamic info;
@property(retain, nonatomic) FinderJumpInfo *jumpInfo; // @dynamic jumpInfo;
@property(retain, nonatomic) NSMutableArray *localImgPaths; // @dynamic localImgPaths;
@property(retain, nonatomic) FinderObjectDesc *objectDesc; // @dynamic objectDesc;
@property(retain, nonatomic) NSMutableArray *topics; // @dynamic topics;
@property(retain, nonatomic) NSString *username; // @dynamic username;

@end

