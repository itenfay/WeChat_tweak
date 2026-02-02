//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WAMapAppItem : NSObject
{
    unsigned long long _mapType;
    NSString *_mapName;
    NSString *_btnDisplayName;
    NSString *_viewUrl;
    NSString *_navigateUrl;
    NSString *_installUrl;
    NSString *_queryUrl;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *queryUrl; // @synthesize queryUrl=_queryUrl;
@property(retain, nonatomic) NSString *installUrl; // @synthesize installUrl=_installUrl;
@property(retain, nonatomic) NSString *navigateUrl; // @synthesize navigateUrl=_navigateUrl;
@property(retain, nonatomic) NSString *viewUrl; // @synthesize viewUrl=_viewUrl;
@property(retain, nonatomic) NSString *btnDisplayName; // @synthesize btnDisplayName=_btnDisplayName;
@property(retain, nonatomic) NSString *mapName; // @synthesize mapName=_mapName;
@property(nonatomic) unsigned long long mapType; // @synthesize mapType=_mapType;

@end

