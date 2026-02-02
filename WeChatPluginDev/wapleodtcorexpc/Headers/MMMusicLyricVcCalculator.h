//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMMusicLyricResolver, MMTimer, NSMutableArray;
@protocol MMMusicLyricVcCalculatorDelegate;

@interface MMMusicLyricVcCalculator : NSObject
{
    MMMusicLyricResolver *_lyricResolver;
    NSMutableArray *_lyricsList;
    NSMutableArray *_timeList;
    MMTimer *_timer;
    int _currentLyricIndex;
    double _offset;
    id <MMMusicLyricVcCalculatorDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <MMMusicLyricVcCalculatorDelegate> delegate; // @synthesize delegate=_delegate;
- (id)arrTimes;
- (id)arrLyrics;
- (_Bool)isValidLyric;
- (void)stopTimer;
- (void)updateCurIndex;
- (void)scroll;
- (void)stopScroll;
- (void)startScroll;
- (id)initWithLyricStr:(id)arg1;

@end

