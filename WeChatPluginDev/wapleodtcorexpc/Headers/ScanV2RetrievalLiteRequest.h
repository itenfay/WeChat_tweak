//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, BizAiScanImageLocation, NSMutableArray;

@interface ScanV2RetrievalLiteRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(nonatomic) _Bool isClick; // @dynamic isClick;
@property(retain, nonatomic) BizAiScanImageLocation *location; // @dynamic location;
@property(retain, nonatomic) NSMutableArray *reqKeys; // @dynamic reqKeys;

@end

