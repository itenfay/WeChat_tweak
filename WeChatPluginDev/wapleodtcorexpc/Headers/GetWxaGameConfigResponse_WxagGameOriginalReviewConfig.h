//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSMutableArray, NSString;

@interface GetWxaGameConfigResponse_WxagGameOriginalReviewConfig : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int minPlayingSeconds; // @dynamic minPlayingSeconds;
@property(retain, nonatomic) NSMutableArray *optionList; // @dynamic optionList;
@property(retain, nonatomic) NSString *questionDesc; // @dynamic questionDesc;
@property(retain, nonatomic) NSString *questionId; // @dynamic questionId;
@property(retain, nonatomic) NSString *thanksWording; // @dynamic thanksWording;
@property(retain, nonatomic) NSString *title; // @dynamic title;

@end

