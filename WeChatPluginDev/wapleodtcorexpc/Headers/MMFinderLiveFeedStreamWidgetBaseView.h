//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMLiveFeedStreamTask, MMLiveTaskId;

@interface MMFinderLiveFeedStreamWidgetBaseView : UIView
{
    _Bool _isExposing;
    MMLiveTaskId *_taskId;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isExposing; // @synthesize isExposing=_isExposing;
@property(retain, nonatomic) MMLiveTaskId *taskId; // @synthesize taskId=_taskId;
- (void)endExposeAction;
- (void)startExposeAction;
@property(readonly, nonatomic) MMLiveFeedStreamTask *liveTask;
- (void)prepareForReuse;

@end

