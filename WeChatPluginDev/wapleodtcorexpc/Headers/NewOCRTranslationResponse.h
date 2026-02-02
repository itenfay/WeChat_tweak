//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, NSData, NSMutableArray, NSString;

@interface NewOCRTranslationResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) float angle; // @dynamic angle;
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) NSString *brandWording; // @dynamic brandWording;
@property(retain, nonatomic) NSData *ctx; // @dynamic ctx;
@property(nonatomic) unsigned int endFlag; // @dynamic endFlag;
@property(retain, nonatomic) NSString *fromLanguage; // @dynamic fromLanguage;
@property(retain, nonatomic) NSMutableArray *info; // @dynamic info;
@property(nonatomic) _Bool newOcrmt; // @dynamic newOcrmt;
@property(nonatomic) float resAngle; // @dynamic resAngle;
@property(retain, nonatomic) NSData *resBrandWording; // @dynamic resBrandWording;
@property(nonatomic) unsigned int resEndFlag; // @dynamic resEndFlag;
@property(retain, nonatomic) NSData *resFromLang; // @dynamic resFromLang;
@property(retain, nonatomic) NSData *resImgAeskey; // @dynamic resImgAeskey;
@property(retain, nonatomic) NSData *resImgFileid; // @dynamic resImgFileid;
@property(nonatomic) unsigned int resImgSize; // @dynamic resImgSize;
@property(retain, nonatomic) NSData *resToLang; // @dynamic resToLang;
@property(retain, nonatomic) NSString *toLanguage; // @dynamic toLanguage;

@end

