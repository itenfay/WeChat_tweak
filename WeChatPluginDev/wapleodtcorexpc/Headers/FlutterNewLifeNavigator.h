//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMFlutterInstance, NSString;

@interface FlutterNewLifeNavigator : NSObject
{
    _Bool _tryReuseEngineForDetail;
    _Bool _autoReleaseFlutterViewForDetail;
    MMFlutterInstance *_detailInstance;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool autoReleaseFlutterViewForDetail; // @synthesize autoReleaseFlutterViewForDetail=_autoReleaseFlutterViewForDetail;
@property(retain, nonatomic) MMFlutterInstance *detailInstance; // @synthesize detailInstance=_detailInstance;
@property(nonatomic) _Bool tryReuseEngineForDetail; // @synthesize tryReuseEngineForDetail=_tryReuseEngineForDetail;
- (id)generateNewLifePageSheetStyle;
- (void)pushFromViewController:(id)arg1 plugin:(id)arg2 route:(id)arg3 arguments:(id)arg4;
- (id)initWithTryReuseEngineForDetail:(_Bool)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

