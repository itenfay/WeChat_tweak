//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//


@class BaseRequest, NSString;

@class WXPBGeneratedMessage;

@interface NewGetDesignerAcctInfoRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSString *designerId; // @dynamic designerId;
@property(nonatomic) unsigned int designerUin; // @dynamic designerUin;
@property(nonatomic) unsigned int reqType; // @dynamic reqType;

@end

