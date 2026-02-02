//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray;
@protocol MMFinderLiveHotSaleAnimationDelegate;

@interface MMFinderLiveHotSaleAnimationLogic : NSObject
{
    _Bool _isAnimating;
    _Bool _isWaiting;
    _Bool _isDuringFinishing;
    _Bool _hasGotNewDataDuringFinishing;
    id <MMFinderLiveHotSaleAnimationDelegate> _delegate;
    unsigned long long _sales;
    NSMutableArray *_salesHistory;
    NSMutableArray *_timeInfo;
    unsigned long long _lastCount;
    unsigned long long _startPoint;
}

+ (id)logicOf:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) _Bool hasGotNewDataDuringFinishing; // @synthesize hasGotNewDataDuringFinishing=_hasGotNewDataDuringFinishing;
@property(nonatomic) _Bool isDuringFinishing; // @synthesize isDuringFinishing=_isDuringFinishing;
@property(nonatomic) _Bool isWaiting; // @synthesize isWaiting=_isWaiting;
@property(nonatomic) unsigned long long startPoint; // @synthesize startPoint=_startPoint;
@property(nonatomic) unsigned long long lastCount; // @synthesize lastCount=_lastCount;
@property(retain, nonatomic) NSMutableArray *timeInfo; // @synthesize timeInfo=_timeInfo;
@property(retain, nonatomic) NSMutableArray *salesHistory; // @synthesize salesHistory=_salesHistory;
@property(nonatomic) unsigned long long sales; // @synthesize sales=_sales;
@property(nonatomic) __weak id <MMFinderLiveHotSaleAnimationDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool isAnimating; // @synthesize isAnimating=_isAnimating;
- (_Bool)shouldStartHotSellAnimation;
- (void)process;
- (void)tryStart;
- (id)initWithDelegate:(id)arg1;

@end

