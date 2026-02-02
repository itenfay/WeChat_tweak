//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface RingBackSwitchCellHandler
{
    _Bool _shouldOpen;
}

@property(nonatomic) _Bool shouldOpen; // @synthesize shouldOpen=_shouldOpen;
- (void)openRingBackSwitch;
- (void)soundSwitchChanged:(id)arg1;
- (id)genCellManager;
- (id)initWithCurViewController:(id)arg1;

@end

