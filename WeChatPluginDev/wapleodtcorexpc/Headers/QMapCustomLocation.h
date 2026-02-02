//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSThread, QMapRepeatTimer;
@protocol QMapCustomLocationDelegate;

@interface QMapCustomLocation : NSObject
{
    _Bool _isThreadExit;
    int _loopCount;
    id <QMapCustomLocationDelegate> _delegate;
    NSThread *_locationCheckThread;
    QMapRepeatTimer *_timer;
    NSMutableArray *_interlandDataSafetyManangerArray;
    struct _opaque_pthread_rwlock_t _lock;
}

+ (id)shareInstance;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *interlandDataSafetyManangerArray; // @synthesize interlandDataSafetyManangerArray=_interlandDataSafetyManangerArray;
@property(nonatomic) struct _opaque_pthread_rwlock_t lock; // @synthesize lock=_lock;
@property(nonatomic) int loopCount; // @synthesize loopCount=_loopCount;
@property(nonatomic) _Bool isThreadExit; // @synthesize isThreadExit=_isThreadExit;
@property(retain, nonatomic) QMapRepeatTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) NSThread *locationCheckThread; // @synthesize locationCheckThread=_locationCheckThread;
@property(nonatomic) __weak id <QMapCustomLocationDelegate> delegate; // @synthesize delegate=_delegate;
- (void)checkLocationIsInlandByInternalLocations:(id)arg1;
- (void)obtainUselocationFromDataSafetyInternalManager;
- (void)triggerInternalLocationCheck;
- (void)unregisterDataSafetyMananger:(id)arg1;
- (void)registerDataSafetyMananger:(id)arg1;
- (void)dealloc;
- (void)decreaseLoopCount;
- (void)increaseLoopCount;
- (void)threadStart:(id)arg1;
- (void)createLocationParsingThread;
- (void)triggerParseQMapCustomLocationSourceDelegate;
- (void)callObtainLocationSourceFromDifferentTarget;
- (void)startCustomLocationCheckingLoop:(double)arg1;
- (void)checkLocationIsInland:(id)arg1;
- (void)callParseCustomLocationDelegate;
- (id)init;

@end

