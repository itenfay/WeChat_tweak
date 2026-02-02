//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FinderPaidCollectionInfo, NSString, UIViewController;
@protocol WCFinderCollectionFeedListProvider, WCFinderCollectionFeedListViewControllerDelegate;

@interface WCFinderPaidCollectionInfoJumpParams : NSObject
{
    _Bool _showHalfDetailVC;
    _Bool _autoStartPurchase;
    _Bool _isSelfCollection;
    _Bool _authorJumpDetail;
    int _commentScene;
    FinderPaidCollectionInfo *_paidCollection;
    UIViewController *_fromVC;
    NSString *_sourceFeedID;
    id <WCFinderCollectionFeedListProvider> _dataProvider;
    NSString *_authorFinderUsername;
    CDUnknownBlockType _completion;
    unsigned long long _jumpType;
    NSString *_targetFeedID;
    id <WCFinderCollectionFeedListViewControllerDelegate> _feedListDelegate;
}

+ (id)paramsWithPaidCollection:(id)arg1 fromVC:(id)arg2;
- (void).cxx_destruct;
@property(nonatomic) _Bool authorJumpDetail; // @synthesize authorJumpDetail=_authorJumpDetail;
@property(nonatomic) _Bool isSelfCollection; // @synthesize isSelfCollection=_isSelfCollection;
@property(nonatomic) int commentScene; // @synthesize commentScene=_commentScene;
@property(nonatomic) __weak id <WCFinderCollectionFeedListViewControllerDelegate> feedListDelegate; // @synthesize feedListDelegate=_feedListDelegate;
@property(nonatomic) _Bool autoStartPurchase; // @synthesize autoStartPurchase=_autoStartPurchase;
@property(copy, nonatomic) NSString *targetFeedID; // @synthesize targetFeedID=_targetFeedID;
@property(nonatomic) unsigned long long jumpType; // @synthesize jumpType=_jumpType;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(copy, nonatomic) NSString *authorFinderUsername; // @synthesize authorFinderUsername=_authorFinderUsername;
@property(nonatomic) _Bool showHalfDetailVC; // @synthesize showHalfDetailVC=_showHalfDetailVC;
@property(retain, nonatomic) id <WCFinderCollectionFeedListProvider> dataProvider; // @synthesize dataProvider=_dataProvider;
@property(copy, nonatomic) NSString *sourceFeedID; // @synthesize sourceFeedID=_sourceFeedID;
@property(nonatomic) __weak UIViewController *fromVC; // @synthesize fromVC=_fromVC;
@property(retain, nonatomic) FinderPaidCollectionInfo *paidCollection; // @synthesize paidCollection=_paidCollection;

@end

