//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface WASweeperInfo : NSObject
{
    unsigned int _appServiceType;
    unsigned long long _cacheSize;
    CDUnknownBlockType _cleanBlock;
    NSString *_nsAppID;
    NSString *_nsUsrname;
    NSString *_nsNickName;
    unsigned long long _type;
    NSMutableArray *_childSweeperInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *childSweeperInfo; // @synthesize childSweeperInfo=_childSweeperInfo;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(nonatomic) unsigned int appServiceType; // @synthesize appServiceType=_appServiceType;
@property(copy, nonatomic) NSString *nsNickName; // @synthesize nsNickName=_nsNickName;
@property(copy, nonatomic) NSString *nsUsrname; // @synthesize nsUsrname=_nsUsrname;
@property(copy, nonatomic) NSString *nsAppID; // @synthesize nsAppID=_nsAppID;
@property(copy, nonatomic) CDUnknownBlockType cleanBlock; // @synthesize cleanBlock=_cleanBlock;
@property(nonatomic) unsigned long long cacheSize; // @synthesize cacheSize=_cacheSize;

@end

