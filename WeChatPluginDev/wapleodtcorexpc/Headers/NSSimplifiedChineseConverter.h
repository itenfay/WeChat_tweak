//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface NSSimplifiedChineseConverter : NSObject
{
    NSDictionary *_t2sMap;
    NSDictionary *_s2tMap;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *s2tMap; // @synthesize s2tMap=_s2tMap;
@property(retain, nonatomic) NSDictionary *t2sMap; // @synthesize t2sMap=_t2sMap;
- (id)getTraditionalChineseDic;
- (id)traditional:(id)arg1;
- (void)loadMap;
- (id)simplify:(id)arg1;

@end

