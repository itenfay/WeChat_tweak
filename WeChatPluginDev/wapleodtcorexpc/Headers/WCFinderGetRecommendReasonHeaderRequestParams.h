//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCFinderGetRecommendReasonHeaderRequestParams : NSObject
{
    int _commentScene;
    int _prefetchType;
    NSString *_bypassData;
}

- (void).cxx_destruct;
@property(nonatomic) int prefetchType; // @synthesize prefetchType=_prefetchType;
@property(nonatomic) int commentScene; // @synthesize commentScene=_commentScene;
@property(copy, nonatomic) NSString *bypassData; // @synthesize bypassData=_bypassData;

@end

