//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSString;

@interface SWMidasUser : NSObject
{
    MISSING_TYPE *offerID;
    MISSING_TYPE *openID;
    MISSING_TYPE *openKey;
    MISSING_TYPE *sessionID;
    MISSING_TYPE *sessionType;
    MISSING_TYPE *platform;
    MISSING_TYPE *platformKey;
}

- (void).cxx_destruct;
- (id)init;
@property(nonatomic, readonly) NSString *description;
- (id)initWithOfferID:(id)arg1 openID:(id)arg2 openKey:(id)arg3 sessionID:(id)arg4 sessionType:(id)arg5 platform:(id)arg6 platformKey:(id)arg7;
- (_Bool)validate;
@property(nonatomic, readonly) NSString *platformKey;
@property(nonatomic, readonly) NSString *platform;
@property(nonatomic, readonly) NSString *sessionType;
@property(nonatomic, readonly) NSString *sessionID;
@property(nonatomic, readonly) NSString *openKey;
@property(nonatomic, readonly) NSString *openID;
@property(nonatomic, readonly) NSString *offerID;

@end

