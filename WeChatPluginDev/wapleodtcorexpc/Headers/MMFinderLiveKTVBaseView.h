//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMFinderLiveConnectMicUsersInfo, MMFinderLiveKTVBox, MMFinderLiveKTVReporter, NSString, WCFinderDataItem;
@protocol MMLiveUniqueTaskId;

@interface MMFinderLiveKTVBaseView : UIView
{
    id <MMLiveUniqueTaskId> _taskId;
    MMFinderLiveKTVReporter *_reporter;
}

+ (double)getAdaptedRatio;
+ (double)getAdaptedValue:(double)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) MMFinderLiveKTVReporter *reporter; // @synthesize reporter=_reporter;
@property(retain, nonatomic) id <MMLiveUniqueTaskId> taskId; // @synthesize taskId=_taskId;
- (id)ktvReporter;
@property(readonly, nonatomic) MMFinderLiveConnectMicUsersInfo *allConnectedMicUsersInfo;
- (id)getSingerContact;
@property(readonly, nonatomic) WCFinderDataItem *finderDataItem;
@property(readonly, nonatomic) NSString *anchorSdkUserId;
@property(readonly, nonatomic) MMFinderLiveKTVBox *ktvBox;
- (id)initWithTaskId:(id)arg1;

@end

