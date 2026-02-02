//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface MMMusicCheckPermissionResult : NSObject
{
    _Bool _canCreate;
    _Bool _chatroomEnabled;
    NSString *_songId;
    NSString *_statusVerifyInfo;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool chatroomEnabled; // @synthesize chatroomEnabled=_chatroomEnabled;
@property(retain, nonatomic) NSString *statusVerifyInfo; // @synthesize statusVerifyInfo=_statusVerifyInfo;
@property(retain, nonatomic) NSString *songId; // @synthesize songId=_songId;
@property(nonatomic) _Bool canCreate; // @synthesize canCreate=_canCreate;
- (id)description;

@end

