//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//


@class BaseRequest, NSString;

@class WXPBGeneratedMessage;

@interface CgiGetShortTermQrcodeReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSString *desc; // @dynamic desc;
@property(retain, nonatomic) NSString *fee; // @dynamic fee;
@property(retain, nonatomic) NSString *feeType; // @dynamic feeType;
@property(retain, nonatomic) NSString *payerDescPlaceholder; // @dynamic payerDescPlaceholder;
@property(nonatomic) _Bool payerDescRequired; // @dynamic payerDescRequired;
@property(nonatomic) int refreshScene; // @dynamic refreshScene;

@end

