//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class EmotionFinderLinkInfo, EmotionWxAppLinkInfo, NSString;

@interface EmotionLink : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *desc; // @dynamic desc;
@property(retain, nonatomic) EmotionFinderLinkInfo *finder; // @dynamic finder;
@property(retain, nonatomic) NSString *h5; // @dynamic h5;
@property(nonatomic) unsigned int linkType; // @dynamic linkType;
@property(retain, nonatomic) EmotionWxAppLinkInfo *wxApp; // @dynamic wxApp;

@end

