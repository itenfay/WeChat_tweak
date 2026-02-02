//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, FinderBaseRequest, NSMutableArray, NSString;

@interface FinderAdFeedbackRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(nonatomic) unsigned int businessType; // @dynamic businessType;
@property(retain, nonatomic) FinderBaseRequest *finderBasereq; // @dynamic finderBasereq;
@property(retain, nonatomic) NSMutableArray *reasonIdList; // @dynamic reasonIdList;
@property(retain, nonatomic) NSString *reportBypData; // @dynamic reportBypData;
@property(retain, nonatomic) NSString *reportData; // @dynamic reportData;
@property(nonatomic) unsigned int type; // @dynamic type;

@end

