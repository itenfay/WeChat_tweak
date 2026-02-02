//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMLiteAppViewController, NSString;
@protocol FlutterBinaryMessenger;

@interface MMFinderLiveLiteAppPreviewPlugin : NSObject
{
    NSObject<FlutterBinaryMessenger> *_messenger;
    MMLiteAppViewController *_liteApp;
}

+ (void)registerWithRegistrar:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) __weak MMLiteAppViewController *liteApp; // @synthesize liteApp=_liteApp;
@property(nonatomic) __weak NSObject<FlutterBinaryMessenger> *messenger; // @synthesize messenger=_messenger;
- (void)instanceRegisterWithRegistrar:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

