//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, WCFinderTagListItem;

@interface WCFinderTagListViewLayoutItem : NSObject
{
    NSString *_displayText;
    WCFinderTagListItem *_item;
    struct CGRect _frame;
}

- (void).cxx_destruct;
@property(nonatomic) struct CGRect frame; // @synthesize frame=_frame;
@property(retain, nonatomic) WCFinderTagListItem *item; // @synthesize item=_item;
@property(retain, nonatomic) NSString *displayText; // @synthesize displayText=_displayText;

@end

