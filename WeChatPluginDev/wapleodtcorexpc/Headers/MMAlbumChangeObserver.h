//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, NSURL;

@interface MMAlbumChangeObserver
{
    _Bool _observerRegistered;
    unsigned int _lastChangeTime;
    NSURL *_lastCaptureAssetURL;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int lastChangeTime; // @synthesize lastChangeTime=_lastChangeTime;
@property(nonatomic) _Bool observerRegistered; // @synthesize observerRegistered=_observerRegistered;
@property(retain, nonatomic) NSURL *lastCaptureAssetURL; // @synthesize lastCaptureAssetURL=_lastCaptureAssetURL;
- (void)photoLibraryDidChange:(id)arg1;
- (_Bool)isPhotoChangedInSecond:(long long)arg1;
- (_Bool)hasRegisterObserver;
- (void)unregisterObserver;
- (void)registerObserver;
- (_Bool)enableChangeObserver;
- (void)onServiceInit;
- (void)onServiceClearData;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

