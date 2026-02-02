//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, UIViewController;

@interface WCAdFinderDialogBaseInfo : NSObject
{
    UIViewController *_fromVC;
    NSString *_iconUrl;
    NSString *_title;
    NSString *_buttonText;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *buttonText; // @synthesize buttonText=_buttonText;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *iconUrl; // @synthesize iconUrl=_iconUrl;
@property(nonatomic) __weak UIViewController *fromVC; // @synthesize fromVC=_fromVC;

@end

