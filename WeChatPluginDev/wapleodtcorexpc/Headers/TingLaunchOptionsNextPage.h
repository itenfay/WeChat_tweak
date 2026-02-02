//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMListenCategoryItem, NSNumber, NSString, TingListSourceContext;

@interface TingLaunchOptionsNextPage : NSObject
{
    unsigned long long _nextPageType;
    unsigned long long _consumeType;
    MMListenCategoryItem *_categoryItem;
    TingListSourceContext *_listContext;
    unsigned long long _bizType;
    NSNumber *_locLineType;
    NSString *_fromFinderFeedId;
}

+ (id)nextPageWithType:(unsigned long long)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *fromFinderFeedId; // @synthesize fromFinderFeedId=_fromFinderFeedId;
@property(nonatomic) NSNumber *locLineType; // @synthesize locLineType=_locLineType;
@property(nonatomic) unsigned long long bizType; // @synthesize bizType=_bizType;
@property(retain, nonatomic) TingListSourceContext *listContext; // @synthesize listContext=_listContext;
@property(retain, nonatomic) MMListenCategoryItem *categoryItem; // @synthesize categoryItem=_categoryItem;
@property(nonatomic) unsigned long long consumeType; // @synthesize consumeType=_consumeType;
@property(nonatomic) unsigned long long nextPageType; // @synthesize nextPageType=_nextPageType;
- (id)initWithType:(unsigned long long)arg1;

@end

