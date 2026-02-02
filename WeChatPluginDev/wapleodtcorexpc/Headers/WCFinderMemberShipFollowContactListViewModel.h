//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSData, NSMutableArray, NSMutableSet, NSString;
@protocol WCFinderMemberShipFollowContactListViewModelDelegate;

@interface WCFinderMemberShipFollowContactListViewModel : NSObject
{
    _Bool _continueFlag;
    _Bool _isFetchingData;
    NSMutableArray *_followArray;
    id <WCFinderMemberShipFollowContactListViewModelDelegate> _delegate;
    NSString *_finderUsername;
    NSData *_lastBuffer;
    NSMutableSet *_tidContainSet;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableSet *tidContainSet; // @synthesize tidContainSet=_tidContainSet;
@property(nonatomic) _Bool isFetchingData; // @synthesize isFetchingData=_isFetchingData;
@property(nonatomic) _Bool continueFlag; // @synthesize continueFlag=_continueFlag;
@property(retain, nonatomic) NSData *lastBuffer; // @synthesize lastBuffer=_lastBuffer;
@property(copy, nonatomic) NSString *finderUsername; // @synthesize finderUsername=_finderUsername;
@property(nonatomic) __weak id <WCFinderMemberShipFollowContactListViewModelDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSMutableArray *followArray; // @synthesize followArray=_followArray;
- (void)requestDataWithLastBuffer:(id)arg1;
- (void)fetchMoreData;
- (void)fetchFirstPageData;
- (void)fetchLocalData;
- (id)initWithFinderUsername:(id)arg1;

@end

