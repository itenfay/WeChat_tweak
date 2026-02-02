//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@interface FinderMention_LikeContactInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;
+ (unsigned long long)columnType;
+ (id)unarchiveWithWCTValue:(id)arg1;
- (id)archivedWCTValue;

// Remaining properties
@property(nonatomic) unsigned int followMyFirstLike; // @dynamic followMyFirstLike;
@property(nonatomic) unsigned long long likeId; // @dynamic likeId;
@property(nonatomic) unsigned int likeType; // @dynamic likeType;

@end

