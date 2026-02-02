//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface FBSDKWebViewAppLinkResolver : NSObject
{
}

+ (id)sharedInstance;
- (id)appLinkFromALData:(id)arg1 destination:(id)arg2;
- (void)getALDataFromLoadedPage:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (id)parseALData:(id)arg1;
- (void)appLinkFromURL:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)followRedirects:(id)arg1 handler:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

