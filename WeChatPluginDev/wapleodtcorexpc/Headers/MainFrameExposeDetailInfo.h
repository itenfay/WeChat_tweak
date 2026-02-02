//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface MainFrameExposeDetailInfo : NSObject
{
    NSString *_username;
    long long _unreadCount;
    long long _mute;
    unsigned long long _msgTime;
}

+ (id)modelCustomPropertyMapperForConfigTag:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long msgTime; // @synthesize msgTime=_msgTime;
@property(nonatomic) long long mute; // @synthesize mute=_mute;
@property(nonatomic) long long unreadCount; // @synthesize unreadCount=_unreadCount;
@property(retain, nonatomic) NSString *username; // @synthesize username=_username;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

