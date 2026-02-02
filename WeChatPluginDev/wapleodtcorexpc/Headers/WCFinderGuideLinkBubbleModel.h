//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCFinderGuideLinkBubbleModel : NSObject
{
    _Bool _linkStyle;
    NSString *_iconUrl;
    NSString *_content;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool linkStyle; // @synthesize linkStyle=_linkStyle;
@property(copy, nonatomic) NSString *content; // @synthesize content=_content;
@property(copy, nonatomic) NSString *iconUrl; // @synthesize iconUrl=_iconUrl;

@end

