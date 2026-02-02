//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCPayLqbShowInfo : NSObject
{
    _Bool _isShowlqbEntry;
    _Bool _isOpenlqb;
    NSString *_lqbOpenUrl;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *lqbOpenUrl; // @synthesize lqbOpenUrl=_lqbOpenUrl;
@property(nonatomic) _Bool isOpenlqb; // @synthesize isOpenlqb=_isOpenlqb;
@property(nonatomic) _Bool isShowlqbEntry; // @synthesize isShowlqbEntry=_isShowlqbEntry;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

