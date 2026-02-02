//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class LOTAnimationView, MMFinderLiveLittleLotteryPacketView, MMFinderLiveLotteryInfo;
@protocol LiveLotteryPacketDisplayDelegate;

@interface MMFinderLiveLotteryPacketDisplayLogic : NSObject
{
    _Bool _isLittlePacketShow;
    unsigned int _currentLotteryStatus;
    CDUnknownBlockType _invokeOpenLotteryPanelBlock;
    CDUnknownBlockType _countDownRemainTimeCallback;
    CDUnknownBlockType _lotteryCompleteCallback;
    id <LiveLotteryPacketDisplayDelegate> _displayDelegate;
    MMFinderLiveLittleLotteryPacketView *_littleLotteryPacket;
    MMFinderLiveLotteryInfo *_currentLotteryInfo;
    LOTAnimationView *_largeLotteryPacket;
}

+ (id)createLittleLotteryPacketView;
+ (id)createLargeLotteryPacketView;
- (void).cxx_destruct;
@property(retain, nonatomic) LOTAnimationView *largeLotteryPacket; // @synthesize largeLotteryPacket=_largeLotteryPacket;
@property(nonatomic) unsigned int currentLotteryStatus; // @synthesize currentLotteryStatus=_currentLotteryStatus;
@property(nonatomic) _Bool isLittlePacketShow; // @synthesize isLittlePacketShow=_isLittlePacketShow;
@property(retain, nonatomic) MMFinderLiveLotteryInfo *currentLotteryInfo; // @synthesize currentLotteryInfo=_currentLotteryInfo;
@property(retain, nonatomic) MMFinderLiveLittleLotteryPacketView *littleLotteryPacket; // @synthesize littleLotteryPacket=_littleLotteryPacket;
@property(nonatomic) __weak id <LiveLotteryPacketDisplayDelegate> displayDelegate; // @synthesize displayDelegate=_displayDelegate;
@property(copy, nonatomic) CDUnknownBlockType lotteryCompleteCallback; // @synthesize lotteryCompleteCallback=_lotteryCompleteCallback;
@property(copy, nonatomic) CDUnknownBlockType countDownRemainTimeCallback; // @synthesize countDownRemainTimeCallback=_countDownRemainTimeCallback;
@property(copy, nonatomic) CDUnknownBlockType invokeOpenLotteryPanelBlock; // @synthesize invokeOpenLotteryPanelBlock=_invokeOpenLotteryPanelBlock;
- (void)onEnterForeground;
- (void)stopCountDown;
- (_Bool)isCountDownFinished;
- (void)handleLittlePacketTapGesture:(id)arg1;
@property(readonly, nonatomic) long long currentState;
- (void)invokeCountDownFinished;
- (void)hideLittleLotteryPacket;
- (void)checkAndShowLittleLotteryPacket;
- (void)showLittleLotteryPacket;
- (unsigned int)currentRemainTime;
- (void)stopDisplayLittleLotteryPacket;
- (void)stopDisplayLargeLotteryPacket;
- (unsigned int)getModifiedRemainTime;
- (void)startDisplayLittleLotteryPacketAnimated;
- (void)startDisplayLargeLotteryPacketAnimated;
- (void)updateCurrentLotteryStatus;
- (void)clearCurrentLotteryState;
- (_Bool)checkLotteryCountDownTimeInValid;
- (void)updateCurrentLotteryInfo:(id)arg1;
- (void)updateDisplayingLotteryInfo:(id)arg1;
- (void)initNotification;
- (id)initWithLargeLotteryPacketView:(id)arg1;

@end

