//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class JumpItem, NSString;

@interface InterceptWin : WXPBGeneratedMessage
{
}

+ (void)initialize;
+ (id)modelCustomPropertyMapperForConfigTag:(id)arg1;

// Remaining properties
@property(nonatomic) unsigned int iconType; // @dynamic iconType;
@property(retain, nonatomic) JumpItem *leftButton; // @dynamic leftButton;
@property(retain, nonatomic) JumpItem *rightButton; // @dynamic rightButton;
@property(nonatomic) unsigned int showType; // @dynamic showType;
@property(retain, nonatomic) NSString *title; // @dynamic title;
@property(nonatomic) unsigned int winType; // @dynamic winType;
@property(retain, nonatomic) NSString *wording; // @dynamic wording;

@end

