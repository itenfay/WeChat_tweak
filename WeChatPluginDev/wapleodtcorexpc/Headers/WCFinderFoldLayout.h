//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface WCFinderFoldLayout : NSObject
{
    unsigned long long _layoutType;
    NSMutableArray *_dataItems;
    NSString *_userName;
    unsigned long long _totalCount;
}

+ (id)layoutWithFoldLayout:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long totalCount; // @synthesize totalCount=_totalCount;
@property(copy, nonatomic) NSString *userName; // @synthesize userName=_userName;
@property(retain, nonatomic) NSMutableArray *dataItems; // @synthesize dataItems=_dataItems;
@property(nonatomic) unsigned long long layoutType; // @synthesize layoutType=_layoutType;
- (id)nickName;
- (id)titleForScene:(unsigned long long)arg1;
- (id)title;
- (id)description;
- (id)initWithFoldLayout:(id)arg1;

@end

