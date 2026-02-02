//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCPayWebImageViewDelegateObject : NSObject
{
    CDUnknownBlockType _okBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType okBlock; // @synthesize okBlock=_okBlock;
- (void)onLoadWCPayWebImageFail:(id)arg1;
- (void)onLoadWCPayWebImageOK:(id)arg1;
- (id)initWithOK:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

