//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface MMFinderProfileLiveNoticeContext : NSObject
{
    _Bool _showsMoreNoticesAutomatically;
    _Bool _profileHasTakenActions;
    _Bool _profileHasCheckedMoreNoticesAutomatically;
    _Bool _profileHasShowedMoreNotices;
    double _timeoutIntervalForShowingMoreNoticesAutomatically;
    double _profileLoadTime;
}

@property(readonly, nonatomic) _Bool profileHasShowedMoreNotices; // @synthesize profileHasShowedMoreNotices=_profileHasShowedMoreNotices;
@property(readonly, nonatomic) _Bool profileHasCheckedMoreNoticesAutomatically; // @synthesize profileHasCheckedMoreNoticesAutomatically=_profileHasCheckedMoreNoticesAutomatically;
@property(readonly, nonatomic) _Bool profileHasTakenActions; // @synthesize profileHasTakenActions=_profileHasTakenActions;
@property(readonly, nonatomic) double profileLoadTime; // @synthesize profileLoadTime=_profileLoadTime;
@property(nonatomic) double timeoutIntervalForShowingMoreNoticesAutomatically; // @synthesize timeoutIntervalForShowingMoreNoticesAutomatically=_timeoutIntervalForShowingMoreNoticesAutomatically;
@property(nonatomic) _Bool showsMoreNoticesAutomatically; // @synthesize showsMoreNoticesAutomatically=_showsMoreNoticesAutomatically;
- (_Bool)canShowMoreNoticesAutomatically;
- (void)recordProfileDidShowMoreNotices;
- (void)recordProfileDidCheckMoreNoticesAutomatically;
- (void)recordProfileDidTakeActions;
- (void)recordProfileDidLoad;

@end

