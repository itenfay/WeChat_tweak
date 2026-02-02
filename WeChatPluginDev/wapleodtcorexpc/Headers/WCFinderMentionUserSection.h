//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSData, NSMutableArray, NSString;

@interface WCFinderMentionUserSection : NSObject
{
    _Bool _couldFold;
    _Bool _hasMore;
    _Bool _isFold;
    NSString *_title;
    NSMutableArray *_contacts;
    NSString *_showMoreWording;
    NSData *_lastBuff;
    CDUnknownBlockType _fetchNext;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType fetchNext; // @synthesize fetchNext=_fetchNext;
@property(nonatomic) _Bool isFold; // @synthesize isFold=_isFold;
@property(nonatomic) _Bool hasMore; // @synthesize hasMore=_hasMore;
@property(nonatomic) _Bool couldFold; // @synthesize couldFold=_couldFold;
@property(retain, nonatomic) NSData *lastBuff; // @synthesize lastBuff=_lastBuff;
@property(retain, nonatomic) NSString *showMoreWording; // @synthesize showMoreWording=_showMoreWording;
@property(retain, nonatomic) NSMutableArray *contacts; // @synthesize contacts=_contacts;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (id)init;

@end

