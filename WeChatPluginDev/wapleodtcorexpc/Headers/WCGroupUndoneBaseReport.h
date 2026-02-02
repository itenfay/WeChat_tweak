//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCGroupUndoneBaseReport : NSObject
{
    unsigned int _eRole;
    unsigned int _eMsgType;
    NSString *_todoId;
    NSString *_roomId;
    NSString *_appId;
    NSString *_appName;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *appName; // @synthesize appName=_appName;
@property(retain, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(nonatomic) unsigned int eMsgType; // @synthesize eMsgType=_eMsgType;
@property(nonatomic) unsigned int eRole; // @synthesize eRole=_eRole;
@property(retain, nonatomic) NSString *roomId; // @synthesize roomId=_roomId;
@property(retain, nonatomic) NSString *todoId; // @synthesize todoId=_todoId;
- (void)setRoleByContact:(id)arg1;
- (void)report;
- (void)invalidate;
- (_Bool)isValid;

@end

