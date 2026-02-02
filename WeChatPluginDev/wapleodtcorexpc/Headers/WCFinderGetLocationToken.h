//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMSystemAuthCancellableToken;

@interface WCFinderGetLocationToken : NSObject
{
    MMSystemAuthCancellableToken *_inner;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMSystemAuthCancellableToken *inner; // @synthesize inner=_inner;
- (void)cancel;

@end

