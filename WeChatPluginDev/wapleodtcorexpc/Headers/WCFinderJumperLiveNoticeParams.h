//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FinderLiveNoticeInfo, NSString;

@interface WCFinderJumperLiveNoticeParams : NSObject
{
    FinderLiveNoticeInfo *_noticeInfo;
    NSString *_bypReportChnlExtra;
}

+ (id)paramsFromLiveReservationStyle:(id)arg1;
+ (id)paramsFromLiveReservationNecessaryParams:(id)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *bypReportChnlExtra; // @synthesize bypReportChnlExtra=_bypReportChnlExtra;
@property(retain, nonatomic) FinderLiveNoticeInfo *noticeInfo; // @synthesize noticeInfo=_noticeInfo;

@end

