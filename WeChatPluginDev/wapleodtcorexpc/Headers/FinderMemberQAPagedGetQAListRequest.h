//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, FinderBaseRequest, NSString;

@interface FinderMemberQAPagedGetQAListRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) FinderBaseRequest *finderBasereq; // @dynamic finderBasereq;
@property(nonatomic) int getType; // @dynamic getType;
@property(retain, nonatomic) NSString *lastBuffer; // @dynamic lastBuffer;
@property(retain, nonatomic) NSString *msProviderUsername; // @dynamic msProviderUsername;
@property(retain, nonatomic) NSString *myUsername; // @dynamic myUsername;
@property(nonatomic) unsigned long long qaFeedId; // @dynamic qaFeedId;

@end

