//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSData, NSMutableArray, NSMutableSet, NSString;
@protocol WCFinderMembershipFansListViewModelDelegate;

@interface WCFinderMembershipFansListViewModel : NSObject
{
    _Bool _continueFlag;
    _Bool _isFetchingData;
    NSMutableArray *_fansArray;
    id <WCFinderMembershipFansListViewModelDelegate> _delegate;
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
@property(nonatomic) __weak id <WCFinderMembershipFansListViewModelDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSMutableArray *fansArray; // @synthesize fansArray=_fansArray;
- (void)fetchMoreData;
- (void)fetchLocalData;
- (id)initWithFinderUsername:(id)arg1;

@end

