//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WCFinderLiveFeedGenericCoverReportInfo : NSObject
{
    unsigned long long _coverDownloadStartTimeMS;
    unsigned long long _coverDownloadFinishTimeMS;
    unsigned long long _feedId;
}

@property(nonatomic) unsigned long long feedId; // @synthesize feedId=_feedId;
@property(nonatomic) unsigned long long coverDownloadFinishTimeMS; // @synthesize coverDownloadFinishTimeMS=_coverDownloadFinishTimeMS;
@property(nonatomic) unsigned long long coverDownloadStartTimeMS; // @synthesize coverDownloadStartTimeMS=_coverDownloadStartTimeMS;

@end

