//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSString;

@interface SWMidasEvent : NSObject
{
    MISSING_TYPE *id;
    MISSING_TYPE *seq;
    MISSING_TYPE *createdAt;
    MISSING_TYPE *format;
    MISSING_TYPE *openID;
    MISSING_TYPE *offerID;
    MISSING_TYPE *platform;
    MISSING_TYPE *sessionID;
    MISSING_TYPE *sessionType;
    MISSING_TYPE *processUUID;
    MISSING_TYPE *deviceGUID;
    MISSING_TYPE *deviceModel;
    MISSING_TYPE *deviceSystemVersion;
    MISSING_TYPE *deviceType;
    MISSING_TYPE *action;
    MISSING_TYPE *appleProductID;
    MISSING_TYPE *displayPrice;
    MISSING_TYPE *price;
    MISSING_TYPE *currency;
    MISSING_TYPE *quantity;
    MISSING_TYPE *billID;
    MISSING_TYPE *billUUID;
    MISSING_TYPE *resultInfo;
    MISSING_TYPE *metaTrackEventID;
    MISSING_TYPE *environment;
    MISSING_TYPE *error;
}

- (void).cxx_destruct;
- (id)init;
@property(nonatomic, readonly) NSString *description;
@property(nonatomic, readonly) NSString *resultInfoString;
@property(nonatomic, readonly) NSString *errorString;
@property(nonatomic, readonly) NSString *actionString;
@property(nonatomic, readonly) NSString *formatString;
@property(nonatomic, readonly) long long environment; // @synthesize environment;
@property(nonatomic, copy) NSString *metaTrackEventID;
@property(nonatomic, readonly) NSString *billUUID;
@property(nonatomic, readonly) NSString *billID;
@property(nonatomic, readonly) NSString *quantity;
@property(nonatomic, readonly) NSString *currency;
@property(nonatomic, readonly) NSString *price;
@property(nonatomic, readonly) NSString *displayPrice;
@property(nonatomic, readonly) NSString *appleProductID;
@property(nonatomic, readonly) NSString *deviceType;
@property(nonatomic, readonly) NSString *deviceSystemVersion;
@property(nonatomic, readonly) NSString *deviceModel;
@property(nonatomic, readonly) NSString *deviceGUID;
@property(nonatomic, readonly) NSString *processUUID;
@property(nonatomic, readonly) NSString *sessionType;
@property(nonatomic, readonly) NSString *sessionID;
@property(nonatomic, readonly) NSString *platform;
@property(nonatomic, readonly) NSString *offerID;
@property(nonatomic, readonly) NSString *openID;
@property(nonatomic) double createdAt; // @synthesize createdAt;
@property(nonatomic) long long seq; // @synthesize seq;
@property(nonatomic, copy) NSString *id;

@end

