//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface GameCenterMsgTimeInfo : NSObject
{
    unsigned int _createTime;
    unsigned int _expireTime;
}

@property(nonatomic) unsigned int expireTime; // @synthesize expireTime=_expireTime;
@property(nonatomic) unsigned int createTime; // @synthesize createTime=_createTime;

@end

