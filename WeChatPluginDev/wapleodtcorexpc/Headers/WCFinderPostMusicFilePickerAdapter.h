//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCFinderPostMusicFilePickerAdapter : NSObject
{
    CDUnknownBlockType _onCancel;
    CDUnknownBlockType _onComplete;
}

+ (id)showPicker:(id)arg1 fromVC:(id)arg2 onCancel:(CDUnknownBlockType)arg3 onComplete:(CDUnknownBlockType)arg4;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType onComplete; // @synthesize onComplete=_onComplete;
@property(copy, nonatomic) CDUnknownBlockType onCancel; // @synthesize onCancel=_onCancel;
- (void)documentPicker:(id)arg1 didPickDocumentsAtURLs:(id)arg2;
- (void)documentPickerWasCancelled:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

