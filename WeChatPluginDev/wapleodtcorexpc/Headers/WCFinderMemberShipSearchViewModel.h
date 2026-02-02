//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSData, NSString;
@protocol WCFinderMemberShipSearchViewModelDelegate;

@interface WCFinderMemberShipSearchViewModel : NSObject
{
    _Bool _hasMore;
    id <WCFinderMemberShipSearchViewModelDelegate> _delegate;
    NSArray *_results;
    NSString *_queryStr;
    NSString *_finderUsername;
    NSData *_lastBuff;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool hasMore; // @synthesize hasMore=_hasMore;
@property(retain, nonatomic) NSData *lastBuff; // @synthesize lastBuff=_lastBuff;
@property(copy, nonatomic) NSString *finderUsername; // @synthesize finderUsername=_finderUsername;
@property(copy, nonatomic) NSString *queryStr; // @synthesize queryStr=_queryStr;
@property(retain, nonatomic) NSArray *results; // @synthesize results=_results;
@property(nonatomic) __weak id <WCFinderMemberShipSearchViewModelDelegate> delegate; // @synthesize delegate=_delegate;
- (void)search:(id)arg1;
- (void)requestNextPage;
- (id)initWithFinderUserName:(id)arg1;

@end

