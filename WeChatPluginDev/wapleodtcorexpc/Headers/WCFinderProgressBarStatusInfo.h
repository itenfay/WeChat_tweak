//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WCFinderProgressBarStatusInfo : NSObject
{
    _Bool _isLoading;
    _Bool _isVideoPause;
    _Bool _isManual;
    _Bool _showProgressBar;
    double _maxPlayProgress;
    double _currentPlayProgress;
}

@property(nonatomic, getter=isShowProgressBar) _Bool showProgressBar; // @synthesize showProgressBar=_showProgressBar;
@property(nonatomic) double currentPlayProgress; // @synthesize currentPlayProgress=_currentPlayProgress;
@property(nonatomic) double maxPlayProgress; // @synthesize maxPlayProgress=_maxPlayProgress;
@property(nonatomic) _Bool isManual; // @synthesize isManual=_isManual;
@property(nonatomic) _Bool isVideoPause; // @synthesize isVideoPause=_isVideoPause;
@property(nonatomic) _Bool isLoading; // @synthesize isLoading=_isLoading;
- (id)copy;
- (id)description;

@end

