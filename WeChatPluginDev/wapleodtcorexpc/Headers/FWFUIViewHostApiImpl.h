//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FWFInstanceManager;

@interface FWFUIViewHostApiImpl : NSObject
{
    FWFInstanceManager *_instanceManager;
}

- (void).cxx_destruct;
@property(retain, nonatomic) FWFInstanceManager *instanceManager; // @synthesize instanceManager=_instanceManager;
- (void)setOpaqueForViewWithIdentifier:(id)arg1 isOpaque:(id)arg2 error:(id *)arg3;
- (void)setBackgroundColorForViewWithIdentifier:(id)arg1 toValue:(id)arg2 error:(id *)arg3;
- (id)viewForIdentifier:(id)arg1;
- (id)initWithInstanceManager:(id)arg1;

@end

