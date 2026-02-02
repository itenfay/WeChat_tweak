//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class UIViewController, WCFinderFeedDraft, WCFinderPostSessionModel;
@protocol WCFinderPostViewControllerDelegate;

@interface WCFinderPostViewControllerOpenParams : NSObject
{
    _Bool _presentAnimated;
    WCFinderPostSessionModel *_postSession;
    WCFinderFeedDraft *_draft;
    UIViewController *_fromVC;
    id <WCFinderPostViewControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool presentAnimated; // @synthesize presentAnimated=_presentAnimated;
@property(nonatomic) __weak id <WCFinderPostViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIViewController *fromVC; // @synthesize fromVC=_fromVC;
@property(retain, nonatomic) WCFinderFeedDraft *draft; // @synthesize draft=_draft;
@property(retain, nonatomic) WCFinderPostSessionModel *postSession; // @synthesize postSession=_postSession;

@end

