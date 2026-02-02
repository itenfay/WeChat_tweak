//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSMutableSet, WCFinderLiveAudienceNoticeReporter, WCFinderMembershipIntroduceViewModel;

@interface WCFinderMemberShipIntroduceReporter : NSObject
{
    _Bool _stopReport;
    int _scene;
    WCFinderMembershipIntroduceViewModel *_viewModel;
    WCFinderLiveAudienceNoticeReporter *_liveReporter;
    NSMutableSet *_reportedElements;
    NSMutableDictionary *_elementReportAction;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *elementReportAction; // @synthesize elementReportAction=_elementReportAction;
@property(retain, nonatomic) NSMutableSet *reportedElements; // @synthesize reportedElements=_reportedElements;
@property(nonatomic) int scene; // @synthesize scene=_scene;
@property(retain, nonatomic) WCFinderLiveAudienceNoticeReporter *liveReporter; // @synthesize liveReporter=_liveReporter;
@property(nonatomic) __weak WCFinderMembershipIntroduceViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(nonatomic) _Bool stopReport; // @synthesize stopReport=_stopReport;
- (void)exposeElementAgain;
- (void)cleanAll;
- (void)recardElement:(unsigned int)arg1 expose:(_Bool)arg2;
- (void)initElementReportActions;
- (void)initDefaultData;
- (id)initWithCommentScene:(int)arg1;

@end

