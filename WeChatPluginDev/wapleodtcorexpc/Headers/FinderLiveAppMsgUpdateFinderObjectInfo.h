//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class FinderLiveAppMsgUpdateFinderObjectInfo_LiveCoverImage, NSMutableArray, NSString;

@interface FinderLiveAppMsgUpdateFinderObjectInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) FinderLiveAppMsgUpdateFinderObjectInfo_LiveCoverImage *coverImg; // @dynamic coverImg;
@property(retain, nonatomic) NSString *coverImgUrlToken; // @dynamic coverImgUrlToken;
@property(retain, nonatomic) NSString *description; // @dynamic description;
@property(retain, nonatomic) NSString *descriptionExtend; // @dynamic descriptionExtend;
@property(retain, nonatomic) NSMutableArray *liveCoverImgs; // @dynamic liveCoverImgs;
@property(nonatomic) int opFlag; // @dynamic opFlag;

@end

