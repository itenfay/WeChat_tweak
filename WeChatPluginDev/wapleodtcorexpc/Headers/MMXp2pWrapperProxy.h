//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <Foundation/NSProxy.h>

@class MMXp2pWrapper;

@interface MMXp2pWrapperProxy : NSProxy
{
    MMXp2pWrapper *_p2pManager;
}

+ (Class)class;
- (void).cxx_destruct;
@property(retain, nonatomic) MMXp2pWrapper *p2pManager; // @synthesize p2pManager=_p2pManager;
- (void)forwardInvocation:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)destroy;
- (id)initWithInstance:(id)arg1;

@end

