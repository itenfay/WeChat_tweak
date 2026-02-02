//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSMutableSet, WCFinderLiveAudienceNoticeReporter, WCFinderMemberShipZoneHeaderData, WCFinderMemberShipZoneViewModel;

@interface WCFinderMemberShipZoneReporter : NSObject
{
    _Bool _stopReport;
    int _scene;
    WCFinderMemberShipZoneViewModel *_viewModel;
    WCFinderMemberShipZoneHeaderData *_headData;
    WCFinderLiveAudienceNoticeReporter *_liveReporter;
    NSMutableSet *_reportedElements;
    NSMutableDictionary *_elementReportAction;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *elementReportAction; // @synthesize elementReportAction=_elementReportAction;
@property(retain, nonatomic) NSMutableSet *reportedElements; // @synthesize reportedElements=_reportedElements;
@property(nonatomic) int scene; // @synthesize scene=_scene;
@property(retain, nonatomic) WCFinderLiveAudienceNoticeReporter *liveReporter; // @synthesize liveReporter=_liveReporter;
@property(retain, nonatomic) WCFinderMemberShipZoneHeaderData *headData; // @synthesize headData=_headData;
@property(nonatomic) __weak WCFinderMemberShipZoneViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(nonatomic) _Bool stopReport; // @synthesize stopReport=_stopReport;
- (void)exposeElementAgain;
- (void)cleanAll;
- (void)recardElement:(unsigned int)arg1 expose:(_Bool)arg2;
- (void)initElementReportActions;
- (void)initDefaultData;
- (id)initWithCommentScene:(int)arg1;

@end

