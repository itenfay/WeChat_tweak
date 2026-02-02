//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class ContentInfo, NSString;

@interface QuickContentInteractResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) ContentInfo *contentInfo; // @dynamic contentInfo;
@property(nonatomic) int error; // @dynamic error;
@property(retain, nonatomic) NSString *errorMsg; // @dynamic errorMsg;

@end

