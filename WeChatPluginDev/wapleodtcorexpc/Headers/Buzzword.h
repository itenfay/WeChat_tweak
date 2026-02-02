//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString;

@interface Buzzword : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned long long buzzwordId; // @dynamic buzzwordId;
@property(retain, nonatomic) NSString *content; // @dynamic content;
@property(nonatomic) unsigned long long likeCount; // @dynamic likeCount;
@property(nonatomic) unsigned int liked; // @dynamic liked;

@end

