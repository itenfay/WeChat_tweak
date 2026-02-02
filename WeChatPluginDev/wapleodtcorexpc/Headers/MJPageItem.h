//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MJPageViewTitleItem, NSArray, UIViewController;

@interface MJPageItem : NSObject
{
    MJPageViewTitleItem *_titleView;
    UIViewController *_contentViewController;
    unsigned long long _tab;
    unsigned long long _editContentType;
    NSArray *_supportedSegmentTypes;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *supportedSegmentTypes; // @synthesize supportedSegmentTypes=_supportedSegmentTypes;
@property(nonatomic) unsigned long long editContentType; // @synthesize editContentType=_editContentType;
@property(nonatomic) unsigned long long tab; // @synthesize tab=_tab;
@property(retain, nonatomic) UIViewController *contentViewController; // @synthesize contentViewController=_contentViewController;
@property(retain, nonatomic) MJPageViewTitleItem *titleView; // @synthesize titleView=_titleView;
- (id)initWithTitleView:(id)arg1 contentViewController:(id)arg2 tab:(unsigned long long)arg3 editContentType:(unsigned long long)arg4 supportedSegmentTypes:(id)arg5;

@end

