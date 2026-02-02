//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMFinderLiveAudienceReportContext, MMFinderLiveWatchRecommandData;

@interface MMFinderLiveWatchContext : NSObject
{
    MMFinderLiveWatchRecommandData *_recommandData;
    MMFinderLiveAudienceReportContext *_reportContext;
}

+ (void)CleanContext;
+ (id)CurrentContext;
- (void).cxx_destruct;
@property(retain, nonatomic) MMFinderLiveAudienceReportContext *reportContext; // @synthesize reportContext=_reportContext;
@property(retain, nonatomic) MMFinderLiveWatchRecommandData *recommandData; // @synthesize recommandData=_recommandData;
- (void)reinit;

@end

