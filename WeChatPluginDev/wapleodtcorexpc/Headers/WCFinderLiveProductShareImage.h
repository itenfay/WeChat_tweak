//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCFinderLiveProductShareImage : NSObject
{
    NSString *_url;
    double _aspectRatio;
}

+ (id)tagWithURL:(id)arg1 aspectRatio:(double)arg2;
- (void).cxx_destruct;
@property(nonatomic) double aspectRatio; // @synthesize aspectRatio=_aspectRatio;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;

@end

