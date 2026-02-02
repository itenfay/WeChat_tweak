//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSMutableArray, NSString;

@interface CgiSetRewardQrcodeReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *amtList; // @dynamic amtList;
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSString *desc; // @dynamic desc;
@property(nonatomic) _Bool firstOpenFlag; // @dynamic firstOpenFlag;
@property(nonatomic) _Bool modifyDefaultAmt; // @dynamic modifyDefaultAmt;
@property(retain, nonatomic) NSString *photoAeskey; // @dynamic photoAeskey;
@property(retain, nonatomic) NSString *photoUrl; // @dynamic photoUrl;

@end

