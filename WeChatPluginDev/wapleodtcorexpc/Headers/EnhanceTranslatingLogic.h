//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class CMMotionManager, NSString;
@protocol EnhanceTranslatingDelegate;

@interface EnhanceTranslatingLogic : NSObject
{
    _Bool _isDetectorWorking;
    _Bool _isScannerValid;
    _Bool _isOldStyle;
    id <EnhanceTranslatingDelegate> _delegate;
    unsigned long long _sessionId;
    CMMotionManager *_motionManager;
    unsigned long long _preparedTimestamp;
    unsigned long long _detectFailTimestamp;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long detectFailTimestamp; // @synthesize detectFailTimestamp=_detectFailTimestamp;
@property(nonatomic) unsigned long long preparedTimestamp; // @synthesize preparedTimestamp=_preparedTimestamp;
@property(nonatomic) _Bool isOldStyle; // @synthesize isOldStyle=_isOldStyle;
@property(nonatomic) _Bool isScannerValid; // @synthesize isScannerValid=_isScannerValid;
@property(retain, nonatomic) CMMotionManager *motionManager; // @synthesize motionManager=_motionManager;
@property(nonatomic) unsigned long long sessionId; // @synthesize sessionId=_sessionId;
@property(nonatomic) _Bool isDetectorWorking; // @synthesize isDetectorWorking=_isDetectorWorking;
@property(nonatomic) __weak id <EnhanceTranslatingDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onDetectDocumentArea:(unsigned long long)arg1 vetrices:(id)arg2 docImg:(id)arg3 originImg:(id)arg4;
- (void)makeSoundEffect;
- (_Bool)isMotionStable;
- (void)scanningImage:(id)arg1 cameraRect:(struct CGRect)arg2 cropRect:(struct CGRect)arg3;
- (void)invalidate;
- (void)prepareWithDelay:(double)arg1 reset:(_Bool)arg2;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

