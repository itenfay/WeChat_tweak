//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSData, NSMutableArray, WCFinderContact;
@protocol WCFinderBlackListViewModelDelegate;

@interface WCFinderBlackListViewModel : NSObject
{
    _Bool _hasMoreContact;
    id <WCFinderBlackListViewModelDelegate> _delegate;
    NSMutableArray *_contactArray;
    WCFinderContact *_contact;
    NSData *_lastBuffer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSData *lastBuffer; // @synthesize lastBuffer=_lastBuffer;
@property(nonatomic) _Bool hasMoreContact; // @synthesize hasMoreContact=_hasMoreContact;
@property(retain, nonatomic) WCFinderContact *contact; // @synthesize contact=_contact;
@property(retain, nonatomic) NSMutableArray *contactArray; // @synthesize contactArray=_contactArray;
@property(nonatomic) __weak id <WCFinderBlackListViewModelDelegate> delegate; // @synthesize delegate=_delegate;
- (void)revertBlackContact:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)fetchMoreData;
- (void)fetchLocalData;
- (id)initWithContact:(id)arg1;

@end

