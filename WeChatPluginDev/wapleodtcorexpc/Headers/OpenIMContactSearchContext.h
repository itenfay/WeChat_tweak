//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface OpenIMContactSearchContext : NSObject
{
    unsigned int _searchScene;
    unsigned int _adScene;
    unsigned long long _wxaScene;
    NSString *_wxaAppId;
    NSString *_searchContext;
    unsigned long long _adId;
    NSString *_host;
}

+ (unsigned int)serachSubSceneFromUserName:(id)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *host; // @synthesize host=_host;
@property(nonatomic) unsigned long long adId; // @synthesize adId=_adId;
@property(nonatomic) unsigned int adScene; // @synthesize adScene=_adScene;
@property(nonatomic) unsigned int searchScene; // @synthesize searchScene=_searchScene;
@property(copy, nonatomic) NSString *searchContext; // @synthesize searchContext=_searchContext;
@property(copy, nonatomic) NSString *wxaAppId; // @synthesize wxaAppId=_wxaAppId;
@property(nonatomic) unsigned long long wxaScene; // @synthesize wxaScene=_wxaScene;

@end

