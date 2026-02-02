//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;
@protocol WCFinderCollectionFeedListViewControllerDelegate;

@interface WCFinderCollectionFeedListVCParams : NSObject
{
    _Bool _autoShowCollectionList;
    _Bool _showPaidCollectionSkipToast;
    _Bool _shouldUserAuthorScene;
    _Bool _hasAutoDestinated;
    NSString *_destinationFeedID;
    id <WCFinderCollectionFeedListViewControllerDelegate> _vcDelegate;
}

+ (id)defaultParams;
- (void).cxx_destruct;
@property(nonatomic) _Bool hasAutoDestinated; // @synthesize hasAutoDestinated=_hasAutoDestinated;
@property(nonatomic) _Bool shouldUserAuthorScene; // @synthesize shouldUserAuthorScene=_shouldUserAuthorScene;
@property(nonatomic) __weak id <WCFinderCollectionFeedListViewControllerDelegate> vcDelegate; // @synthesize vcDelegate=_vcDelegate;
@property(nonatomic) _Bool showPaidCollectionSkipToast; // @synthesize showPaidCollectionSkipToast=_showPaidCollectionSkipToast;
@property(nonatomic) _Bool autoShowCollectionList; // @synthesize autoShowCollectionList=_autoShowCollectionList;
@property(copy, nonatomic) NSString *destinationFeedID; // @synthesize destinationFeedID=_destinationFeedID;

@end

