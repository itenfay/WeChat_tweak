//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class FinderMention_FinderMentionThankInfo_RedPackageInfo;

@interface FinderMention_FinderMentionThankInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;
+ (unsigned long long)columnTypeForWCDB;
+ (id)unarchiveWithWCTValue:(id)arg1;
- (id)archivedWCTValue;

// Remaining properties
@property(nonatomic) unsigned int hasRedpackage; // @dynamic hasRedpackage;
@property(nonatomic) unsigned int interactionType; // @dynamic interactionType;
@property(nonatomic) unsigned int isFlowerLikeIcon; // @dynamic isFlowerLikeIcon;
@property(nonatomic) unsigned int isHotLikeIcon; // @dynamic isHotLikeIcon;
@property(retain, nonatomic) FinderMention_FinderMentionThankInfo_RedPackageInfo *redpackageInfo; // @dynamic redpackageInfo;
@property(nonatomic) unsigned int thankIconType; // @dynamic thankIconType;

@end

