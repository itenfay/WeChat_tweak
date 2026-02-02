//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCAdFinderInfo : NSObject
{
    NSString *_exportId;
    NSString *_objectNonceId;
    NSString *_finderUsername;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *finderUsername; // @synthesize finderUsername=_finderUsername;
@property(retain, nonatomic) NSString *objectNonceId; // @synthesize objectNonceId=_objectNonceId;
@property(retain, nonatomic) NSString *exportId; // @synthesize exportId=_exportId;
- (_Bool)isValid;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

