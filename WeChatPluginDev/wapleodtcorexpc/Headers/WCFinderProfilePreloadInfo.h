//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class WCFinderProfilePreloadCGIInfo;

@interface WCFinderProfilePreloadInfo : NSObject
{
    WCFinderProfilePreloadCGIInfo *_header;
    WCFinderProfilePreloadCGIInfo *_userpage;
    WCFinderProfilePreloadCGIInfo *_homepage;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderProfilePreloadCGIInfo *homepage; // @synthesize homepage=_homepage;
@property(retain, nonatomic) WCFinderProfilePreloadCGIInfo *userpage; // @synthesize userpage=_userpage;
@property(retain, nonatomic) WCFinderProfilePreloadCGIInfo *header; // @synthesize header=_header;
- (id)toReportJson;

@end

