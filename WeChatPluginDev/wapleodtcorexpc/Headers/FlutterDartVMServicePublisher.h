//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSURL;

@interface FlutterDartVMServicePublisher : NSObject
{
    NSURL *_url;
}

@property(readonly, retain, nonatomic) NSURL *url; // @synthesize url=_url;
- (id)initWithEnableVMServicePublication:(_Bool)arg1;

@end

