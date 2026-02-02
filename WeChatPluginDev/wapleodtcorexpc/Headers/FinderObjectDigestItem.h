//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString;

@interface FinderObjectDigestItem : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned long long digestId; // @dynamic digestId;
@property(nonatomic) unsigned long long likeCount; // @dynamic likeCount;
@property(nonatomic) unsigned int liked; // @dynamic liked;
@property(retain, nonatomic) NSString *wording; // @dynamic wording;

@end

