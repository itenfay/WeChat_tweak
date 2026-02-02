//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class FinderLocation, FinderObjectEventDesc, NSMutableArray, NSString;

@interface FinderPostGuideInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *bgColorBottomHex; // @dynamic bgColorBottomHex;
@property(retain, nonatomic) NSString *bgColorTopHex; // @dynamic bgColorTopHex;
@property(retain, nonatomic) FinderObjectEventDesc *event; // @dynamic event;
@property(retain, nonatomic) NSMutableArray *hashTagList; // @dynamic hashTagList;
@property(retain, nonatomic) FinderLocation *location; // @dynamic location;
@property(retain, nonatomic) NSMutableArray *postGuideTopicTags; // @dynamic postGuideTopicTags;

@end

