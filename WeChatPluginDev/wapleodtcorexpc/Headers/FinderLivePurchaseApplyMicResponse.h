//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, FinderLiveErrorPage, NSData, NSString;

@interface FinderLivePurchaseApplyMicResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) FinderLiveErrorPage *errPage; // @dynamic errPage;
@property(retain, nonatomic) NSData *prepareBuffer; // @dynamic prepareBuffer;
@property(retain, nonatomic) NSString *realnameUrl; // @dynamic realnameUrl;
@property(retain, nonatomic) NSString *sessionId; // @dynamic sessionId;

@end

