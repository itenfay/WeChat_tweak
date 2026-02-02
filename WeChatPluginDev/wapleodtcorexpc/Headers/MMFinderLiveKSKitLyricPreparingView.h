//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSMutableArray;

@interface MMFinderLiveKSKitLyricPreparingView : UIView
{
    _Bool _isStartCountDown;
    _Bool _isStartPrepare;
    int _countDownSeconds;
    int _remainSeconds;
    CDUnknownBlockType _prepareEndCallback;
    NSMutableArray *_countDowntDotList;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isStartPrepare; // @synthesize isStartPrepare=_isStartPrepare;
@property(retain, nonatomic) NSMutableArray *countDowntDotList; // @synthesize countDowntDotList=_countDowntDotList;
@property(nonatomic) int remainSeconds; // @synthesize remainSeconds=_remainSeconds;
@property(copy, nonatomic) CDUnknownBlockType prepareEndCallback; // @synthesize prepareEndCallback=_prepareEndCallback;
@property(nonatomic) int countDownSeconds; // @synthesize countDownSeconds=_countDownSeconds;
@property(nonatomic) _Bool isStartCountDown; // @synthesize isStartCountDown=_isStartCountDown;
- (void)checkPrepareIsEnd;
- (void)checkCountDownIsStart;
- (void)updatePreparingRemainMs:(int)arg1;
- (void)updateMaxPreparingMs:(int)arg1;
- (_Bool)isPrepareStart;
- (void)endPrepare;
- (void)stopPrepare;
- (void)startPrepare;
- (double)preferHeight;
- (void)refreshCountDownDotsIfNeed;
- (void)resetCountDownDots;
- (id)getValidCountDownDots;
- (id)createCountDownDot;
- (void)initCountDownDots;
- (void)layoutUI;
- (void)layoutSubviews;
- (void)initDefaultDatas;
- (id)init;

@end

