//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FWFInstanceManager;

@interface FWFScrollViewHostApiImpl : NSObject
{
    FWFInstanceManager *_instanceManager;
}

- (void).cxx_destruct;
@property(retain, nonatomic) FWFInstanceManager *instanceManager; // @synthesize instanceManager=_instanceManager;
- (void)setContentOffsetForScrollViewWithIdentifier:(id)arg1 toX:(id)arg2 y:(id)arg3 error:(id *)arg4;
- (void)scrollByForScrollViewWithIdentifier:(id)arg1 x:(id)arg2 y:(id)arg3 error:(id *)arg4;
- (id)contentOffsetForScrollViewWithIdentifier:(id)arg1 error:(id *)arg2;
- (void)createFromWebViewWithIdentifier:(id)arg1 webViewIdentifier:(id)arg2 error:(id *)arg3;
- (id)scrollViewForIdentifier:(id)arg1;
- (id)initWithInstanceManager:(id)arg1;

@end

