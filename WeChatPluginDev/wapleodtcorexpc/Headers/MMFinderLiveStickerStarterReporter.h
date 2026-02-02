//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, WCFinderLiveStarterReporter;

@interface MMFinderLiveStickerStarterReporter : NSObject
{
    WCFinderLiveStarterReporter *_reporter;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderLiveStarterReporter *reporter; // @synthesize reporter=_reporter;
- (void)reportStickerAction:(unsigned long long)arg1 type:(unsigned long long)arg2 attributes:(id)arg3;
- (void)reportStickerAction:(unsigned long long)arg1 type:(unsigned long long)arg2;
- (id)initWithUnderlyingReporter:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

