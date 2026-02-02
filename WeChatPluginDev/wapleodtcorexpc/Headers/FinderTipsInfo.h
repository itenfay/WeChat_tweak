//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString;

@interface FinderTipsInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;
+ (unsigned long long)columnType;
+ (id)unarchiveWithWCTValue:(id)arg1;
- (id)archivedWCTValue;

// Remaining properties
@property(nonatomic) unsigned int isFirstPublishTmplPage; // @dynamic isFirstPublishTmplPage;
@property(nonatomic) unsigned int isFriend; // @dynamic isFriend;
@property(nonatomic) unsigned int isMostFollowTmplPage; // @dynamic isMostFollowTmplPage;
@property(nonatomic) unsigned int needReplaceObjectInfo; // @dynamic needReplaceObjectInfo;
@property(retain, nonatomic) NSString *reviewWording; // @dynamic reviewWording;

@end

