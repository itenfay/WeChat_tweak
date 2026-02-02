//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCPayHandleWCPayURLResult : NSObject
{
    NSString *nsOrderID;
    NSString *nsProductsID;
    NSString *nsUUID;
    NSString *nsAppID;
    NSString *nsAppSource;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *nsUUID; // @synthesize nsUUID;
@property(retain, nonatomic) NSString *nsAppSource; // @synthesize nsAppSource;
@property(retain, nonatomic) NSString *nsAppID; // @synthesize nsAppID;
@property(retain, nonatomic) NSString *nsOrderID; // @synthesize nsOrderID;
@property(retain, nonatomic) NSString *nsProductsID; // @synthesize nsProductsID;

@end

