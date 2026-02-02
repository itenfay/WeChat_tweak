//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, NSURL, SFSafariViewController;

@interface FLTURLLaunchSession : NSObject
{
    CDUnknownBlockType _flutterResult;
    NSURL *_url;
    SFSafariViewController *_safari;
    CDUnknownBlockType _didFinish;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType didFinish; // @synthesize didFinish=_didFinish;
@property(retain, nonatomic) SFSafariViewController *safari; // @synthesize safari=_safari;
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
@property(copy, nonatomic) CDUnknownBlockType flutterResult; // @synthesize flutterResult=_flutterResult;
- (void)close;
- (void)safariViewControllerDidFinish:(id)arg1;
- (void)safariViewController:(id)arg1 didCompleteInitialLoad:(_Bool)arg2;
- (id)initWithUrl:(id)arg1 withFlutterResult:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

