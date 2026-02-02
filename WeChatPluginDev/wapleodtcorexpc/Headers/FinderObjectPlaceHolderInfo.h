//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class FinderNpsSurveyInfo, FinderObject, NSData, NSString;

@interface FinderObjectPlaceHolderInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;
- (id)playableContentVM;

// Remaining properties
@property(retain, nonatomic) NSString *actionWording; // @dynamic actionWording;
@property(retain, nonatomic) NSString *bypassInfo; // @dynamic bypassInfo;
@property(retain, nonatomic) NSString *continueWording; // @dynamic continueWording;
@property(nonatomic) int errcode; // @dynamic errcode;
@property(nonatomic) unsigned int needRefreshDestTabtype; // @dynamic needRefreshDestTabtype;
@property(retain, nonatomic) FinderNpsSurveyInfo *npsSurveyInfo; // @dynamic npsSurveyInfo;
@property(retain, nonatomic) FinderObject *object; // @dynamic object;
@property(retain, nonatomic) NSData *placeHolderBuffer; // @dynamic placeHolderBuffer;
@property(nonatomic) unsigned int showType; // @dynamic showType;
@property(retain, nonatomic) NSString *showWording; // @dynamic showWording;
@property(nonatomic) unsigned int tabType; // @dynamic tabType;

@end

