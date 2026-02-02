//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, FinderBaseRequest, NSMutableArray, NSString;

@interface FinderModFeedRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSString *coverUrl; // @dynamic coverUrl;
@property(retain, nonatomic) NSMutableArray *coverUrlWord; // @dynamic coverUrlWord;
@property(retain, nonatomic) NSString *description; // @dynamic description;
@property(retain, nonatomic) FinderBaseRequest *finderBasereq; // @dynamic finderBasereq;
@property(retain, nonatomic) NSString *fullCoverUrl; // @dynamic fullCoverUrl;
@property(nonatomic) unsigned long long objectId; // @dynamic objectId;
@property(retain, nonatomic) NSString *posterUsername; // @dynamic posterUsername;
@property(nonatomic) unsigned int scene; // @dynamic scene;
@property(retain, nonatomic) NSMutableArray *shortTitle; // @dynamic shortTitle;

@end

