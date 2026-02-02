//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class FeedShortInfo, FinderObject;

@interface CollectionFeedInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int isShortInfo; // @dynamic isShortInfo;
@property(retain, nonatomic) FinderObject *object; // @dynamic object;
@property(retain, nonatomic) FeedShortInfo *shortInfo; // @dynamic shortInfo;

@end

