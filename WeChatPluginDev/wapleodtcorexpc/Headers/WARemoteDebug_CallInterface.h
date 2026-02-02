//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSMutableArray, NSString;

@interface WARemoteDebug_CallInterface : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int callId; // @dynamic callId;
@property(retain, nonatomic) NSMutableArray *methodArgList; // @dynamic methodArgList;
@property(retain, nonatomic) NSString *methodName; // @dynamic methodName;
@property(retain, nonatomic) NSString *objName; // @dynamic objName;

@end

