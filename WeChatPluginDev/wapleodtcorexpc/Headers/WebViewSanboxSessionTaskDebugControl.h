//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WebViewSanboxSessionTaskDebugControl : NSObject
{
    NSString *_debugPkgUrl;
    NSString *_debugA8Key;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *debugA8Key; // @synthesize debugA8Key=_debugA8Key;
@property(copy, nonatomic) NSString *debugPkgUrl; // @synthesize debugPkgUrl=_debugPkgUrl;
- (id)description;

@end

