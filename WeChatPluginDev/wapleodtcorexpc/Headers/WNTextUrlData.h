//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, NSURL;

@interface WNTextUrlData : NSObject
{
    NSURL *_url;
    NSString *_linkStr;
    struct _NSRange _range;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *linkStr; // @synthesize linkStr=_linkStr;
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
@property(nonatomic) struct _NSRange range; // @synthesize range=_range;

@end

