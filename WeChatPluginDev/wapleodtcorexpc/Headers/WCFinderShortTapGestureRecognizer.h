//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UITapGestureRecognizer.h>

@interface WCFinderShortTapGestureRecognizer : UITapGestureRecognizer
{
    _Bool _supportConstantTapping;
    _Bool _constantTapped;
    _Bool _constantTapping;
    double _maxDelay;
    double _minDoubleTapInterval;
    unsigned long long _firstTapTimestamp;
}

@property(nonatomic) unsigned long long firstTapTimestamp; // @synthesize firstTapTimestamp=_firstTapTimestamp;
@property(nonatomic) _Bool constantTapping; // @synthesize constantTapping=_constantTapping;
@property(nonatomic) _Bool constantTapped; // @synthesize constantTapped=_constantTapped;
@property(nonatomic) _Bool supportConstantTapping; // @synthesize supportConstantTapping=_supportConstantTapping;
@property(nonatomic) double minDoubleTapInterval; // @synthesize minDoubleTapInterval=_minDoubleTapInterval;
@property(nonatomic) double maxDelay; // @synthesize maxDelay=_maxDelay;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)cancelTappingAfterDelay;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)reset;
- (id)init;

@end

