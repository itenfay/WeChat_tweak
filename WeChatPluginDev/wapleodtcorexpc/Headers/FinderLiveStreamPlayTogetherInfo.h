//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class FinderLiveStreamPlayTogetherActiveMsgInfo, FinderLiveStreamPlayTogetherInteractiveTagInfo, FinderLiveStreamPlayTogetherTypeInfo;

@interface FinderLiveStreamPlayTogetherInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) FinderLiveStreamPlayTogetherActiveMsgInfo *activeMsgInfo; // @dynamic activeMsgInfo;
@property(retain, nonatomic) FinderLiveStreamPlayTogetherInteractiveTagInfo *tagInfo; // @dynamic tagInfo;
@property(nonatomic) int type; // @dynamic type;
@property(retain, nonatomic) FinderLiveStreamPlayTogetherTypeInfo *typeInfo; // @dynamic typeInfo;

@end

