//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class WCFinderDataItem;

@interface WCFinderLeadToMachineCellState : NSObject
{
    _Bool _haveFailedToShow;
    _Bool _haveShown;
    _Bool _haveLeadToMachineTab;
    _Bool _machineTabIsTopRefreshing;
    WCFinderDataItem *_machineTabFirstPlayableDataItem;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool machineTabIsTopRefreshing; // @synthesize machineTabIsTopRefreshing=_machineTabIsTopRefreshing;
@property(retain, nonatomic) WCFinderDataItem *machineTabFirstPlayableDataItem; // @synthesize machineTabFirstPlayableDataItem=_machineTabFirstPlayableDataItem;
@property(nonatomic) _Bool haveLeadToMachineTab; // @synthesize haveLeadToMachineTab=_haveLeadToMachineTab;
@property(nonatomic) _Bool haveShown; // @synthesize haveShown=_haveShown;
@property(nonatomic) _Bool haveFailedToShow; // @synthesize haveFailedToShow=_haveFailedToShow;
- (void)notifySwitchToMachineTab;
- (_Bool)_innerCheckDisplayState;
- (_Bool)checkDisplayState;

@end

