//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol WCAudioSessionDelegate <NSObject>
- (_Bool)BlockChangeCategroyPlaybackOptionsWithBlockType:(unsigned long long)arg1 options:(unsigned long long)arg2 mode:(NSString *)arg3;
- (_Bool)BlockActivateSpeaker;
- (_Bool)BlockDeactivateSpeaker;
- (_Bool)BlockChangeCategoryToSoloAmbientWithBlockType:(unsigned long long)arg1;
- (_Bool)BlockChangeCategoryToAmbientWithBlockType:(unsigned long long)arg1;
- (_Bool)BlockChangeCategoryToNotPlayAndRecordWithBlockType:(unsigned long long)arg1;
- (_Bool)BlockDeactivateSession;
@end

