//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface MMWebViewWuidToken : NSObject
{
    NSString *_token;
    double _expireTime;
}

- (void).cxx_destruct;
@property(nonatomic) double expireTime; // @synthesize expireTime=_expireTime;
@property(copy, nonatomic) NSString *token; // @synthesize token=_token;

@end

