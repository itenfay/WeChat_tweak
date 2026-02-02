//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString;

@interface FinderMVInfo_ClientDraftInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *draftNonceId; // @dynamic draftNonceId;
@property(nonatomic) unsigned long long draftObjectId; // @dynamic draftObjectId;
@property(nonatomic) unsigned int draftSource; // @dynamic draftSource;
@property(nonatomic) unsigned long long postingClipOffsetMs; // @dynamic postingClipOffsetMs;

@end

