//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class FinderJumpInfo, NSString;

@interface FinderCommentSectionPromptInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int actionType; // @dynamic actionType;
@property(retain, nonatomic) NSString *enableCommentAffirmText; // @dynamic enableCommentAffirmText;
@property(retain, nonatomic) FinderJumpInfo *jumpInfo; // @dynamic jumpInfo;
@property(retain, nonatomic) NSString *text; // @dynamic text;

@end

