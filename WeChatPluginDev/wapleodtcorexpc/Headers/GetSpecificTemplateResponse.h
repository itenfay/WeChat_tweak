//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, ShortUrlBindingTemplates, VideoTemplate;

@interface GetSpecificTemplateResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(nonatomic) unsigned int maxAge; // @dynamic maxAge;
@property(retain, nonatomic) ShortUrlBindingTemplates *shortUrlTmpl; // @dynamic shortUrlTmpl;
@property(retain, nonatomic) VideoTemplate *tpl; // @dynamic tpl;

@end

