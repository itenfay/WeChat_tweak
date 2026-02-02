//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface TingFlowPlayerConfiguration : NSObject
{
    _Bool _forceShuffleMode;
    _Bool _shuffed;
    _Bool _forceStratPlayMode;
    _Bool _forceEnableBackupItemFetching;
    _Bool _enableBackupItemFetching;
    _Bool _savePlayModeSettings;
    int _startPlayMode;
}

@property(nonatomic) _Bool savePlayModeSettings; // @synthesize savePlayModeSettings=_savePlayModeSettings;
@property(nonatomic) _Bool enableBackupItemFetching; // @synthesize enableBackupItemFetching=_enableBackupItemFetching;
@property(nonatomic) _Bool forceEnableBackupItemFetching; // @synthesize forceEnableBackupItemFetching=_forceEnableBackupItemFetching;
@property(nonatomic) int startPlayMode; // @synthesize startPlayMode=_startPlayMode;
@property(nonatomic) _Bool forceStratPlayMode; // @synthesize forceStratPlayMode=_forceStratPlayMode;
@property(nonatomic) _Bool shuffed; // @synthesize shuffed=_shuffed;
@property(nonatomic) _Bool forceShuffleMode; // @synthesize forceShuffleMode=_forceShuffleMode;

@end

