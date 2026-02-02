//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface MainSessionReportDetail : NSObject
{
    NSString *_username;
    unsigned long long _msgTime;
    long long _position;
    long long _subPos;
    long long _unreadCount;
}

+ (id)modelCustomPropertyMapperForConfigTag:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) long long unreadCount; // @synthesize unreadCount=_unreadCount;
@property(nonatomic) long long subPos; // @synthesize subPos=_subPos;
@property(nonatomic) long long position; // @synthesize position=_position;
@property(nonatomic) unsigned long long msgTime; // @synthesize msgTime=_msgTime;
@property(retain, nonatomic) NSString *username; // @synthesize username=_username;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

