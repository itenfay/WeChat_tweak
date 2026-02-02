//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableSet, NSString;

@interface FTSContactIndexRecord : NSObject
{
    unsigned int _aboveMaxUserNameCount;
    unsigned long long _type;
    NSString *_maxIndexedUserName;
    NSMutableSet *_unIndexedUsernames;
    NSMutableArray *_unIndexedUsernameArr;
    NSString *_nextMaxUserName;
    NSMutableSet *_indexingUserNames;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int aboveMaxUserNameCount; // @synthesize aboveMaxUserNameCount=_aboveMaxUserNameCount;
@property(retain, nonatomic) NSMutableSet *indexingUserNames; // @synthesize indexingUserNames=_indexingUserNames;
@property(retain, nonatomic) NSString *nextMaxUserName; // @synthesize nextMaxUserName=_nextMaxUserName;
@property(retain, nonatomic) NSMutableArray *unIndexedUsernameArr; // @synthesize unIndexedUsernameArr=_unIndexedUsernameArr;
@property(retain, nonatomic) NSMutableSet *unIndexedUsernames; // @synthesize unIndexedUsernames=_unIndexedUsernames;
@property(retain, nonatomic) NSString *maxIndexedUserName; // @synthesize maxIndexedUserName=_maxIndexedUserName;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
- (id)init;

@end

