//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WAFlutterProxy : NSObject
{
}

+ (id)sharedService;
- (void)registerEnginePlugin:(id)arg1;
- (id)getEngineEntrypoint;
- (id)makeSkylineViewWithFrame:(struct CGRect)arg1 delegate:(id)arg2;
- (id)makeSkylineRuntime;
- (id)getVersionString;
- (_Bool)isSupportFlutter;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

