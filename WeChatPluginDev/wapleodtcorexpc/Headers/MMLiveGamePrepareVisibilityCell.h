//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSArray;

@interface MMLiveGamePrepareVisibilityCell
{
    int _liveMode;
    long long _lastSelectMode;
    NSArray *_visibleRoomIds;
    NSArray *_visibleUserNames;
}

- (void).cxx_destruct;
@property(nonatomic) int liveMode; // @synthesize liveMode=_liveMode;
@property(retain, nonatomic) NSArray *visibleUserNames; // @synthesize visibleUserNames=_visibleUserNames;
@property(retain, nonatomic) NSArray *visibleRoomIds; // @synthesize visibleRoomIds=_visibleRoomIds;
@property(nonatomic) long long lastSelectMode; // @synthesize lastSelectMode=_lastSelectMode;
- (void)updateWithVisibleRoomIds:(id)arg1 visibleUserNames:(id)arg2 firstVisibleUserName:(id)arg3 selectMode:(long long)arg4 liveMode:(int)arg5;

@end

