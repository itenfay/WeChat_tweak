//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, NSURL;

@interface WALocalCacheEncryptFileInfo : NSObject
{
    NSString *_fullFileUrl;
    NSURL *_sourceUrl;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSURL *sourceUrl; // @synthesize sourceUrl=_sourceUrl;
@property(copy, nonatomic) NSString *fullFileUrl; // @synthesize fullFileUrl=_fullFileUrl;

@end

