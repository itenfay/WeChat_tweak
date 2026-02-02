//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, TPPlayerAdapter;

@interface TPPlayerPictureInPictureHandler : NSObject
{
    TPPlayerAdapter *_adapter;
    long long _state;
    long long _prePlayerType;
}

+ (id)handlerForAdapter:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) long long prePlayerType; // @synthesize prePlayerType=_prePlayerType;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(nonatomic) __weak TPPlayerAdapter *adapter; // @synthesize adapter=_adapter;
- (void)restoreFromPipWithError:(long long)arg1;
- (_Bool)handlePictureInPictureErrorDidOccur:(long long)arg1;
- (_Bool)handlePictureInPictureStateDidChange:(long long)arg1;
- (long long)handleStopPictureInPicture;
- (long long)handleStartPictureInPicture;
- (_Bool)handleStop;
- (_Bool)handleOnPrepared;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

