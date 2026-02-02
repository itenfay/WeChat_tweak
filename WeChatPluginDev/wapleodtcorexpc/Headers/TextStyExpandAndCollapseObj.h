//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, UIColor;
@protocol ILinkEventExt;

@interface TextStyExpandAndCollapseObj : NSObject
{
    _Bool _isExpand;
    NSString *_truncatedTrailingLinkText;
    NSString *_truncatedTrailingLinkUrl;
    UIColor *_truncatedTrailingLinkColor;
    id <ILinkEventExt> _linkDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <ILinkEventExt> linkDelegate; // @synthesize linkDelegate=_linkDelegate;
@property(retain, nonatomic) UIColor *truncatedTrailingLinkColor; // @synthesize truncatedTrailingLinkColor=_truncatedTrailingLinkColor;
@property(retain, nonatomic) NSString *truncatedTrailingLinkUrl; // @synthesize truncatedTrailingLinkUrl=_truncatedTrailingLinkUrl;
@property(retain, nonatomic) NSString *truncatedTrailingLinkText; // @synthesize truncatedTrailingLinkText=_truncatedTrailingLinkText;
@property(nonatomic) _Bool isExpand; // @synthesize isExpand=_isExpand;

@end

