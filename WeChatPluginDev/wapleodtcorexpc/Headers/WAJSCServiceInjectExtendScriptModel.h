//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, NSURL;

@interface WAJSCServiceInjectExtendScriptModel : NSObject
{
    NSURL *_sourceURL;
    NSString *_script;
}

+ (id)modelWithScript:(id)arg1 sourceURL:(id)arg2;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *script; // @synthesize script=_script;
@property(copy, nonatomic) NSURL *sourceURL; // @synthesize sourceURL=_sourceURL;
- (id)init;

@end

