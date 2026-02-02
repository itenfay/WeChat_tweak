//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface Scope2ApiAuthInfo : NSObject
{
    unsigned int _scopeStatus;
    NSString *_scopeDesc;
    NSMutableArray *_apiList;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *apiList; // @synthesize apiList=_apiList;
@property(retain, nonatomic) NSString *scopeDesc; // @synthesize scopeDesc=_scopeDesc;
@property(nonatomic) unsigned int scopeStatus; // @synthesize scopeStatus=_scopeStatus;

@end

