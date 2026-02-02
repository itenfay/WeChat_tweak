//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSString;

@interface FBSDKAppEventsState : NSObject
{
    NSMutableArray *_mutableEvents;
    unsigned long long _numSkipped;
    NSString *_tokenString;
    NSString *_appID;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *appID; // @synthesize appID=_appID;
@property(readonly, copy, nonatomic) NSString *tokenString; // @synthesize tokenString=_tokenString;
@property(readonly, nonatomic) unsigned long long numSkipped; // @synthesize numSkipped=_numSkipped;
- (id)JSONStringForEvents:(_Bool)arg1;
- (_Bool)isCompatibleWithTokenString:(id)arg1 appID:(id)arg2;
- (_Bool)isCompatibleWithAppEventsState:(id)arg1;
@property(readonly, nonatomic, getter=areAllEventsImplicit) _Bool allEventsImplicit;
- (id)extractReceiptData;
- (void)addEvent:(id)arg1 isImplicit:(_Bool)arg2;
- (void)addEventsFromAppEventState:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *events;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithToken:(id)arg1 appID:(id)arg2;

@end

