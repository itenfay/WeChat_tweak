//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface MMFinderLiveSubTitleComponentModel : NSObject
{
    NSString *_content;
    unsigned long long _componentTag;
    struct _NSRange _componentRange;
    struct _NSRange _displayedRange;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long componentTag; // @synthesize componentTag=_componentTag;
@property(nonatomic) struct _NSRange displayedRange; // @synthesize displayedRange=_displayedRange;
@property(nonatomic) struct _NSRange componentRange; // @synthesize componentRange=_componentRange;
@property(copy, nonatomic) NSString *content; // @synthesize content=_content;
- (id)getDisplayStr;

@end

