//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, WCFinderDataItem;

@interface MMFinderLiveConcertTicketViewControllerReportingContext : NSObject
{
    WCFinderDataItem *_dataItem;
    NSString *_commentScene;
    NSString *_activityId;
    unsigned long long _enterScene;
    unsigned long long _enterTimestamp;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long enterTimestamp; // @synthesize enterTimestamp=_enterTimestamp;
@property(nonatomic) unsigned long long enterScene; // @synthesize enterScene=_enterScene;
@property(retain, nonatomic) NSString *activityId; // @synthesize activityId=_activityId;
@property(retain, nonatomic) NSString *commentScene; // @synthesize commentScene=_commentScene;
@property(retain, nonatomic) WCFinderDataItem *dataItem; // @synthesize dataItem=_dataItem;
- (void)reportWithActionType:(unsigned long long)arg1 commentScene:(id)arg2 elementId:(id)arg3 eidUdfKv:(id)arg4;
- (void)reportShareToMomentsSucceededWithResourceId:(id)arg1 contentType:(unsigned long long)arg2;
- (void)reportShareToChatSucceeded:(id)arg1 isRecentForward:(_Bool)arg2 resourceId:(id)arg3 contentType:(unsigned long long)arg4;
- (void)reportExternalNavigationInvocationWithResourceId:(id)arg1;
- (void)reportSaveImageButtonInvocationWithResourceId:(id)arg1;
- (void)reportNextStyleButtonInvocationWithResourceId:(id)arg1;
- (void)reportAlternativeShareButtonInvocationWithResourceId:(id)arg1 contentType:(unsigned long long)arg2;
- (void)reportShareButtonInvocationWithResourceId:(id)arg1 contentType:(unsigned long long)arg2;
- (void)reportExternalNavigationExposureWithResourceId:(id)arg1;
- (void)reportSaveImageButtonExposureWithResourceId:(id)arg1;
- (void)reportNextStyleButtonExposureWithResourceId:(id)arg1;
- (void)reportAlternativeShareButtonExposureWithResourceId:(id)arg1 contentType:(unsigned long long)arg2;
- (void)reportShareButtonExposureWithResourceId:(id)arg1 contentType:(unsigned long long)arg2;
- (void)reportLeaving;
- (void)reportEntering;
- (id)initWithActivityId:(id)arg1 commentScene:(id)arg2 enterScene:(unsigned long long)arg3 finderDataItem:(id)arg4;

@end

