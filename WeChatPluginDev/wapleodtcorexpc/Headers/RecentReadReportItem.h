//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class BizRecentReadSmallItemViewModel;

@interface RecentReadReportItem : NSObject
{
    int _actionType;
    BizRecentReadSmallItemViewModel *_viewModel;
    unsigned long long _timeStamp;
}

- (void).cxx_destruct;
@property(nonatomic) int actionType; // @synthesize actionType=_actionType;
@property(nonatomic) unsigned long long timeStamp; // @synthesize timeStamp=_timeStamp;
@property(retain, nonatomic) BizRecentReadSmallItemViewModel *viewModel; // @synthesize viewModel=_viewModel;

@end

