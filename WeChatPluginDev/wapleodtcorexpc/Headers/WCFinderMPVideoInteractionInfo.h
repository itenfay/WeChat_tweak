//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCFinderMPVideoInteractionInfo : NSObject
{
    _Bool _isLike;
    _Bool _isFav;
    NSString *_feedKey;
    unsigned long long _likeCount;
    unsigned long long _favCount;
}

+ (id)interactionInfoWithDataItem:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long favCount; // @synthesize favCount=_favCount;
@property(nonatomic) _Bool isFav; // @synthesize isFav=_isFav;
@property(nonatomic) unsigned long long likeCount; // @synthesize likeCount=_likeCount;
@property(nonatomic) _Bool isLike; // @synthesize isLike=_isLike;
@property(retain, nonatomic) NSString *feedKey; // @synthesize feedKey=_feedKey;

@end

