//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSArray, NSString;

@interface MMWebPrefetchHtmlTagInfo
{
    NSString *_htmlTag;
    NSString *_src;
    NSString *_fullSrc;
    NSArray *_arrAttr;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *arrAttr; // @synthesize arrAttr=_arrAttr;
@property(copy, nonatomic) NSString *fullSrc; // @synthesize fullSrc=_fullSrc;
@property(copy, nonatomic) NSString *src; // @synthesize src=_src;
@property(copy, nonatomic) NSString *htmlTag; // @synthesize htmlTag=_htmlTag;

@end

