//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MJShootBubbleSwitch, NSArray, NSString;
@protocol MJShootRecordingTimerSwitchDelegate;

@interface MJShootRecordingTimerSwitch
{
    id <MJShootRecordingTimerSwitchDelegate> _delegate;
    unsigned long long _selectedMode;
    NSArray *_switchItems;
    MJShootBubbleSwitch *_bubbleSwitch;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MJShootBubbleSwitch *bubbleSwitch; // @synthesize bubbleSwitch=_bubbleSwitch;
@property(retain, nonatomic) NSArray *switchItems; // @synthesize switchItems=_switchItems;
@property(nonatomic) unsigned long long selectedMode; // @synthesize selectedMode=_selectedMode;
@property(nonatomic) __weak id <MJShootRecordingTimerSwitchDelegate> delegate; // @synthesize delegate=_delegate;
- (long long)indexForMode:(unsigned long long)arg1;
- (void)bubbleSwitch:(id)arg1 didSwitchToIndex:(long long)arg2;
- (void)setupViews;
- (id)initWithMode:(unsigned long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

