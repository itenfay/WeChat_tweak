//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class FinderLiveContact, NSString;

@interface NewAnchorPkInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned long long anchorPkExtFlag; // @dynamic anchorPkExtFlag;
@property(retain, nonatomic) FinderLiveContact *contact; // @dynamic contact;
@property(nonatomic) unsigned int sdkLiveId; // @dynamic sdkLiveId;
@property(retain, nonatomic) NSString *sdkUserId; // @dynamic sdkUserId;
@property(retain, nonatomic) NSString *sessionId; // @dynamic sessionId;

@end

