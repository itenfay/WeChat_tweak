//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSMutableArray, NSString;

@interface FinderLiveTagInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) FinderLiveTagInfo *chosenSubTag; // @dynamic chosenSubTag;
@property(nonatomic) unsigned int needPoi; // @dynamic needPoi;
@property(nonatomic) unsigned int showPrimaryTag; // @dynamic showPrimaryTag;
@property(retain, nonatomic) NSMutableArray *subTagList; // @dynamic subTagList;
@property(nonatomic) unsigned int tagId; // @dynamic tagId;
@property(retain, nonatomic) NSString *tagName; // @dynamic tagName;

@end

