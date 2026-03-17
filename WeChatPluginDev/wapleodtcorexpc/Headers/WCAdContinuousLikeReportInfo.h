//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WCAdContinuousLikeReportInfo : NSObject
{
    unsigned int _totalLikeCount;
    unsigned int _continuousLikeCount;
    unsigned int _bannerPlayCount;
}

@property(nonatomic) unsigned int bannerPlayCount; // @synthesize bannerPlayCount=_bannerPlayCount;
@property(nonatomic) unsigned int continuousLikeCount; // @synthesize continuousLikeCount=_continuousLikeCount;
@property(nonatomic) unsigned int totalLikeCount; // @synthesize totalLikeCount=_totalLikeCount;

@end

