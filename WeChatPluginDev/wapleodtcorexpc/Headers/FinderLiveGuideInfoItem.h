//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString;

@interface FinderLiveGuideInfoItem : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *guideText; // @dynamic guideText;
@property(retain, nonatomic) NSString *guideTitle; // @dynamic guideTitle;
@property(nonatomic) unsigned int guideType; // @dynamic guideType;
@property(nonatomic) unsigned int limitation; // @dynamic limitation;
@property(retain, nonatomic) NSString *msgId; // @dynamic msgId;

@end

