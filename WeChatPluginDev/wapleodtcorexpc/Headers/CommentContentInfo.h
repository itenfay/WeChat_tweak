//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class CommentRefFeedInfo, CommentRefProductInfo, NSMutableArray;

@interface CommentContentInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;
+ (unsigned long long)columnTypeForWCDB;
+ (id)unarchiveWithWCTValue:(id)arg1;
- (id)archivedWCTValue;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *adscardInfos; // @dynamic adscardInfos;
@property(retain, nonatomic) NSMutableArray *emoticonInfos; // @dynamic emoticonInfos;
@property(retain, nonatomic) NSMutableArray *imageInfos; // @dynamic imageInfos;
@property(retain, nonatomic) CommentRefFeedInfo *refFeedInfo; // @dynamic refFeedInfo;
@property(retain, nonatomic) CommentRefProductInfo *refProductInfo; // @dynamic refProductInfo;
@property(retain, nonatomic) NSMutableArray *videoInfos; // @dynamic videoInfos;

@end

