//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class AnyPromise;

@interface RingToneSettingCellHandler
{
    AnyPromise *_globalRingPromise;
    AnyPromise *_friendsRingPromise;
    unsigned long long _cellType;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long cellType; // @synthesize cellType=_cellType;
@property(retain, nonatomic) AnyPromise *friendsRingPromise; // @synthesize friendsRingPromise=_friendsRingPromise;
@property(retain, nonatomic) AnyPromise *globalRingPromise; // @synthesize globalRingPromise=_globalRingPromise;
- (void)showRingTonePage;
- (id)genCellManager;

@end

