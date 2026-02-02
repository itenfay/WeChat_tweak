//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MJShootBubbleSwitch, NSArray, NSString;
@protocol MJShootFaceGenderSwitchDelegate;

@interface MJShootFaceGenderSwitch
{
    id <MJShootFaceGenderSwitchDelegate> _delegate;
    long long _selectedFaceGender;
    NSArray *_switchItems;
    MJShootBubbleSwitch *_bubbleSwitch;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MJShootBubbleSwitch *bubbleSwitch; // @synthesize bubbleSwitch=_bubbleSwitch;
@property(retain, nonatomic) NSArray *switchItems; // @synthesize switchItems=_switchItems;
@property(nonatomic) long long selectedFaceGender; // @synthesize selectedFaceGender=_selectedFaceGender;
@property(nonatomic) __weak id <MJShootFaceGenderSwitchDelegate> delegate; // @synthesize delegate=_delegate;
- (long long)indexForFaceGender:(long long)arg1;
- (void)bubbleSwitch:(id)arg1 didSwitchToIndex:(long long)arg2;
- (void)setupViews;
- (id)initWithFaceGender:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

