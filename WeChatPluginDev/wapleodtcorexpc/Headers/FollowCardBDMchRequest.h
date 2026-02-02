//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSString;

@interface FollowCardBDMchRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSString *followParam; // @dynamic followParam;
@property(nonatomic) unsigned int posStateAfter; // @dynamic posStateAfter;
@property(nonatomic) unsigned int posStateBefore; // @dynamic posStateBefore;

@end

