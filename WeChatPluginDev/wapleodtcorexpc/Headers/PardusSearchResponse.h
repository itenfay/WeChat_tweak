//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, NSMutableArray, NSString, SugResult;

@interface PardusSearchResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) NSMutableArray *businessResults; // @dynamic businessResults;
@property(retain, nonatomic) NSString *guideText; // @dynamic guideText;
@property(retain, nonatomic) NSString *jsonResult; // @dynamic jsonResult;
@property(retain, nonatomic) NSString *moreText; // @dynamic moreText;
@property(retain, nonatomic) NSString *pardusInfo; // @dynamic pardusInfo;
@property(retain, nonatomic) SugResult *relatedResult; // @dynamic relatedResult;
@property(retain, nonatomic) NSString *searchId; // @dynamic searchId;
@property(retain, nonatomic) SugResult *sugResult; // @dynamic sugResult;

@end

