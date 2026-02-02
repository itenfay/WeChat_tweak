//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class LbsLocationNew, NSMutableArray, NSString;

@interface SearchWebQueryRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *commReq; // @dynamic commReq;
@property(retain, nonatomic) NSMutableArray *extReqParams; // @dynamic extReqParams;
@property(retain, nonatomic) LbsLocationNew *location; // @dynamic location;
@property(retain, nonatomic) NSString *requestId; // @dynamic requestId;

@end

