//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMLiveVoteFloatingView, MMTimer, NSString;
@protocol MMLiveVoteFloatingViewDisplayLogicDelegate;

@interface MMLiveVoteFloatingViewDisplayLogic : NSObject
{
    _Bool _hidden;
    id <MMLiveVoteFloatingViewDisplayLogicDelegate> _delegate;
    MMLiveVoteFloatingView *_voteFloatingView;
    MMTimer *_floatingViewHideTimer;
    NSString *_delayHideVotingId;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool hidden; // @synthesize hidden=_hidden;
@property(retain, nonatomic) NSString *delayHideVotingId; // @synthesize delayHideVotingId=_delayHideVotingId;
@property(retain, nonatomic) MMTimer *floatingViewHideTimer; // @synthesize floatingViewHideTimer=_floatingViewHideTimer;
@property(retain, nonatomic) MMLiveVoteFloatingView *voteFloatingView; // @synthesize voteFloatingView=_voteFloatingView;
@property(nonatomic) __weak id <MMLiveVoteFloatingViewDisplayLogicDelegate> delegate; // @synthesize delegate=_delegate;
- (void)updateUIWithVotingInfo:(id)arg1;
- (void)invalidateAutoHide;
- (void)onHideFloatingView;
- (void)scheduleAutoHideFloatingViewTimerWithDelay:(double)arg1;
- (void)toggleFloatingViewHidden:(_Bool)arg1;
- (id)initWithView:(id)arg1;

@end

