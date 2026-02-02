//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WAServiceEventParam : NSObject
{
    _Bool _afterThreadInject;
    _Bool _notAsyncIfPossibleForGameApp;
    _Bool _permissionCheck;
    unsigned int _srcWebviewID;
    unsigned int _dstWebviewID;
    NSString *_eventName;
    NSObject *_eventParam;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool permissionCheck; // @synthesize permissionCheck=_permissionCheck;
@property(nonatomic) _Bool notAsyncIfPossibleForGameApp; // @synthesize notAsyncIfPossibleForGameApp=_notAsyncIfPossibleForGameApp;
@property(nonatomic) _Bool afterThreadInject; // @synthesize afterThreadInject=_afterThreadInject;
@property(nonatomic) unsigned int dstWebviewID; // @synthesize dstWebviewID=_dstWebviewID;
@property(nonatomic) unsigned int srcWebviewID; // @synthesize srcWebviewID=_srcWebviewID;
@property(retain, nonatomic) NSObject *eventParam; // @synthesize eventParam=_eventParam;
@property(retain, nonatomic) NSString *eventName; // @synthesize eventName=_eventName;
- (id)init;

@end

