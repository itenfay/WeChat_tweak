//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, FinderBaseRequest, NSString;

@interface FinderCoursePurchaseRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(nonatomic) unsigned int commentScene; // @dynamic commentScene;
@property(nonatomic) unsigned long long courseId; // @dynamic courseId;
@property(retain, nonatomic) FinderBaseRequest *finderBasereq; // @dynamic finderBasereq;
@property(retain, nonatomic) NSString *posterFinderUsername; // @dynamic posterFinderUsername;
@property(retain, nonatomic) NSString *sourceFeedId; // @dynamic sourceFeedId;

@end

