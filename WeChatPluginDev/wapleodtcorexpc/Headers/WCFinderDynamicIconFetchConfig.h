//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, UIImage, WCFinderDynamicIconFetchArgs;

@interface WCFinderDynamicIconFetchConfig : NSObject
{
    NSString *_url;
    NSString *_key;
    NSString *_defaultSVGName;
    WCFinderDynamicIconFetchArgs *_args;
    UIImage *_image;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(retain, nonatomic) WCFinderDynamicIconFetchArgs *args; // @synthesize args=_args;
@property(retain, nonatomic) NSString *defaultSVGName; // @synthesize defaultSVGName=_defaultSVGName;
@property(retain, nonatomic) NSString *key; // @synthesize key=_key;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;

@end

