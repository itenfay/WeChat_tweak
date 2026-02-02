//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, WeAppSearchWordingTitle;

@interface WeAppSearchWordingResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) WeAppSearchWordingTitle *title; // @dynamic title;
@property(retain, nonatomic) WeAppSearchWordingTitle *titleDesktop; // @dynamic titleDesktop;
@property(retain, nonatomic) WeAppSearchWordingTitle *titleDesktopMore; // @dynamic titleDesktopMore;

@end

