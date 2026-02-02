//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMFinderLiveBuyTicketHandle, NSMutableDictionary, UIView, UIViewController, WCFinderFeedContentVM, WCFinderInteractivePanelConfigParamsModel, WCFinderLiveAudienceNoticeReporter;

@interface MMFinderFeedNoticeModel : NSObject
{
    UIViewController *_findViewController;
    UIView *_feedView;
    NSMutableDictionary *_jumpInfoPanelDict;
    WCFinderFeedContentVM *_contentVM;
    WCFinderInteractivePanelConfigParamsModel *_paramsModel;
    MMFinderLiveBuyTicketHandle *_ticketHandle;
    WCFinderLiveAudienceNoticeReporter *_liveNoticeReporter;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderLiveAudienceNoticeReporter *liveNoticeReporter; // @synthesize liveNoticeReporter=_liveNoticeReporter;
@property(retain, nonatomic) MMFinderLiveBuyTicketHandle *ticketHandle; // @synthesize ticketHandle=_ticketHandle;
@property(retain, nonatomic) WCFinderInteractivePanelConfigParamsModel *paramsModel; // @synthesize paramsModel=_paramsModel;
@property(retain, nonatomic) WCFinderFeedContentVM *contentVM; // @synthesize contentVM=_contentVM;
@property(retain, nonatomic) NSMutableDictionary *jumpInfoPanelDict; // @synthesize jumpInfoPanelDict=_jumpInfoPanelDict;
@property(nonatomic) __weak UIView *feedView; // @synthesize feedView=_feedView;
@property(nonatomic) __weak UIViewController *findViewController; // @synthesize findViewController=_findViewController;
- (id)getNotCreateTicketHandle;

@end

