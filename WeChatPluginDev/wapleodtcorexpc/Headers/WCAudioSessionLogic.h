//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WCAudioSessionLogic
{
}

- (_Bool)BlockChangeCategroyPlaybackOptionsWithBlockType:(unsigned long long)arg1 options:(unsigned long long)arg2 mode:(id)arg3;
- (_Bool)BlockActivateSpeaker;
- (_Bool)BlockDeactivateSpeaker;
- (_Bool)BlockDeactivateSession;
- (_Bool)BlockChangeCategoryToSoloAmbientWithBlockType:(unsigned long long)arg1;
- (_Bool)BlockChangeCategoryToAmbientWithBlockType:(unsigned long long)arg1;
- (_Bool)BlockChangeCategoryToNotPlayAndRecordWithBlockType:(unsigned long long)arg1;
- (void)startLogic;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

