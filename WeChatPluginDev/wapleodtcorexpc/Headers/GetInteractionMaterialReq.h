//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//


@class BaseRequest, NSString;

@class WXPBGeneratedMessage;

@interface GetInteractionMaterialReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSString *keyword; // @dynamic keyword;
@property(nonatomic) int source; // @dynamic source;
@property(retain, nonatomic) NSString *traceId; // @dynamic traceId;
@property(retain, nonatomic) NSString *uxinfo; // @dynamic uxinfo;

@end

