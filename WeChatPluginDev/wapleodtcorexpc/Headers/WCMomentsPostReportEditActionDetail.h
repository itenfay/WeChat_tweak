//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WCMomentsPostReportEditActionDetail : NSObject
{
    long long _action;
    _Bool _isPage;
    _Bool _isFinished;
    double _actionStartTime;
    double _actionEndTime;
}

+ (_Bool)isPageAction:(long long)arg1;
@property(readonly, nonatomic) _Bool isPage; // @synthesize isPage=_isPage;
@property(readonly, nonatomic) long long action; // @synthesize action=_action;
@property(readonly, nonatomic) unsigned long long actionDuration;
- (void)onActionFinished;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithAction:(long long)arg1;

@end

