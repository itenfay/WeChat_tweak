//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface YYWKGameWebViewConfig : NSObject
{
    _Bool _useUrlSchemeHandler;
    _Bool _useLoadHtmlString;
    NSString *_customScript;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *customScript; // @synthesize customScript=_customScript;
@property(nonatomic) _Bool useLoadHtmlString; // @synthesize useLoadHtmlString=_useLoadHtmlString;
@property(nonatomic) _Bool useUrlSchemeHandler; // @synthesize useUrlSchemeHandler=_useUrlSchemeHandler;
- (id)toDictDesc;

@end

