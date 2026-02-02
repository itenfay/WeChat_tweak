//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, UIView, UIViewController;

@interface WCFinderArbitraryResueItem : NSObject
{
    WCFinderArbitraryResueItem *_next;
    NSString *_identifier;
    UIView *_view;
    UIViewController *_vc;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIViewController *vc; // @synthesize vc=_vc;
@property(retain, nonatomic) UIView *view; // @synthesize view=_view;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(retain, nonatomic) WCFinderArbitraryResueItem *next; // @synthesize next=_next;

@end

