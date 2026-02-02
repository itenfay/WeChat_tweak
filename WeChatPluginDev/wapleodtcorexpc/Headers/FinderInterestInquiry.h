//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class FinderInterestInquiry_InquiryWording, NSString;

@interface FinderInterestInquiry : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int delayShowTs; // @dynamic delayShowTs;
@property(retain, nonatomic) NSString *fromSessionId; // @dynamic fromSessionId;
@property(nonatomic) unsigned int needPrefetch; // @dynamic needPrefetch;
@property(nonatomic) unsigned int needPreload; // @dynamic needPreload;
@property(nonatomic) unsigned int showDuration; // @dynamic showDuration;
@property(nonatomic) unsigned int showInterestInquiry; // @dynamic showInterestInquiry;
@property(retain, nonatomic) FinderInterestInquiry_InquiryWording *wording; // @dynamic wording;

@end

