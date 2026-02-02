//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSError, NSString;

@interface SWMidasObjCQueryAppleProductErrorResp : NSObject
{
    MISSING_TYPE *errorCode;
    MISSING_TYPE *appleInternalError;
}

- (void).cxx_destruct;
- (id)init;
@property(nonatomic, readonly) NSString *description;
@property(nonatomic, readonly) NSError *appleInternalError; // @synthesize appleInternalError;
@property(nonatomic, readonly) long long errorCode; // @synthesize errorCode;

@end

