//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCFinderILinkEventExtProxy : NSObject
{
    CDUnknownBlockType _linkClickBlock;
}

+ (id)proxyWithBlock:(CDUnknownBlockType)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType linkClickBlock; // @synthesize linkClickBlock=_linkClickBlock;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)addToTextView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

