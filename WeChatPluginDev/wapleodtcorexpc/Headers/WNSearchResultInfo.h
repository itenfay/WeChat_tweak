//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray;

@interface WNSearchResultInfo : NSObject
{
    _Bool _isFromDesc;
    unsigned long long _location;
    unsigned long long _type;
    NSArray *_subSearchResultInfos;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *subSearchResultInfos; // @synthesize subSearchResultInfos=_subSearchResultInfos;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(nonatomic) _Bool isFromDesc; // @synthesize isFromDesc=_isFromDesc;
@property(nonatomic) unsigned long long location; // @synthesize location=_location;

@end

