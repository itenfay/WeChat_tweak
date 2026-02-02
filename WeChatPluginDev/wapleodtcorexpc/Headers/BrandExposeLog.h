//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface BrandExposeLog : NSObject
{
    _Bool _isTop;
    _Bool _isRedDot;
    _Bool _isClicked;
    unsigned int _timestamp;
    unsigned int _rank;
    NSString *_bizUsername;
    NSString *_mid;
    NSString *_idx;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isClicked; // @synthesize isClicked=_isClicked;
@property(nonatomic) _Bool isRedDot; // @synthesize isRedDot=_isRedDot;
@property(nonatomic) _Bool isTop; // @synthesize isTop=_isTop;
@property(nonatomic) unsigned int rank; // @synthesize rank=_rank;
@property(retain, nonatomic) NSString *idx; // @synthesize idx=_idx;
@property(retain, nonatomic) NSString *mid; // @synthesize mid=_mid;
@property(retain, nonatomic) NSString *bizUsername; // @synthesize bizUsername=_bizUsername;
@property(nonatomic) unsigned int timestamp; // @synthesize timestamp=_timestamp;
- (id)logString;

@end

