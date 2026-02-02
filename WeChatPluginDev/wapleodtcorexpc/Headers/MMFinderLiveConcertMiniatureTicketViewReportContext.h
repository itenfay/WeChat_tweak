//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, WCFinderDataItem;

@interface MMFinderLiveConcertMiniatureTicketViewReportContext : NSObject
{
    NSString *_activityId;
    WCFinderDataItem *_dataItem;
    NSString *_commentScene;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *commentScene; // @synthesize commentScene=_commentScene;
@property(retain, nonatomic) WCFinderDataItem *dataItem; // @synthesize dataItem=_dataItem;
@property(retain, nonatomic) NSString *activityId; // @synthesize activityId=_activityId;
- (id)liveId;
- (void)reportCloseButtonInvocation;
- (void)reportGetTicketButtonInvocation;
- (void)reportCloseButtonExposure;
- (void)reportGetTicketButtonExposure;
- (id)initWithActivityId:(id)arg1 commentScene:(id)arg2 finderDataItem:(id)arg3;

@end

