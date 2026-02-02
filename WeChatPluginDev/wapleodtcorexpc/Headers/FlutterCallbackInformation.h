//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface FlutterCallbackInformation : NSObject
{
    NSString *_callbackName;
    NSString *_callbackClassName;
    NSString *_callbackLibraryPath;
}

@property(copy) NSString *callbackLibraryPath; // @synthesize callbackLibraryPath=_callbackLibraryPath;
@property(copy) NSString *callbackClassName; // @synthesize callbackClassName=_callbackClassName;
@property(copy) NSString *callbackName; // @synthesize callbackName=_callbackName;
- (void)dealloc;

@end

