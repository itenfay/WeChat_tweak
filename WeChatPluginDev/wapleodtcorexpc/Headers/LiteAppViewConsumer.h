//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class LiteAppViewController, NSString;

@interface LiteAppViewConsumer : NSObject
{
    LiteAppViewController *_vc;
}

- (void).cxx_destruct;
@property(nonatomic) __weak LiteAppViewController *vc; // @synthesize vc=_vc;
- (id)consume:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

