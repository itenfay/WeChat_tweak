//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface SearchResult : NSObject
{
    unsigned char _weight;
    NSString *_keyword;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned char weight; // @synthesize weight=_weight;
@property(retain, nonatomic) NSString *keyword; // @synthesize keyword=_keyword;
- (id)initWithKeyword:(id)arg1 weight:(unsigned char)arg2;

@end

