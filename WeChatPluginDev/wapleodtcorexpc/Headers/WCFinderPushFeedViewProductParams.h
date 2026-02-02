//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCFinderPushFeedViewProductParams : NSObject
{
    unsigned long long _productId;
    NSString *_productExtra;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *productExtra; // @synthesize productExtra=_productExtra;
@property(nonatomic) unsigned long long productId; // @synthesize productId=_productId;

@end

