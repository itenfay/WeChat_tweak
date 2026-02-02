//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class FinderStreamDivider_BubbleInfo, FinderStreamJumpInfo, NSString;

@interface FinderStreamDivider : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) FinderStreamDivider_BubbleInfo *bubbleInfo; // @dynamic bubbleInfo;
@property(retain, nonatomic) NSString *iconUrl; // @dynamic iconUrl;
@property(nonatomic) unsigned int insertBeforeIndex; // @dynamic insertBeforeIndex;
@property(retain, nonatomic) FinderStreamJumpInfo *jumpInfo; // @dynamic jumpInfo;
@property(nonatomic) unsigned long long layoutId; // @dynamic layoutId;
@property(nonatomic) unsigned int type; // @dynamic type;
@property(nonatomic) unsigned int uiStyle; // @dynamic uiStyle;
@property(retain, nonatomic) NSString *wording; // @dynamic wording;

@end

