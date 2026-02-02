//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class FinderLiveContact, NSString;

@interface FinderLiveMicPkInfoForBoard : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *boardKey; // @dynamic boardKey;
@property(nonatomic) unsigned int boardType; // @dynamic boardType;
@property(retain, nonatomic) FinderLiveContact *micContact; // @dynamic micContact;
@property(retain, nonatomic) NSString *micSdkUserId; // @dynamic micSdkUserId;

@end

