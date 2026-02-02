//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FinderUserPageReqPreload, NSString;

@interface WCFinderProfilePreloadParams : NSObject
{
    _Bool _showBizIdentifier;
    int _reportScene;
    unsigned int _enterType;
    NSString *_username;
    NSString *_bizUsername;
    NSString *_feedTid;
    FinderUserPageReqPreload *_preload;
}

- (void).cxx_destruct;
@property(retain, nonatomic) FinderUserPageReqPreload *preload; // @synthesize preload=_preload;
@property(nonatomic) unsigned int enterType; // @synthesize enterType=_enterType;
@property(retain, nonatomic) NSString *feedTid; // @synthesize feedTid=_feedTid;
@property(nonatomic) int reportScene; // @synthesize reportScene=_reportScene;
@property(nonatomic) _Bool showBizIdentifier; // @synthesize showBizIdentifier=_showBizIdentifier;
@property(retain, nonatomic) NSString *bizUsername; // @synthesize bizUsername=_bizUsername;
@property(retain, nonatomic) NSString *username; // @synthesize username=_username;

@end

