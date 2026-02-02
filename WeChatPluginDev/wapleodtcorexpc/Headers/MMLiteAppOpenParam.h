//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface MMLiteAppOpenParam : NSObject
{
    long long _isHalfScreen;
    double _heightPercent;
    NSString *_page;
    NSString *_query;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *query; // @synthesize query=_query;
@property(retain, nonatomic) NSString *page; // @synthesize page=_page;
@property(nonatomic) double heightPercent; // @synthesize heightPercent=_heightPercent;
@property(nonatomic) long long isHalfScreen; // @synthesize isHalfScreen=_isHalfScreen;
- (id)init;

@end

