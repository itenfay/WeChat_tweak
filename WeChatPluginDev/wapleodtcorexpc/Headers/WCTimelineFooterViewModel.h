//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class WCDataItem, WCMomentsFinderShareViewModel, WCMomentsNewLifeShareViewModel, WCMomentsPostReportSession, WCMomentsPostShareBaseViewModel;

@interface WCTimelineFooterViewModel : NSObject
{
    WCDataItem *_dataItem;
    WCMomentsPostReportSession *_postSession;
    WCMomentsPostShareBaseViewModel *_displayedViewModel;
    WCMomentsFinderShareViewModel *_finderShareViewModel;
    WCMomentsNewLifeShareViewModel *_newlifeShareViewModel;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) WCMomentsNewLifeShareViewModel *newlifeShareViewModel; // @synthesize newlifeShareViewModel=_newlifeShareViewModel;
@property(readonly, nonatomic) WCMomentsFinderShareViewModel *finderShareViewModel; // @synthesize finderShareViewModel=_finderShareViewModel;
@property(readonly, nonatomic) WCMomentsPostShareBaseViewModel *displayedViewModel; // @synthesize displayedViewModel=_displayedViewModel;
@property(retain, nonatomic) WCMomentsPostReportSession *postSession; // @synthesize postSession=_postSession;
@property(readonly, nonatomic) WCDataItem *dataItem; // @synthesize dataItem=_dataItem;
- (void)willDisplayFooterCell;
- (void)determineDisplayedViewModel;
- (id)initWithDataItem:(id)arg1;

@end

