//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, FinderBaseRequest, NSMutableArray, NSString;

@interface FinderModMentionedRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) FinderBaseRequest *finderBasereq; // @dynamic finderBasereq;
@property(retain, nonatomic) NSString *finderUsername; // @dynamic finderUsername;
@property(retain, nonatomic) NSMutableArray *modmentionedInfo; // @dynamic modmentionedInfo;
@property(retain, nonatomic) NSMutableArray *objectId; // @dynamic objectId;
@property(nonatomic) unsigned int optype; // @dynamic optype;

@end

