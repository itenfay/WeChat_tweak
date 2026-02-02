//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSURL;

@interface FBSDKAppLink : NSObject
{
    _Bool _backToReferrer;
    NSURL *_sourceURL;
    NSArray *_targets;
    NSURL *_webURL;
}

+ (id)appLinkWithSourceURL:(id)arg1 targets:(id)arg2 webURL:(id)arg3;
+ (id)appLinkWithSourceURL:(id)arg1 targets:(id)arg2 webURL:(id)arg3 isBackToReferrer:(_Bool)arg4;
- (void).cxx_destruct;
@property(nonatomic, getter=isBackToReferrer) _Bool backToReferrer; // @synthesize backToReferrer=_backToReferrer;
@property(retain, nonatomic) NSURL *webURL; // @synthesize webURL=_webURL;
@property(copy, nonatomic) NSArray *targets; // @synthesize targets=_targets;
@property(retain, nonatomic) NSURL *sourceURL; // @synthesize sourceURL=_sourceURL;
- (id)initWithIsBackToReferrer:(_Bool)arg1;

@end

