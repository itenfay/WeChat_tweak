//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WebSearchBarConfig : NSObject
{
    NSString *_iconUrl;
    NSString *_prefixTitle;
    NSString *_suffixTitle;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *suffixTitle; // @synthesize suffixTitle=_suffixTitle;
@property(copy, nonatomic) NSString *prefixTitle; // @synthesize prefixTitle=_prefixTitle;
@property(copy, nonatomic) NSString *iconUrl; // @synthesize iconUrl=_iconUrl;

@end

