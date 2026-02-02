//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, WCFinderPushFeedViewProductParams;

@interface WCFinderGetDetailDataItemCGIConfig : NSObject
{
    double _timeout;
    NSString *_uxinfo;
    WCFinderPushFeedViewProductParams *_productInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderPushFeedViewProductParams *productInfo; // @synthesize productInfo=_productInfo;
@property(copy, nonatomic) NSString *uxinfo; // @synthesize uxinfo=_uxinfo;
@property(nonatomic) double timeout; // @synthesize timeout=_timeout;
- (id)init;

@end

